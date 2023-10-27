// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Enemies/BaseEnemyAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemyAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	SHOOTER_API UClass* Z_Construct_UClass_ABaseEnemyAIController();
	SHOOTER_API UClass* Z_Construct_UClass_ABaseEnemyAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void ABaseEnemyAIController::StaticRegisterNativesABaseEnemyAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEnemyAIController);
	UClass* Z_Construct_UClass_ABaseEnemyAIController_NoRegister()
	{
		return ABaseEnemyAIController::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemyAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemyAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemyAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Enemies/BaseEnemyAIController.h" },
		{ "ModuleRelativePath", "Public/Enemies/BaseEnemyAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemyAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemyAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemyAIController_Statics::ClassParams = {
		&ABaseEnemyAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseEnemyAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemyAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseEnemyAIController()
	{
		if (!Z_Registration_Info_UClass_ABaseEnemyAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemyAIController.OuterSingleton, Z_Construct_UClass_ABaseEnemyAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseEnemyAIController.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ABaseEnemyAIController>()
	{
		return ABaseEnemyAIController::StaticClass();
	}
	ABaseEnemyAIController::ABaseEnemyAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemyAIController);
	ABaseEnemyAIController::~ABaseEnemyAIController() {}
	struct Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemyAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemyAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemyAIController, ABaseEnemyAIController::StaticClass, TEXT("ABaseEnemyAIController"), &Z_Registration_Info_UClass_ABaseEnemyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemyAIController), 3318756128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemyAIController_h_2140365644(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Enemies_BaseEnemyAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
