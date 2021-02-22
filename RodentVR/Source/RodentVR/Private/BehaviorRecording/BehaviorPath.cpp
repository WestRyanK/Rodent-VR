// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviorPath.h"
#include "Settings/MazeObjectTypeHelper.h"
#include "Simulator/AssetLoader.h"

// Sets default values
ABehaviorPath::ABehaviorPath()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	this->BehaviorPathNodesInstances = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Instanced Static Mesh"));
	this->RootComponent = this->BehaviorPathNodesInstances;

	this->PathNodeMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	this->PathNodeMeshComponent->SetupAttachment(this->RootComponent);
	this->PathNodeMeshComponent->SetWorldScale3D(FVector(50.0f));
	this->PathNodeMeshComponent->SetWorldLocation(FVector(0, 0, 100.0f));
	this->PathNodeMeshComponent->SetWorldRotation(FRotator(-90.0f, 0.0f, 0.0f));

	//FString ObjectTypeString = UMazeObjectTypeHelper::ObjectTypeToString(this->);
	//FString MeshPath = FString(TEXT("StaticMesh'/Game/Objects/") + ObjectTypeString + TEXT("Mesh.") + ObjectTypeString + TEXT("Mesh"));
	//UStaticMesh* Mesh = UAssetLoader::LoadAssetFromPath<UStaticMesh>(MeshPath);
}

void ABehaviorPath::BeginPlay()
{
	this->BehaviorPathNodesInstances->SetStaticMesh(this->PathNodeMesh);
	this->PathNodeMeshComponent->SetStaticMesh(this->PathNodeMesh);
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
	this->PathMaterial->SetVectorParameterValue(FName("Tint"), Color);
	this->SetActorHiddenInGame(!this->IsPathVisible);
}

FTransform ABehaviorPath::GetTransformFromSnapshot(UBehaviorSnapshot* Snapshot)
{
	
	FRotator Rotation = FRotator(-90.0f, 0.0f, 0.0f);
	FVector Position = Snapshot->GetPosition();
	FVector Scale = FVector(this->PathWidth);
	FTransform InstanceTransform = FTransform(Rotation, Position, Scale);
	return InstanceTransform;
}

void ABehaviorPath::InitPathMaterial()
{
	if (!IsValid(this->PathMaterial))
	{

		//UMaterial* Material = UAssetLoader::LoadAssetFromPath<UMaterial>("Material'/Game/BehavioralAnalysis/BehaviorPathMaterial.BehaviorPathMaterial");
		//UMaterial* Material = UAssetLoader::LoadAssetFromPath<UMaterial>("Material'/Game/Materials/M_BillboardMaterial.M_BillboardMaterial");
		this->PathMaterial = UMaterialInstanceDynamic::Create(this->Material, this);

		//UTexture2D* Texture = UAssetLoader::LoadAssetFromPath<UTexture2D>("Texture2D'/Game/Materials/Textures/PathCircle.PathCircle");
		if (IsValid(this->MaterialTexture))
		{
			this->PathMaterial->SetTextureParameterValue(TEXT("Texture"), this->MaterialTexture);
		}
		this->BehaviorPathNodesInstances->SetMaterial(0, this->PathMaterial);
		this->PathNodeMeshComponent->SetMaterial(0, this->PathMaterial);
	}
}
