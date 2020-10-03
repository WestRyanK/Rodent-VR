// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeSpawner.h"
#include "Kismet/GameplayStatics.h"
#include "Settings/MazeObjectSettings.h"
#include "Simulator/MazeObject.h"
#include "Simulator/StartPosition.h"
#include "Simulator/Region.h"
#include "Simulator/Maze.h"
#include "Simulator/AssetLoader.h"

FName UMazeSpawner::SpawnedActorTag = FName("SpawnedActor");
TMap<AActor*, UObject*> UMazeSpawner::ActorToSetting = TMap<AActor*, UObject*>();
TMap<UObject*, AActor*> UMazeSpawner::SettingToActor = TMap<UObject*, AActor*>();

UObject* UMazeSpawner::GetSettingFromActor(AActor* ActorValue)
{
	UObject** Setting = UMazeSpawner::ActorToSetting.Find(ActorValue);
	if (Setting != nullptr)
	{
		return *Setting;
	}
	else
	{
		return nullptr;
	}
}

AActor* UMazeSpawner::GetActorFromSetting(UObject* SettingValue)
{
	AActor** Actor = UMazeSpawner::SettingToActor.Find(SettingValue);
	if (Actor != nullptr)
	{
		return *Actor;
	}
	else
	{
		return nullptr;
	}
}

void UMazeSpawner::SpawnMaze(UObject* WorldContextObject, UMazeSettings* MazeSettings, bool IsSpawnForEditor, bool ShowRegions)
{
	UMazeSpawner::ActorToSetting.Empty();
	UMazeSpawner::SettingToActor.Empty();

	UWorld* World = WorldContextObject->GetWorld();
	UMazeSpawner::ClearWorld(World);
	if (IsValid(MazeSettings))
	{
		UMazeSpawner::LoadMaze(World, MazeSettings);
		UMazeSpawner::LoadPlayerStart(World, MazeSettings, IsSpawnForEditor);
		UMazeSpawner::LoadMazeObjects(World, MazeSettings, IsSpawnForEditor);
		UMazeSpawner::LoadRegions(World, MazeSettings, IsSpawnForEditor, ShowRegions);
	}

	UMazeSpawner::ReverseActorToSettingMap();
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

void UMazeSpawner::LoadMaze(UWorld* World, UMazeSettings* MazeSettings)
{
	AMaze* Maze = World->SpawnActor<AMaze>(AMaze::StaticClass());
	Maze->Tags.Add(UMazeSpawner::SpawnedActorTag);
	Maze->SetSettings(MazeSettings);
	UMazeSpawner::ActorToSetting.Add(Maze, MazeSettings);
}

void UMazeSpawner::LoadPlayerStart(UWorld* World, UMazeSettings* MazeSettings, bool IsSpawnForEditor)
{
	AStartPosition* PlayerStart = World->SpawnActor<AStartPosition>(AStartPosition::StaticClass());
	UStartPositionSettings* PlayerStartSettings = MazeSettings->GetPlayerStart();
	PlayerStart->Tags.Add(UMazeSpawner::SpawnedActorTag);
	PlayerStart->SetSettings(PlayerStartSettings);
	UMazeSpawner::ActorToSetting.Add(PlayerStart, PlayerStartSettings);

	PlayerStart->SetActorHiddenInGame(!IsSpawnForEditor);
	if (!IsSpawnForEditor)
	{
		PlayerStart->SetActorEnableCollision(false);

		APawn* PlayerPawn = World->GetFirstPlayerController()->GetPawn();
		PlayerPawn->SetActorLocation(PlayerStartSettings->GetPosition() + FVector(0,0,40));
		PlayerPawn->GetController()->SetControlRotation(FRotator(0, PlayerStartSettings->GetRotation().Yaw, 0));
		PlayerPawn->SetActorRotation(PlayerStartSettings->GetRotation());
	}
}

void UMazeSpawner::LoadMazeObjects(UWorld* World, UMazeSettings* MazeSettings, bool IsSpawnForEditor)
{
	for (UMazeObjectSettings* MazeObjectSettings : MazeSettings->GetMazeObjects())
	{
		AMazeObject* MazeObject = World->SpawnActor<AMazeObject>(AMazeObject::StaticClass());
		if (IsValid(MazeObject))
		{
			MazeObject->Tags.Add(UMazeSpawner::SpawnedActorTag);
			MazeObject->SetSettings(MazeObjectSettings);
			UMazeSpawner::ActorToSetting.Add(MazeObject, MazeObjectSettings);

			if (IsSpawnForEditor)
			{
				MazeObject->SetActorEnableCollision(true);
			}
		}
	}
}

void UMazeSpawner::LoadRegions(UWorld* World, UMazeSettings* MazeSettings, bool IsSpawnForEditor, bool ShowRegions)
{
	if (!(IsSpawnForEditor && !ShowRegions))
	{
		for (URegionSettings* RegionSettings : MazeSettings->GetRegionSettings())
		{
			ARegion* Region = World->SpawnActor<ARegion>(ARegion::StaticClass());
			if (IsValid(Region))
			{
				Region->Tags.Add(UMazeSpawner::SpawnedActorTag);
				Region->SetIsForEditor(IsSpawnForEditor);
				Region->SetSettings(RegionSettings);
				UMazeSpawner::ActorToSetting.Add(Region, RegionSettings);
			}
		}
	}
}

void UMazeSpawner::ReverseActorToSettingMap()
{
	UMazeSpawner::SettingToActor.Empty();
	for (auto Pair : UMazeSpawner::ActorToSetting)
	{
		UMazeSpawner::SettingToActor.Add(Pair.Value, Pair.Key);
	}
}
