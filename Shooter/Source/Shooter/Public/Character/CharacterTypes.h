#pragma once

UENUM(BlueprintType)
enum class EActionState : uint8
{
	EAS_Unoccupied UMETA(Display = "Unoccupied"),
	EAS_Crouching UMETA(Display = "Crouching"),
	EAS_Shooting UMETA(Display = "Shooting"),
	EAS_Ultimate UMETA(Display = "Ultimate"),
	EAS_HitReaction UMETA(Display = "HitReaction"),
	EAS_Dead UMETA(Display = "Dead"),
	EAS_Dodging UMETA(Display = "Dodging"),
	EAS_Grappling UMETA(Display = "Grappling")
};