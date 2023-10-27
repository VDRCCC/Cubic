// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class UBoxComponent;

UCLASS()
class SHOOTER_API AItem : public AActor
{
	GENERATED_BODY()
	





public:	
	// Sets default values for this actor's properties
	AItem();

	// Called every frame
	virtual void Tick(float DeltaTime) override;






protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;






private:
	/** Item's skeletal mesh */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item Properties", meta = (AllowPrivateAccess = "true"))
		USkeletalMeshComponent* ItemMesh;

	/** Collision volume that shows HUD widgets when colliding with line trace */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Properties", meta = (AllowPrivateAccess = "true"))
		UBoxComponent* CollisionBox;






public:	
	
};
