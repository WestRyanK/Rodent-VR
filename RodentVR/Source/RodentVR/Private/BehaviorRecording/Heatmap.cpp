// Fill out your copyright notice in the Description page of Project Settings.


#include "Heatmap.h"
#include "Settings/MazeObjectTypeHelper.h"
#include "Simulator/AssetLoader.h"
#include "HeatmapTextureGenerator.h"

// Sets default values
AHeatmap::AHeatmap()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	this->HeatmapMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	this->RootComponent = this->HeatmapMesh;

	FString ObjectTypeString = UMazeObjectTypeHelper::ObjectTypeToString(MazeObjectType::PLANE);
	FString MeshPath = FString(TEXT("StaticMesh'/Game/Objects/") + ObjectTypeString + TEXT("Mesh.") + ObjectTypeString + TEXT("Mesh"));

	UStaticMesh* Mesh = UAssetLoader::LoadAssetFromPath<UStaticMesh>(MeshPath);
	this->HeatmapMesh->SetStaticMesh(Mesh);
	
	this->ColorGradient = NewObject<UColorGradient>();
	this->ColorGradient->AddColorStop(0, FLinearColor(0, 255, 0, 255));
	this->ColorGradient->AddColorStop(50, FLinearColor(255, 0, 0, 255));
}

TArray<UBehaviorSnapshot*> AHeatmap::GetSnapshots()
{
	return this->Snapshots;
}

void AHeatmap::SetSnapshots(TArray<UBehaviorSnapshot*> SnapshotsVal)
{
	this->Snapshots = SnapshotsVal;

	this->UpdateHeatmap();
}

int AHeatmap::GetBucketSize()
{
	return this->BucketSize;
}

void AHeatmap::SetBucketSize(int BucketSizeVal)
{
	this->BucketSize = BucketSizeVal;

	this->UpdateHeatmap();
}

AActor* AHeatmap::GetMazeActor()
{
	return this->MazeActor;
}

void AHeatmap::SetMazeActor(AActor* MazeActorVal)
{
	this->MazeActor = MazeActorVal;

	this->UpdateHeatmap();
}

bool AHeatmap::GetIsHeatmapVisible()
{
	return this->IsHeatmapVisible;
}

void AHeatmap::SetIsHeatmapVisible(bool IsHeatmapVisibleVal)
{
	this->IsHeatmapVisible = IsHeatmapVisibleVal;
	this->UpdateHeatmap();
}

UColorGradient* AHeatmap::GetColorGradient()
{
	return this->ColorGradient;
}

void AHeatmap::SetColorGradient(UColorGradient* ColorGradientVal)
{
	this->ColorGradient = ColorGradientVal;
	this->UpdateHeatmap();
}

void AHeatmap::UpdateHeatmap()
{
	if (IsValid(this->MazeActor) && this->BucketSize > 0.0f && this->Snapshots.Num() > 0)
	{
		FVector Origin; // Center of actor in world space
		FVector BoxExtent; // Half the actor's size in 3d space.
		this->MazeActor->GetActorBounds(false, Origin, BoxExtent, true);
		FVector HeatmapStart = Origin - BoxExtent;
		FVector HeatmapEnd = Origin + BoxExtent;
		UTexture2D* HeatmapTexture = UHeatmapTextureGenerator::CreateHeatmapTexture(HeatmapStart, HeatmapEnd, this->BucketSize, this->Snapshots, this->ColorGradient);

		this->InitHeatmapMaterial();
		this->HeatmapMaterial->SetTextureParameterValue(FName("HeatmapTexture"), HeatmapTexture);
		this->SetActorScale3D(BoxExtent * 2.0f);
		this->SetActorLocation(Origin);
	}
}

void AHeatmap::InitHeatmapMaterial()
{
	if (!IsValid(this->HeatmapMaterial))
	{
		UMaterial* Material = UAssetLoader::LoadAssetFromPath<UMaterial>("Material'/Game/BehavioralAnalysis/HeatmapMaterial.HeatmapMaterial");
		this->HeatmapMaterial = UMaterialInstanceDynamic::Create(Material, this);
		this->HeatmapMesh->SetMaterial(0, HeatmapMaterial);
	}
	this->SetActorHiddenInGame(!this->IsHeatmapVisible);
}
