// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemies/BaseEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_BaseEnemy_generated_h
#error "BaseEnemy.generated.h already included, missing '#pragma once' in BaseEnemy.h"
#endif
#define SHOOTER_BaseEnemy_generated_h

#define FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_SPARSE_DATA
#define FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_RPC_WRAPPERS
#define FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_ACCESSORS
#define FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy)


#define FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy)


#define FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public: \
	NO_API virtual ~ABaseEnemy();


#define FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemy) \
	NO_API virtual ~ABaseEnemy();


#define FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_9_PROLOG
#define FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_SPARSE_DATA \
	FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_RPC_WRAPPERS \
	FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_ACCESSORS \
	FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_INCLASS \
	FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_SPARSE_DATA \
	FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_ACCESSORS \
	FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_INCLASS_NO_PURE_DECLS \
	FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ABaseEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
