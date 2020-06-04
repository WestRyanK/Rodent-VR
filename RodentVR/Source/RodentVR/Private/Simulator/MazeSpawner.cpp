// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeSpawner.h"
#include "Settings/MazeObjectSettings.h"
#include "Simulator/MazeObject.h"
#include "Simulator/Maze.h"
#include "Simulator/AssetLoader.h"

FName UMazeSpawner::SpawnedActorTag = FName("SpawnedActor");

void UMazeSpawner::SpawnMaze(UObject* WorldContextObject, UMazeSettings* MazeSettings, bool AreAllObjectsSelectable, TMap<AActor*, UObject*>& ActorToSetting, TMap<UObject*, AActor*>& SettingToActor)
{
	UWorld* World = WorldContextObject->GetWorld();
	UMazeSpawner::ClearWorld(World);
	if (MazeSettings != nullptr)
	{
		UMazeSpawner::LoadMaze(World, MazeSettings, ActorToSetting);
		UMazeSpawner::LoadPlayerStart(World, MazeSettings, ActorToSetting);
		UMazeSpawner::LoadMazeObjects(World, MazeSettings, AreAllObjectsSelectable, ActorToSetting);
		UMazeSpawner::LoadRegions(World, MazeSettings, AreAllObjectsSelectable, ActorToSetting);
		UMazeSpawner::LoadStopConditions(World, MazeSettings, ActorToSetting);
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
	Maze->SetMazeName(MazeSettings->GetMazeName());
	Maze->SetTextures(MazeSettings->GetTextures());
	ActorToSetting.Add(Maze, MazeSettings);
}

void UMazeSpawner::LoadPlayerStart(UWorld* World, UMazeSettings* MazeSettings, TMap<AActor*, UObject*>& ActorToSetting)
{

}

void UMazeSpawner::LoadMazeObjects(UWorld* World, UMazeSettings* MazeSettings, bool AreAllObjectsSelectable, TMap<AActor*, UObject*>& ActorToSetting)
{
	for (UMazeObjectSettings* MazeObjectSettings : MazeSettings->GetMazeObjects())
	{
		AMazeObject* MazeObject = World->SpawnActor<AMazeObject>(AMazeObject::StaticClass());
		if (MazeObject != nullptr)
		{
			MazeObject->Tags.Add(UMazeSpawner::SpawnedActorTag);
			MazeObject->SetSettings(MazeObjectSettings);
			ActorToSetting.Add(MazeObject, MazeObjectSettings);

			if (AreAllObjectsSelectable)
			{
				MazeObject->SetActorEnableCollision(true);
			}
		}
	}
}

void UMazeSpawner::LoadRegions(UWorld* World, UMazeSettings* MazeSettings, bool AreAllObjectsSelectable, TMap<AActor*, UObject*>& ActorToSetting)
{

			//SettingsToActor.Add(MazeObjectSettings, MazeObject);
			//if (AreAllObjectsSelectable)
			//{
			//	Region->SetEnableCollision(true);
			//}
}

void UMazeSpawner::LoadStopConditions(UWorld* World, UMazeSettings* MazeSettings, TMap<AActor*, UObject*>& ActorToSetting)
{

			//SettingsToActor.Add(MazeObjectSettings, MazeObject);

}

void UMazeSpawner::ReverseActorToSettingMap(TMap<AActor*, UObject*>& ActorToSetting, TMap<UObject*, AActor*>& SettingToActor)
{
	SettingToActor.Empty();
	for (auto Pair : ActorToSetting)
	{
		SettingToActor.Add(Pair.Value, Pair.Key);
	}
}
