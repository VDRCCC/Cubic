// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ShooterCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/SkeletalMeshSocket.h"
#include "DrawDebugHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Perception/AISense_Hearing.h"

// Sets default values
AShooterCharacter::AShooterCharacter() :
	// Character Health
	HealthMax(200),
	CurrentHealth(HealthMax),

	// Damage Output
	Damage(25),
	DamageUltimate(125),

	// Ultimate Timer Variables
	UltimateTimer(30.f),
	UltimateTimerTriggered(false),

	// Camera FOV
	CameraDefaultFOV(0.f) /** Being set in Begin Play */,
	CameraZoomedFOV(40.f),
	ZoomInterpSpeed(20.f),

	// Crosshair Spread Multiplier and Factors
	CrosshairSpreadMultiplier(0.f),
	CrosshairVelocityFactor(0.f),
	CrosshairInAirFactor(0.f),
	CrosshairAimFactor(0.f),
	CrosshairShootingFactor(0.f),

	// Bullet Fire Timer Variables
	ShootTimeDuration(0.05f),
	bFiringBullet(false),

	// Movement Variables
	bCrouched(false),
	CrouchingCapsuleHalfHeight(65),
	StandingCapsuleHalfHeight(95),

	// Level Variables
	LevelIsRotating(false)

{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Creates Camera Boom
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 300.f; // Distance between Character and Camera
	CameraBoom->bUsePawnControlRotation = true; // Rotate arm based on controller rotation
	CameraBoom->SocketOffset = FVector(0.f, 100.f, 25.f);

	// Creates Camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(CameraBoom); // Attaches Camera to Camera Boom

	// Stops Character from rotating alongside the controller rotation of the Camera, allowing for Camera rotation around the Character
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = true;

	// Defines the Character movement effects of rotating the Camera controller
	GetCharacterMovement()->bOrientRotationToMovement = false; // Enable or Disable fixation of Character movement to the movement inputs
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f); // Rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	AutoPossessPlayer = EAutoReceiveInput::Player0; // Character autopossesses Player Object at Game Start
}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(ShooterContext, 0);
		}
	}

	if (Camera)
	{
		CameraDefaultFOV = GetCamera()->FieldOfView;
		CameraCurrentFOV = CameraDefaultFOV;
	}
}

// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/** Handle interpolation of zooming in and out */
	CameraInterpZoom(DeltaTime);

	/** Calculate crosshair spread multiplier */
	CalculateCrosshairSpread(DeltaTime);

	/** Interpolate player character's capsule's half height on crouching or standing actions */
	InterpCapsuleHalfHeight(DeltaTime);

	if (UltimateTimerTriggered)
	{
		UltimateTimer -= DeltaTime;

		if (UltimateTimer <= 0.f)
		{
			UltimateTimerTriggered = false;
			UltimateTimer = 30.f;
		}
	}
}

// Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MovementAction, ETriggerEvent::Triggered, this, &AShooterCharacter::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AShooterCharacter::Look);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AShooterCharacter::Jump);
		EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered, this, &AShooterCharacter::ShootHipFire);
		EnhancedInputComponent->BindAction(UltimateAction, ETriggerEvent::Triggered, this, &AShooterCharacter::ShootUltimate);
	}
}

void AShooterCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisValue = Value.Get<FVector2D>();

	if (GetController())
	{
		if (CameraCurrentFOV >= CameraDefaultFOV + (CameraDefaultFOV - CameraZoomedFOV) / 2.f)
		{
			AddControllerPitchInput(LookAxisValue.Y * 0.2f);
			AddControllerYawInput(LookAxisValue.X * 0.2f);
		}
		else if (CameraCurrentFOV < CameraDefaultFOV + (CameraDefaultFOV - CameraZoomedFOV) / 2.f)
		{
			AddControllerPitchInput(LookAxisValue.Y);
			AddControllerYawInput(LookAxisValue.X);
		}
	}
}

void AShooterCharacter::Move(const FInputActionValue& Value)
{
	if (ActionState != EActionState::EAS_Ultimate)
	{
		const FVector2D MovementVector = Value.Get<FVector2D>();

		const FRotator ControlRotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, ControlRotation.Yaw, 0.f);

		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
	
}

void AShooterCharacter::Jump()
{
	Super::Jump();
}

void AShooterCharacter::ShootHipFire(const FInputActionValue& Value)
{
	if (ActionState == EActionState::EAS_Unoccupied)
	{
		ActionState = EActionState::EAS_Shooting;
		PlayHipFireMontage(FName("Shot1"));
	}

	// Start timer for firing bullets to affect the crosshairs
	StartCrosshairBulletFire();
}

