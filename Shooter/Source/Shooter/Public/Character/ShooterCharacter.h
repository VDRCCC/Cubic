// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterTypes.h"
#include "InputActionValue.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;

UCLASS()
class SHOOTER_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	/** Whether level is rotating or stationary */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Level)
		bool LevelIsRotating;
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/**
	*  Callback For Input Functions
	*/
	void Look(const FInputActionValue& Value);
	void Move(const FInputActionValue& Value);
	virtual void Jump() override;

	void ShootHipFire(const FInputActionValue& Value);
	void PlayHipFireMontage(const FName& SectionName);

	void ShootUltimate(const FInputActionValue& Value);
	void PlayUltimateMontage(const FName& SectionName);

	UFUNCTION(BlueprintCallable)
		bool GetBeamEndLocation(const FVector& MuzzleSocketLocation, FVector& OutBeamLocation);

	void CameraInterpZoom(float DeltaTime);

	void CalculateCrosshairSpread(float DeltaTime);

	void StartCrosshairBulletFire();

	/** When Crouching/Standing this function intrepolates the changes to the player character's capsule's half height*/
	void InterpCapsuleHalfHeight(float DeltaTime);


	UFUNCTION()
		void FinishCrosshairBulletFire();

	UFUNCTION(BlueprintCallable)
		void SpawnMuzzleFlashParticles(UParticleSystem* MuzzleParticles, UParticleSystem* ImpactHitParticles);

	/** Updated the OutBeamLocationFinal variable containing the coordinates of a line trace's end point */
	UFUNCTION(BlueprintCallable)
		void EndHitLocation(const FVector& MuzzleSocketLocation);



	// Variables
	UPROPERTY(EditAnywhere, Category = Input)
		UInputMappingContext* ShooterContext;

	UPROPERTY(EditAnywhere, Category = Input)
		UInputAction* MovementAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
		UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
		UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
		UInputAction* ShootAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
		UInputAction* UltimateAction;








private:
	// Functions
	void PlayMontageSection(UAnimMontage* Montage, const FName& SectionName);



	// Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health, meta = (AllowPrivateAccess = true))
		float HealthMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health, meta = (AllowPrivateAccess = true))
		float CurrentHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = true))
		USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = true))
		UCameraComponent* Camera;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		EActionState ActionState = EActionState::EAS_Unoccupied;

	UPROPERTY(EditDefaultsOnly, Category = Montages)
		UAnimMontage* HipFireMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
		TArray<FName> HipFireMontageSections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = true))
		bool UltimateTimerTriggered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = true))
		float UltimateTimer;

	UPROPERTY(EditDefaultsOnly, Category = Montages)
		UAnimMontage* UltimateMontage;

	UPROPERTY(EditAnywhere, Category = Combat)
		TArray<FName> UltimateMontageSections;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Sounds, meta = (AllowPrivateAccess = true))
		USoundBase* ShotSound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Particles, meta = (AllowPrivateAccess = true))
		UParticleSystem* MuzzleFlashParticles;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Particles, meta = (AllowPrivateAccess = true))
		UParticleSystem* MuzzleFlashUltimateParticles;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Particles, meta = (AllowPrivateAccess = true))
		UParticleSystem* ImpactParticles;

	/** Endpoint hitting place for projectiles */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = true))
		FVector OutBeamLocationFinal;

	/** Crosshair spread multiplier to change with character's context */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = true))
		float CrosshairSpreadMultiplier;

	/** Factor that changes value with the given velocity of the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = true))
		float CrosshairVelocityFactor;

	/** Factor that changes value whether the character is in the air or not */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = true))
		float CrosshairInAirFactor;

	/** Factor that changes value whether the character is aiming or not */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = true))
		float CrosshairAimFactor;

	/** Factor that changes value whether the character is shooting or not */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = true))
		float CrosshairShootingFactor;

	/** Half Height of the player character's capsule in the current frame */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = true))
		float CurrentCapsuleHalfHeight;

	/** Half Height of the player character's capsule while crouching */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = true))
		float CrouchingCapsuleHalfHeight;

	/** Half Height of the player character's capsule while standing */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = true))
		float StandingCapsuleHalfHeight;

	/** Interpolation speed for zooming when aiming */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = true))
		float ZoomInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = true))
		float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = true))
		float DamageUltimate;

	/** True when crouched */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = true))
		bool bCrouched;

	/** Camera default field of view value */
	float CameraDefaultFOV;

	/** Camera zoomed field of view value */
	float CameraZoomedFOV;

	/** Current field of view value this frame */
	float CameraCurrentFOV;

	/** Time lapsed while firing */
	float ShootTimeDuration;

	/** Boolean to mention whether player is firing or not */
	bool bFiringBullet;

	/** Timer handle to measure time between shots*/
	FTimerHandle CrosshairShootTimer;





public:
	FORCEINLINE USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE UCameraComponent* GetCamera() const { return Camera; }
	//FORCEINLINE bool GetCrouching() const { return bCrouching; }
	FORCEINLINE bool GetCrouched() const { return bCrouched; }
	FORCEINLINE bool GetLevelIsRotating() const { return LevelIsRotating; }


	UFUNCTION(BlueprintCallable)
		float GetCrosshairSpreadMultiplier() const;
};
