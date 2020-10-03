// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorSnapshot.h"
#include "BehaviorPathSpawner.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UBehaviorPathSpawner : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		static void SpawnBehaviorPath(UObject* WorldContextObject, TArray<UBehaviorSnapshot*> Snapshots, FVector Color, float Size);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		static TArray<ABehaviorPathNodeObject*> GetSpawnedPathActors();


private:
	static FName SpawnedPathActorTag;
	static TArray<ABehaviorPathNodeObject*> SpawnedPathActors;

	UFUNCTION()
	static void ClearPathFromWorld(UWorld* World);
	
};
