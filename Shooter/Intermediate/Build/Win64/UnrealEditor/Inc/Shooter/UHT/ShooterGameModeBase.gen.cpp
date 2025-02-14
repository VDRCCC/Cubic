// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/ShooterGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SHOOTER_API UClass* Z_Construct_UClass_AShooterGameModeBase();
	SHOOTER_API UClass* Z_Construct_UClass_AShooterGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void AShooterGameModeBase::StaticRegisterNativesAShooterGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterGameModeBase);
	UClass* Z_Construct_UClass_AShooterGameModeBase_NoRegister()
	{
		return AShooterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AShooterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShooterGameModeBase.h" },
		{ "ModuleRelativePath", "ShooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterGameModeBase_Statics::ClassParams = {
		&AShooterGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShooterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AShooterGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterGameModeBase.OuterSingleton, Z_Construct_UClass_AShooterGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterGameModeBase.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<AShooterGameModeBase>()
	{
		return AShooterGameModeBase::StaticClass();
	}
	AShooterGameModeBase::AShooterGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterGameModeBase);
	AShooterGameModeBase::~AShooterGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_ShooterGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_ShooterGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterGameModeBase, AShooterGameModeBase::StaticClass, TEXT("AShooterGameModeBase"), &Z_Registration_Info_UClass_AShooterGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterGameModeBase), 3895032224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_ShooterGameModeBase_h_3129821568(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_ShooterGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_ShooterGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
