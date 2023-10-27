// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CharacterTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_CharacterTypes_generated_h
#error "CharacterTypes.generated.h already included, missing '#pragma once' in CharacterTypes.h"
#endif
#define SHOOTER_CharacterTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Shooter_Source_Shooter_Public_Character_CharacterTypes_h


#define FOREACH_ENUM_EACTIONSTATE(op) \
	op(EActionState::EAS_Unoccupied) \
	op(EActionState::EAS_Crouching) \
	op(EActionState::EAS_Shooting) \
	op(EActionState::EAS_Ultimate) \
	op(EActionState::EAS_HitReaction) \
	op(EActionState::EAS_Dead) \
	op(EActionState::EAS_Dodging) \
	op(EActionState::EAS_Grappling) 

enum class EActionState : uint8;
template<> struct TIsUEnumClass<EActionState> { enum { Value = true }; };
template<> SHOOTER_API UEnum* StaticEnum<EActionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
