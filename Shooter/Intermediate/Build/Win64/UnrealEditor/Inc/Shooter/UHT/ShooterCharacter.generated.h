// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/ShooterCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystem;
#ifdef SHOOTER_ShooterCharacter_generated_h
#error "ShooterCharacter.generated.h already included, missing '#pragma once' in ShooterCharacter.h"
#endif
#define SHOOTER_ShooterCharacter_generated_h

#define FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_SPARSE_DATA
#define FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCrosshairSpreadMultiplier); \
	DECLARE_FUNCTION(execEndHitLocation); \
	DECLARE_FUNCTION(execSpawnMuzzleFlashParticles); \
	DECLARE_FUNCTION(execFinishCrosshairBulletFire); \
	DECLARE_FUNCTION(execGetBeamEndLocation);


#define FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCrosshairSpreadMultiplier); \
	DECLARE_FUNCTION(execEndHitLocation); \
	DECLARE_FUNCTION(execSpawnMuzzleFlashParticles); \
	DECLARE_FUNCTION(execFinishCrosshairBulletFire); \
	DECLARE_FUNCTION(execGetBeamEndLocation);


#define FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_ACCESSORS
#define FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter)


#define FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter)


#define FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public: \
	NO_API virtual ~AShooterCharacter();


#define FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterCharacter) \
	NO_API virtual ~AShooterCharacter();


#define FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_16_PROLOG
#define FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_SPARSE_DATA \
	FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_RPC_WRAPPERS \
	FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_ACCESSORS \
	FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_INCLASS \
	FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_SPARSE_DATA \
	FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_ACCESSORS \
	FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_INCLASS_NO_PURE_DECLS \
	FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Shooter_Source_Shooter_Public_Character_ShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