void AShooterCharacter::PlayHipFireMontage(const FName& SectionName)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

	if (AnimInstance && HipFireMontage)
	{
		PlayMontageSection(HipFireMontage, SectionName);
	}
}

void AShooterCharacter::ShootUltimate(const FInputActionValue& Value)
{
	if (ActionState == EActionState::EAS_Unoccupied && !UltimateTimerTriggered)
	{
		ActionState = EActionState::EAS_Ultimate;
		PlayUltimateMontage(FName("Ultimate1"));

		UltimateTimerTriggered = true;
	}
}

void AShooterCharacter::PlayUltimateMontage(const FName& SectionName)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

	// DO ROTATION OF CHARACTER SO HE IS POINTED TOWARDS THE RIGHT DIRECTION USE GETBEAMENDLOCATION TO GET THE COORDINATES TO ORIENT THE CHARACTER TOWARDS

	if (AnimInstance && UltimateMontage)
	{
		PlayMontageSection(UltimateMontage, SectionName);
	}
}

bool AShooterCharacter::GetBeamEndLocation(const FVector& MuzzleSocketLocation, FVector& OutBeamLocation)
{
	// Get current size of viewport
	FVector2D ViewportSize;
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}

	// Get screen space location of crosshairs
	FVector2D CrosshairLocation(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);
	CrosshairLocation.Y += 30.f;
	CrosshairLocation.X += 30.f;
	FVector CrosshairWorldPosition;
	FVector CrosshairWorldDirection;

	// Get world position and direction of crosshairs
	bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(
		UGameplayStatics::GetPlayerController(this, 0),
		CrosshairLocation,
		CrosshairWorldPosition,
		CrosshairWorldDirection
	);

	if (bScreenToWorld) // Was the projection successful?
	{
		FHitResult ScreenTraceHit;
		const FVector Start{ CrosshairWorldPosition };
		const FVector End{ CrosshairWorldPosition + CrosshairWorldDirection * 50'000.f };

		// Set Beam end point to line trace end point
		OutBeamLocation = End;

		// Trace outward from crosshairs world location
		GetWorld()->LineTraceSingleByChannel(
			ScreenTraceHit,
			Start,
			End,
			ECollisionChannel::ECC_OverlapAll_Deprecated
		);

		if (ScreenTraceHit.bBlockingHit) // Was there a trace hit?
		{
			// Beam end point is now trace hit location
			OutBeamLocation = ScreenTraceHit.Location;

		}


		// Perform a trace from the gun barrel
		FHitResult WeaponTraceHit;
		const FVector WeaponTraceStart{ MuzzleSocketLocation };
		const FVector WeaponTraceEnd{ OutBeamLocation };

		GetWorld()->LineTraceSingleByChannel(
			WeaponTraceHit,
			WeaponTraceStart,
			WeaponTraceEnd,
			ECollisionChannel::ECC_Visibility
		);

		if (WeaponTraceHit.bBlockingHit) // Object between barrel and BeamEndPoint?
		{
			// Beam end point is now trace hit location
			OutBeamLocation = WeaponTraceHit.Location;
		}

		OutBeamLocationFinal = OutBeamLocation;

		return true;
	}

	return false;
}

void AShooterCharacter::CameraInterpZoom(float DeltaTime)
{
	APlayerController* PlayerController = Cast<APlayerController>(Controller);

	if (PlayerController->IsInputKeyDown(EKeys::RightMouseButton) && CameraCurrentFOV != CameraZoomedFOV)
	{
		CameraCurrentFOV = FMath::FInterpTo(
			CameraCurrentFOV,
			CameraZoomedFOV,
			DeltaTime,
			ZoomInterpSpeed
		);

		GetCamera()->SetFieldOfView(CameraCurrentFOV);
	}

	else if (!PlayerController->IsInputKeyDown(EKeys::RightMouseButton) && CameraCurrentFOV != CameraDefaultFOV)
	{
		CameraCurrentFOV = FMath::FInterpTo(
			CameraCurrentFOV,
			CameraDefaultFOV,
			DeltaTime,
			ZoomInterpSpeed
		);

		GetCamera()->SetFieldOfView(CameraCurrentFOV);
	}
}

