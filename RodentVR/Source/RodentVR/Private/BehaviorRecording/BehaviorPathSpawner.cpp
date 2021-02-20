// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviorPathSpawner.h"
#include "BehaviorPathNodeObject.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

FName UBehaviorPathSpawner::SpawnedPathActorTag = FName("SpawnedPathActor");
TArray<ABehaviorPathNodeObject*> UBehaviorPathSpawner::SpawnedPathActors = TArray<ABehaviorPathNodeObject*>();

void UBehaviorPathSpawner::SpawnBehaviorPath(UObject* WorldContextObject, TArray<UBehaviorSnapshot*> Snapshots, FVector Color, float Size)
{
	UWorld* World = WorldContextObject->GetWorld();
	UBehaviorPathSpawner::ClearPathFromWorld(World);
	UBehaviorPathSpawner::SpawnedPathActors.Empty();

	for (UBehaviorSnapshot* Snapshot : Snapshots)
	{
		ABehaviorPathNodeObject* PathNodeObject = World->SpawnActor<ABehaviorPathNodeObject>(ABehaviorPathNodeObject::StaticClass());
		PathNodeObject->Tags.Add(UBehaviorPathSpawner::SpawnedPathActorTag);
		UBehaviorPathSpawner::SpawnedPathActors.Add(PathNodeObject);
		FRotator Rotation = FRotator(0.0f);
		PathNodeObject->UpdateNodeObject(Snapshot->GetPosition(), Rotation, FVector(Size, Size, Size), Color);
	}
}

TArray<ABehaviorPathNodeObject*> UBehaviorPathSpawner::GetSpawnedPathActors()
{
	return UBehaviorPathSpawner::SpawnedPathActors;
}

void UBehaviorPathSpawner::ClearPathFromWorld(UWorld* World)
{
	for (AActor* Actor : UBehaviorPathSpawner::SpawnedPathActors)
	{
		Actor->Destroy();
	}
	//TArray<AActor*> WorldActors;
	//UGameplayStatics::GetAllActorsOfClass(World, AActor::StaticClass(), WorldActors);
	//for (AActor* Actor : WorldActors)
	//{

	//	if (Actor->ActorHasTag(UBehaviorPathSpawner::SpawnedPathActorTag))
	//	{
	//		Actor->Destroy();
	//	}
	//}
}
