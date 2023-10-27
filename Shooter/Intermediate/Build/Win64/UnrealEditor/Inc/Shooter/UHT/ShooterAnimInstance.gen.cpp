// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Character/ShooterAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UShooterAnimInstance();
	SHOOTER_API UClass* Z_Construct_UClass_UShooterAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	DEFINE_FUNCTION(UShooterAnimInstance::execNativeUpdateAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeUpdateAnimation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UShooterAnimInstance::StaticRegisterNativesUShooterAnimInstance()
	{
		UClass* Class = UShooterAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeUpdateAnimation", &UShooterAnimInstance::execNativeUpdateAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShooterAnimInstance_NativeUpdateAnimation_Statics
	{
		struct ShooterAnimInstance_eventNativeUpdateAnimation_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterAnimInstance_NativeUpdateAnimation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShooterAnimInstance_eventNativeUpdateAnimation_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterAnimInstance_NativeUpdateAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterAnimInstance_NativeUpdateAnimation_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShooterAnimInstance_NativeUpdateAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/ShooterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterAnimInstance_NativeUpdateAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShooterAnimInstance, nullptr, "NativeUpdateAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShooterAnimInstance_NativeUpdateAnimation_Statics::ShooterAnimInstance_eventNativeUpdateAnimation_Parms), Z_Construct_UFunction_UShooterAnimInstance_NativeUpdateAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterAnimInstance_NativeUpdateAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShooterAnimInstance_NativeUpdateAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterAnimInstance_NativeUpdateAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShooterAnimInstance_NativeUpdateAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterAnimInstance_NativeUpdateAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShooterAnimInstance);
	UClass* Z_Construct_UClass_UShooterAnimInstance_NoRegister()
	{
		return UShooterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UShooterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShooterCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShooterCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShooterCharacterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShooterCharacterMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAir_MetaData[];
#endif
		static void NewProp_InAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[];
#endif
		static void NewProp_bIsAccelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnInPlaceCharacterYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnInPlaceCharacterYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnInPlaceCharacterYawLastFrame_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnInPlaceCharacterYawLastFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementOffsetYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementOffsetYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMovementOffsetYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastMovementOffsetYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootYawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootYawOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShooterAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShooterAnimInstance_NativeUpdateAnimation, "NativeUpdateAnimation" }, // 42700168
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/ShooterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Character/ShooterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShooterAnimInstance" },
		{ "Comment", "// Variables\n" },
		{ "ModuleRelativePath", "Public/Character/ShooterAnimInstance.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacter = { "ShooterCharacter", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShooterAnimInstance, ShooterCharacter), Z_Construct_UClass_AShooterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacterMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/ShooterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacterMovement = { "ShooterCharacterMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShooterAnimInstance, ShooterCharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacterMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_GroundSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/ShooterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShooterAnimInstance, GroundSpeed), METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_GroundSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_GroundSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_InAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/ShooterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_InAir_SetBit(void* Obj)
	{
		((UShooterAnimInstance*)Obj)->InAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_InAir = { "InAir", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_InAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_InAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_InAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/ShooterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((UShooterAnimInstance*)Obj)->bIsAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_CharacterPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Turn in Place" },
		{ "Comment", "/** Offset Pitch of the character the present frame */" },
		{ "ModuleRelativePath", "Public/Character/ShooterAnimInstance.h" },
		{ "ToolTip", "Offset Pitch of the character the present frame" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_CharacterPitch = { "CharacterPitch", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShooterAnimInstance, CharacterPitch), METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_CharacterPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_CharacterPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_YawDelta_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Lean" },
		{ "Comment", "/** Yaw delta used for leaning while moving */" },
		{ "ModuleRelativePath", "Public/Character/ShooterAnimInstance.h" },
		{ "ToolTip", "Yaw delta used for leaning while moving" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_YawDelta = { "YawDelta", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShooterAnimInstance, YawDelta), METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_YawDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_YawDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_TurnInPlaceCharacterYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Turn In Place" },
		{ "Comment", "/** Offset Yaw of the character the present frame while in place */" },
		{ "ModuleRelativePath", "Public/Character/ShooterAnimInstance.h" },
		{ "ToolTip", "Offset Yaw of the character the present frame while in place" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_TurnInPlaceCharacterYaw = { "TurnInPlaceCharacterYaw", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShooterAnimInstance, TurnInPlaceCharacterYaw), METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_TurnInPlaceCharacterYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_TurnInPlaceCharacterYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_TurnInPlaceCharacterYawLastFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Turn In Place" },
		{ "Comment", "/** Offset Yaw of the character the previous frame while in place */" },
		{ "ModuleRelativePath", "Public/Character/ShooterAnimInstance.h" },
		{ "ToolTip", "Offset Yaw of the character the previous frame while in place" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_TurnInPlaceCharacterYawLastFrame = { "TurnInPlaceCharacterYawLastFrame", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShooterAnimInstance, TurnInPlaceCharacterYawLastFrame), METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_TurnInPlaceCharacterYawLastFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_TurnInPlaceCharacterYawLastFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_MovementOffsetYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "Comment", "/** Offset Yaw used for strafing */" },
		{ "ModuleRelativePath", "Public/Character/ShooterAnimInstance.h" },
		{ "ToolTip", "Offset Yaw used for strafing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_MovementOffsetYaw = { "MovementOffsetYaw", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShooterAnimInstance, MovementOffsetYaw), METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_MovementOffsetYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_MovementOffsetYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_LastMovementOffsetYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "Comment", "/** Offset Yaw the frame before stopping movement */" },
		{ "ModuleRelativePath", "Public/Character/ShooterAnimInstance.h" },
		{ "ToolTip", "Offset Yaw the frame before stopping movement" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_LastMovementOffsetYaw = { "LastMovementOffsetYaw", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShooterAnimInstance, LastMovementOffsetYaw), METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_LastMovementOffsetYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_LastMovementOffsetYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_RootYawOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Turn In Place" },
		{ "Comment", "/** Offset Yaw for the root bone of the character */" },
		{ "ModuleRelativePath", "Public/Character/ShooterAnimInstance.h" },
		{ "ToolTip", "Offset Yaw for the root bone of the character" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_RootYawOffset = { "RootYawOffset", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShooterAnimInstance, RootYawOffset), METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_RootYawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_RootYawOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_ShooterCharacterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_GroundSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_InAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_CharacterPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_YawDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_TurnInPlaceCharacterYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_TurnInPlaceCharacterYawLastFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_MovementOffsetYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_LastMovementOffsetYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_RootYawOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterAnimInstance_Statics::ClassParams = {
		&UShooterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UShooterAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterAnimInstance.OuterSingleton, Z_Construct_UClass_UShooterAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShooterAnimInstance.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UShooterAnimInstance>()
	{
		return UShooterAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterAnimInstance);
	UShooterAnimInstance::~UShooterAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Character_ShooterAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Character_ShooterAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShooterAnimInstance, UShooterAnimInstance::StaticClass, TEXT("UShooterAnimInstance"), &Z_Registration_Info_UClass_UShooterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterAnimInstance), 734278008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Character_ShooterAnimInstance_h_1377327748(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Character_ShooterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_Source_Shooter_Public_Character_ShooterAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