void AShooterCharacter::CalculateCrosshairSpread(float DeltaTime)
{
	FVector2D WalkSpeedRange{ 0.f, 600.f };
	FVector2D VelocityMultiplierRange{ 0.f, 1.f };
	FVector Velocity{ GetVelocity() };
	
	Velocity.Z = 0.f;

	CrosshairVelocityFactor = FMath::GetMappedRangeValueClamped(
		WalkSpeedRange,
		VelocityMultiplierRange,
		Velocity.Size()
	);

	if (GetCharacterMovement()->IsFalling()) // Is player character in the air
	{
		// Spread crosshairs slowly when in air
		CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 2.25f, DeltaTime, 2.25f);
	}
	else // Is player character on the ground
	{
		// Shrink crosshairs towards default position rapidly when no longer in air
		CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 0.f, DeltaTime, 30.f);
	}

	if (CameraCurrentFOV < CameraDefaultFOV - (CameraDefaultFOV - CameraZoomedFOV) * 0.75f) // Is player aiming
	{
		CrosshairAimFactor = FMath::FInterpTo(CrosshairAimFactor, 0.4f, DeltaTime, 30.f);
	}
	else if (CameraCurrentFOV >= CameraDefaultFOV - (CameraDefaultFOV - CameraZoomedFOV) * 0.75f) // Is player no longer aiming
	{
		CrosshairAimFactor = FMath::FInterpTo(CrosshairAimFactor, 0.f, DeltaTime, 30.f);
	}

	if (bFiringBullet) // Player is firing
	{
		CrosshairShootingFactor = FMath::FInterpTo(CrosshairShootingFactor, 0.3f, DeltaTime, 120.f);
	}
	else // Player is not firing
	{
		CrosshairShootingFactor = FMath::FInterpTo(CrosshairShootingFactor, 0.f, DeltaTime, 120.f);
	}

	CrosshairSpreadMultiplier = 0.5f + CrosshairVelocityFactor + CrosshairInAirFactor - CrosshairAimFactor + CrosshairShootingFactor;
}

void AShooterCharacter::StartCrosshairBulletFire()
{
	bFiringBullet = true;

	GetWorldTimerManager().SetTimer(CrosshairShootTimer, this, &AShooterCharacter::FinishCrosshairBulletFire, ShootTimeDuration);
}

void AShooterCharacter::InterpCapsuleHalfHeight(float DeltaTime)
{
	float TargetCapsuleHalfHeight{};

	if (bCrouched)
	{
		TargetCapsuleHalfHeight = CrouchingCapsuleHalfHeight;
	}
	else
	{
		TargetCapsuleHalfHeight = StandingCapsuleHalfHeight;
	}

	const float InterpHalfHeight{ FMath::FInterpTo(GetCapsuleComponent()->GetScaledCapsuleHalfHeight(), TargetCapsuleHalfHeight, DeltaTime, 20.f) };

	/** Negative value when crouching and positive when standing */
	const float DeltaCapsuleHalfHeight{ InterpHalfHeight - GetCapsuleComponent()->GetScaledCapsuleHalfHeight() };
	const FVector MeshOffset{ 0.f, 0.f, -DeltaCapsuleHalfHeight };

	GetMesh()->AddLocalOffset(MeshOffset);

	GetCapsuleComponent()->SetCapsuleHalfHeight(InterpHalfHeight);
}

void AShooterCharacter::FinishCrosshairBulletFire()
{
	bFiringBullet = false;
}

void AShooterCharacter::SpawnMuzzleFlashParticles(UParticleSystem* MuzzleParticles, UParticleSystem* ImpactHitParticles)
{
	const USkeletalMeshSocket* MuzzleSocket = GetMesh()->GetSocketByName("Muzzle");
	if (MuzzleSocket)
	{
		const FTransform SocketTransform = MuzzleSocket->GetSocketTransform(GetMesh());

		UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			MuzzleParticles,
			SocketTransform
		);

		FVector BeamEnd;
		bool bBeamEnd = GetBeamEndLocation(SocketTransform.GetLocation(), BeamEnd);

		if (bBeamEnd)
			{
				// Spawn impact particles after updating BeamEndPoint
				if (ImpactParticles)
				{
					UGameplayStatics::SpawnEmitterAtLocation(
						GetWorld(),
						ImpactParticles,
						BeamEnd
					);

					UAISense_Hearing::ReportNoiseEvent(GetWorld(), BeamEnd, 1.f, this, 500.f, FName("CloseImpactSound"));
				}
		}
	}
}

void AShooterCharacter::EndHitLocation(const FVector& MuzzleSocketLocation)
{
	FVector BeamEnd;

	GetBeamEndLocation(MuzzleSocketLocation, BeamEnd);
}

void AShooterCharacter::PlayMontageSection(UAnimMontage* Montage, const FName& SectionName)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && Montage)
	{
		AnimInstance->Montage_Play(Montage);
		AnimInstance->Montage_JumpToSection(SectionName, Montage);
	}
}

float AShooterCharacter::GetCrosshairSpreadMultiplier() const
{
	return CrosshairSpreadMultiplier;
}



