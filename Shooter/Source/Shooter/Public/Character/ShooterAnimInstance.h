// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterTypes.h"
#include "Animation/AnimInstance.h"
#include "ShooterAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API UShooterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	// Functions
	UShooterAnimInstance(); // Constructor

	virtual void NativeInitializeAnimation() override;
	
	UFUNCTION(BlueprintCallable)
		virtual void NativeUpdateAnimation(float DeltaTime) override;






protected:
	/** Handle turning in place variables */
	void TurnInPlace();

	/** Handle calculations for leaning while running */
	void Lean(float DeltaTime);





private:
	// Variables
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
		class AShooterCharacter* ShooterCharacter;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = true))
		class UCharacterMovementComponent* ShooterCharacterMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = true))
		float GroundSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = true))
		bool InAir;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = true))
		bool bIsAccelerating;

	/** Offset Pitch of the character the present frame */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn in Place", meta = (AllowPrivateAccess = true))
		float CharacterPitch;

	/** Offset Yaw of the character the present frame while moving*/
	float CharacterYaw;

	/** Offset Yaw of the character the present frame while moving*/
	float CharacterYawLastFrame;

	/** Yaw delta used for leaning while moving */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Lean, meta = (AllowPrivateAccess = true))
		float YawDelta;

	/** Offset Yaw of the character the present frame while in place */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn In Place", meta = (AllowPrivateAccess = true))
		float TurnInPlaceCharacterYaw;

	/** Offset Yaw of the character the previous frame while in place */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn In Place", meta = (AllowPrivateAccess = true))
		float TurnInPlaceCharacterYawLastFrame;

	/** Offset Yaw used for strafing */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = true))
		float MovementOffsetYaw;

	/** Offset Yaw the frame before stopping movement */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = true))
		float LastMovementOffsetYaw;

	/** Offset Yaw for the root bone of the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn In Place", meta = (AllowPrivateAccess = true))
		float RootYawOffset;

	/** Rotation Curve's value for the current frame */
	float RotationCurve;

	/** Rotation Curve's value for the last frame */
	float RotationCurveLastFrame;

	/** True when crouched 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crouching, meta = (AllowPrivateAccess = true))
		bool bCrouched;
	*/
};