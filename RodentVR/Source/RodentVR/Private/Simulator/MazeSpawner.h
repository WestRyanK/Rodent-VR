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
		static void SpawnMaze(UObject* WorldContextObject, UMazeSettings* MazeSettings, bool IsSpawnForEditor, TMap<AActor*, UObject*>& ActorToSetting, TMap<UObject*, AActor*>& SettingToActor, TArray<UStopCondition*>& StopConditions);


private:
	static FName SpawnedActorTag;
	static void ClearWorld(UWorld* World);
	static void LoadMaze(UWorld* World, UMazeSettings* MazeSettings, TMap<AActor*, UObject*>& ActorToSetting);
	static void LoadPlayerStart(UWorld* World, UMazeSettings* MazeSettings, TMap<AActor*, UObject*>& ActorToSetting);
	static void LoadMazeObjects(UWorld* World, UMazeSettings* MazeSettings, bool AreAllObjectsSelectable, TMap<AActor*, UObject*>& ActorToSetting);
	static void LoadRegions(UWorld* World, UMazeSettings* MazeSettings, bool AreAllObjectsSelectable, TMap<AActor*, UObject*>& ActorToSetting);
	static void LoadStopConditions(UWorld* World, UMazeSettings* MazeSettings, TMap<AActor*, UObject*>& ActorToSetting, TArray<UStopCondition*> StopConditions);
	static void ReverseActorToSettingMap(TMap<AActor*, UObject*>& ActorToSetting, TMap<UObject*, AActor*>& SettingToActor);

};
