// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Settings/MazeSettings.h"
#include "StopConditions/StopCondition.h"
#include "UObject/NoExportTypes.h"
#include "MazeSpawner.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class UMazeSpawner : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		static void SpawnMaze(UObject* WorldContextObject, UMazeSettings* MazeSettings, bool IsSpawnForEditor, bool ShowRegions);
	UFUNCTION(BlueprintCallable)
		static void ClearSpawnedMaze(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		static UObject* GetSettingFromActor(AActor* ActorValue);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		static AActor* GetActorFromSetting(UObject* SettingValue);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		static TArray<AActor*> GetActorsFromMazeSettings(UMazeSettings* MazeSettings);


private:
	static FName SpawnedActorTag;
	static void LoadMaze(UWorld* World, UMazeSettings* MazeSettings);
	static void LoadPlayerStart(UWorld* World, UMazeSettings* MazeSettings, bool IsSpawnForEditor);
	static void LoadMazeObjects(UWorld* World, UMazeSettings* MazeSettings, bool IsSpawnForEditor);
	static void LoadRegions(UWorld* World, UMazeSettings* MazeSettings, bool IsSpawnForEditor, bool ShowRegions);
	static void ReverseActorToSettingMap();
	static void AddIfValid(TArray<AActor*>& Actors, UObject* Setting);
	static TMap<AActor*, UObject*> ActorToSetting;
	static TMap<UObject*, AActor*> SettingToActor;

};
