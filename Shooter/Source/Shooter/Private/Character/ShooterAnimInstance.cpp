// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ShooterAnimInstance.h"
#include "Character/ShooterCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

UShooterAnimInstance::UShooterAnimInstance() :
	GroundSpeed(0.f),
	InAir(false),
	bIsAccelerating(false),
	MovementOffsetYaw(0.f),
	LastMovementOffsetYaw(0.f),
	CharacterPitch(0.f),
	TurnInPlaceCharacterYaw(0.f),
	TurnInPlaceCharacterYawLastFrame(0.f),
	RootYawOffset(0.f)
{

}

void UShooterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	ShooterCharacter = Cast<AShooterCharacter>(TryGetPawnOwner());
	if (ShooterCharacter)
	{
		ShooterCharacterMovement = ShooterCharacter->GetCharacterMovement();
	}
}

void UShooterAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (ShooterCharacter == nullptr)
	{
		ShooterCharacter = Cast<AShooterCharacter>(TryGetPawnOwner());
	}

	if (ShooterCharacter)
	{
		//bCrouched = ShooterCharacter->GetCrouched();

		GroundSpeed = UKismetMathLibrary::VSizeXY(ShooterCharacterMovement->Velocity); // Velocity of the character
		InAir = ShooterCharacterMovement->IsFalling(); // Character is in air?

		if (ShooterCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f)
		{
			bIsAccelerating = true;
		}
		else
		{
			bIsAccelerating = false;
		}

		FRotator AimRotation = ShooterCharacter->GetBaseAimRotation();
		FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(ShooterCharacter->GetVelocity());

		MovementOffsetYaw = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation, AimRotation).Yaw;
		
		if (ShooterCharacter->GetVelocity().Size() > 0.f)
		{
			LastMovementOffsetYaw = MovementOffsetYaw;
		}
		
		/**
		FString OffsetMessage = FString::Printf(TEXT("OffsetRotation: %f"), MovementOffsetYaw);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(1, 0.f, FColor::White, OffsetMessage);
		}
		*/
	}
	TurnInPlace();
	Lean(DeltaTime);
}

void UShooterAnimInstance::TurnInPlace()
{
	if (ShooterCharacter == nullptr) return;

	CharacterPitch = ShooterCharacter->GetBaseAimRotation().Pitch;

	if (GroundSpeed > 0)
	{
		// Don't want to turn in place; Character is moving
		RootYawOffset = 0.f;
		TurnInPlaceCharacterYaw = ShooterCharacter->GetActorRotation().Yaw;
		TurnInPlaceCharacterYawLastFrame = TurnInPlaceCharacterYaw;
		RotationCurveLastFrame = 0.f;
		RotationCurve = 0.f;
	}
	else
	{
		TurnInPlaceCharacterYawLastFrame = TurnInPlaceCharacterYaw;
		TurnInPlaceCharacterYaw = ShooterCharacter->GetActorRotation().Yaw;

		const float TurnInPlaceYawDelta{ TurnInPlaceCharacterYaw - TurnInPlaceCharacterYawLastFrame };

		// Root Yaw Offset, clapmed between -180 and 180
		RootYawOffset = UKismetMathLibrary::NormalizeAxis(RootYawOffset - TurnInPlaceYawDelta);

		const float Turning{ GetCurveValue(TEXT("Turning")) };

		if (Turning > 0.f)
		{
			RotationCurveLastFrame = RotationCurve;
			RotationCurve = GetCurveValue(TEXT("Rotation"));
			const float DeltaRotation{ RotationCurve - RotationCurveLastFrame };

			RootYawOffset > 0.f ? RootYawOffset -= DeltaRotation : RootYawOffset += DeltaRotation;

			const float ABSRootYawOffset{ FMath::Abs(RootYawOffset)};

			if (ABSRootYawOffset > 90.f)
			{
				const float YawExcess{ ABSRootYawOffset - 90.f };
				RootYawOffset > 0 ? RootYawOffset -= YawExcess : RootYawOffset += YawExcess;
			}
		}

		/**
		if (GEngine) GEngine->AddOnScreenDebugMessage(1, -1, FColor::Blue, FString::Printf(TEXT("CharacterYaw: %f"), CharacterYaw));

		if (GEngine) GEngine->AddOnScreenDebugMessage(2, -1, FColor::Red, FString::Printf(TEXT("RootYawOffset: %f"), RootYawOffset));
		*/
	}
}

void UShooterAnimInstance::Lean(float DeltaTime)
{
	if (ShooterCharacter == nullptr) return;

	CharacterYawLastFrame = CharacterYaw;
	CharacterYaw = ShooterCharacter->GetActorRotation().Yaw;

	const float Target{ (CharacterYaw - CharacterYawLastFrame) / DeltaTime };

	const float Interp{ FMath::FInterpTo(YawDelta, Target, DeltaTime, 6.f) };

	YawDelta = FMath::Clamp(Interp, -90.f, 90.f);
}
