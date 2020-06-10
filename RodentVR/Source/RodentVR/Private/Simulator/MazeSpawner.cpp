// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeSpawner.h"
#include "Settings/MazeObjectSettings.h"
#include "Simulator/MazeObject.h"
#include "Simulator/Maze.h"
#include "Simulator/AssetLoader.h"

FName UMazeSpawner::SpawnedActorTag = FName("SpawnedActor");

void UMazeSpawner::SpawnMaze(UObject* WorldContextObject, UMazeSettings* MazeSettings, bool IsSpawnForEditor, TMap<AActor*, UObject*>& ActorToSetting, TMap<UObject*, AActor*>& SettingToActor, TArray<UStopCondition*>& StopConditions)
{
	UWorld* World = WorldContextObject->GetWorld();
	UMazeSpawner::ClearWorld(World);
	if (MazeSettings != nullptr)
	{
		UMazeSpawner::LoadMaze(World, MazeSettings, ActorToSetting);
		UMazeSpawner::LoadPlayerStart(World, MazeSettings, ActorToSetting);
		UMazeSpawner::LoadMazeObjects(World, MazeSettings, IsSpawnForEditor, ActorToSetting);
		UMazeSpawner::LoadRegions(World, MazeSettings, IsSpawnForEditor, ActorToSetting);
		UMazeSpawner::LoadStopConditions(World, MazeSettings, ActorToSetting, StopConditions);
	}

	UMazeSpawner::ReverseActorToSettingMap(ActorToSetting, SettingToActor);
}

void UMazeSpawner::ClearWorld(UWorld* World)
{
	TArray<AActor*> WorldActors;
	UGameplayStatics::GetAllActorsOfClass(World, AActor::StaticClass(), WorldActors);
	for (AActor* Actor : WorldActors)
	{

		if (Actor->ActorHasTag(UMazeSpawner::SpawnedActorTag))
		{
			Actor->Destroy();
		}
	}
}

void UMazeSpawner::LoadMaze(UWorld* World, UMazeSettings* MazeSettings, TMap<AActor*, UObject*>& ActorToSetting)
{
	AMaze* Maze = World->SpawnActor<AMaze>(AMaze::StaticClass());
	Maze->Tags.Add(UMazeSpawner::SpawnedActorTag);
	Maze->SetSettings(MazeSettings);
	ActorToSetting.Add(Maze, MazeSettings);
}

void UMazeSpawner::LoadPlayerStart(UWorld* World, UMazeSettings* MazeSettings, TMap<AActor*, UObject*>& ActorToSetting)
{

}

void UMazeSpawner::LoadMazeObjects(UWorld* World, UMazeSettings* MazeSettings, bool IsSpawnForEditor, TMap<AActor*, UObject*>& ActorToSetting)
{
	for (UMazeObjectSettings* MazeObjectSettings : MazeSettings->GetMazeObjects())
	{
		AMazeObject* MazeObject = World->SpawnActor<AMazeObject>(AMazeObject::StaticClass());
		if (MazeObject != nullptr)
		{
			MazeObject->Tags.Add(UMazeSpawner::SpawnedActorTag);
			MazeObject->SetSettings(MazeObjectSettings);
			ActorToSetting.Add(MazeObject, MazeObjectSettings);

			if (IsSpawnForEditor)
			{
				MazeObject->SetActorEnableCollision(true);
			}
		}
	}
}

void UMazeSpawner::LoadRegions(UWorld* World, UMazeSettings* MazeSettings, bool IsSpawnForEditor, TMap<AActor*, UObject*>& ActorToSetting)
{

	//SettingsToActor.Add(MazeObjectSettings, MazeObject);
	//if (IsSpawnForEditor)
	//{
	//	Region->SetEnableCollision(true);
	//}
}

void UMazeSpawner::LoadStopConditions(UWorld* World, UMazeSettings* MazeSettings, TMap<AActor*, UObject*>& ActorToSetting, TArray<UStopCondition*> StopConditions)
{

	//SettingsToActor.Add(MazeObjectSettings, MazeObject);
	//StopConditions.Add(StopCondition);

}

void UMazeSpawner::ReverseActorToSettingMap(TMap<AActor*, UObject*>& ActorToSetting, TMap<UObject*, AActor*>& SettingToActor)
{
	SettingToActor.Empty();
	for (auto Pair : ActorToSetting)
	{
		SettingToActor.Add(Pair.Value, Pair.Key);
	}
}
