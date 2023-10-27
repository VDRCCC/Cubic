// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Character/CharacterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterTypes() {}
// Cross Module References
	SHOOTER_API UEnum* Z_Construct_UEnum_Shooter_EActionState();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActionState;
	static UEnum* EActionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EActionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EActionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Shooter_EActionState, (UObject*)Z_Construct_UPackage__Script_Shooter(), TEXT("EActionState"));
		}
		return Z_Registration_Info_UEnum_EActionState.OuterSingleton;
	}
	template<> SHOOTER_API UEnum* StaticEnum<EActionState>()
	{
		return EActionState_StaticEnum();
	}
	struct Z_Construct_UEnum_Shooter_EActionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Shooter_EActionState_Statics::Enumerators[] = {
		{ "EActionState::EAS_Unoccupied", (int64)EActionState::EAS_Unoccupied },
		{ "EActionState::EAS_Crouching", (int64)EActionState::EAS_Crouching },
		{ "EActionState::EAS_Shooting", (int64)EActionState::EAS_Shooting },
		{ "EActionState::EAS_Ultimate", (int64)EActionState::EAS_Ultimate },
		{ "EActionState::EAS_HitReaction", (int64)EActionState::EAS_HitReaction },
		{ "EActionState::EAS_Dead", (int64)EActionState::EAS_Dead },
		{ "EActionState::EAS_Dodging", (int64)EActionState::EAS_Dodging },
		{ "EActionState::EAS_Grappling", (int64)EActionState::EAS_Grappling },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Shooter_EActionState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAS_Crouching.Display", "Crouching" },
		{ "EAS_Crouching.Name", "EActionState::EAS_Crouching" },
		{ "EAS_Dead.Display", "Dead" },
		{ "EAS_Dead.Name", "EActionState::EAS_Dead" },
		{ "EAS_Dodging.Display", "Dodging" },
		{ "EAS_Dodging.Name", "EActionState::EAS_Dodging" },
		{ "EAS_Grappling.Display", "Grappling" },
		{ "EAS_Grappling.Name", "EActionState::EAS_Grappling" },
		{ "EAS_HitReaction.Display", "HitReaction" },
		{ "EAS_HitReaction.Name", "EActionState::EAS_HitReaction" },
		{ "EAS_Shooting.Display", "Shooting" },
		{ "EAS_Shooting.Name", "EActionState::EAS_Shooting" },
		{ "EAS_Ultimate.Display", "Ultimate" },
		{ "EAS_Ultimate.Name", "EActionState::EAS_Ultimate" },
		{ "EAS_Unoccupied.Display", "Unoccupied" },
		{ "EAS_Unoccupied.Name", "EActionState::EAS_Unoccupied" },
		{ "ModuleRelativePath", "Public/Character/CharacterTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Shooter_EActionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Shooter,
		nullptr,
		"EActionState",
		"EActionState",
		Z_Construct_UEnum_Shooter_EActionState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Shooter_EActionState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Shooter_EActionState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Shooter_EActionState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Shooter_EActionState()
	{
		if (!Z_Registration_Info_UEnum_EActionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActionState.InnerSingleton, Z_Construct_UEnum_Shooter_EActionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EActionState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Character_CharacterTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Character_CharacterTypes_h_Statics::EnumInfo[] = {
		{ EActionState_StaticEnum, TEXT("EActionState"), &Z_Registration_Info_UEnum_EActionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3855958545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Character_CharacterTypes_h_200362611(TEXT("/Script/Shooter"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Character_CharacterTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Character_CharacterTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
