// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviorPath.h"
#include "Settings/MazeObjectTypeHelper.h"
#include "Simulator/AssetLoader.h"
#include "Engine/StaticMesh.h"
#include "Settings/MazeObjectType.h"

// Sets default values
ABehaviorPath::ABehaviorPath()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	this->BehaviorPathNodesInstances = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Instanced Static Mesh"));
	this->RootComponent = this->BehaviorPathNodesInstances;

	FString ObjectTypeString = UMazeObjectTypeHelper::ObjectTypeToString(MazeObjectType::SPHERE);
	FString MeshPath = FString(TEXT("StaticMesh'/Game/Objects/") + ObjectTypeString + TEXT("Mesh.") + ObjectTypeString + TEXT("Mesh"));

	UStaticMesh* Mesh = UAssetLoader::LoadAssetFromPath<UStaticMesh>(MeshPath);
	this->BehaviorPathNodesInstances->SetStaticMesh(Mesh);

}

TArray<UBehaviorSnapshot*> ABehaviorPath::GetSnapshots()
{
	return this->Snapshots;
}

void ABehaviorPath::SetSnapshots(TArray<UBehaviorSnapshot*> SnapshotsVal)
{
	this->Snapshots = SnapshotsVal;

	this->BehaviorPathNodesInstances->ClearInstances();
	for (int i = 0; i < this->Snapshots.Num(); i++)
	{
		this->BehaviorPathNodesInstances->AddInstance(FTransform());
	}

	this->UpdatePath();
}

float ABehaviorPath::GetPathWidth()
{
	return this->PathWidth;
}

void ABehaviorPath::SetPathWidth(float PathWidthVal)
{
	this->PathWidth = PathWidthVal;
	this->UpdatePath();
}

FLinearColor ABehaviorPath::GetPathColor()
{
	return this->PathColor;
}

void ABehaviorPath::SetPathColor(FLinearColor PathColorVal)
{
	this->PathColor = PathColorVal;
	this->UpdatePath();
}

bool ABehaviorPath::GetIsPathVisible()
{
	return this->IsPathVisible;
}

void ABehaviorPath::SetIsPathVisible(bool IsPathVisibleVal)
{
	this->IsPathVisible = IsPathVisibleVal;
	this->UpdatePath();
}

void ABehaviorPath::UpdatePath()
{
	int InstanceCount = this->BehaviorPathNodesInstances->GetInstanceCount();
	for (int i = 0; i < InstanceCount; i++)
	{
		bool IsLastInstance = (i == InstanceCount - 1);
		FTransform InstanceTransform = this->GetTransformFromSnapshot(this->Snapshots[i]);
		this->BehaviorPathNodesInstances->UpdateInstanceTransform(i, InstanceTransform, false, IsLastInstance, true);
	}

	this->InitPathMaterial();
	FVector Color = FVector(this->PathColor.R, this->PathColor.G, this->PathColor.B);
	this->PathMaterial->SetVectorParameterValue(FName("Color"), Color);
	this->SetActorHiddenInGame(!this->IsPathVisible);
}

FTransform ABehaviorPath::GetTransformFromSnapshot(UBehaviorSnapshot* Snapshot)
{
	FRotator Rotation = FRotator(0.0f, 0.0f, 0.0f);
	FVector Position = Snapshot->GetPosition();
	FVector Scale = FVector(this->PathWidth, this->PathWidth, this->PathWidth);
	FTransform InstanceTransform = FTransform(Rotation, Position, Scale);
	return InstanceTransform;
}

void ABehaviorPath::InitPathMaterial()
{
	if (!IsValid(this->PathMaterial))
	{
		UMaterial* Material = UAssetLoader::LoadAssetFromPath<UMaterial>("Material'/Game/BehavioralAnalysis/BehaviorPathMaterial.BehaviorPathMaterial");
		this->PathMaterial = UMaterialInstanceDynamic::Create(Material, this);
		this->BehaviorPathNodesInstances->SetMaterial(0, PathMaterial);
	}
}
