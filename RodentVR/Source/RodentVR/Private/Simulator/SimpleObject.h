// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Settings/MazeObjectType.h"
#include "Engine/StaticMesh.h"
#include "SimpleObject.generated.h"

UCLASS(Blueprintable)
class ASimpleObject : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASimpleObject();

protected:
	UPROPERTY()
		class UStaticMeshComponent* StaticMesh;

	UFUNCTION()
		void Update(FVector Position, FRotator Rotation, FVector Scale, MazeObjectType ObjectType);
};
