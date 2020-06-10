// Fill out your copyright notice in the Description page of Project Settings.


#include "Maze.h"
#include "Engine/StaticMesh.h"
#include "Simulator/AssetLoader.h"

FName AMaze::MazeTag = FName("Maze");

FName AMaze::GetMazeTag()
{
	return AMaze::MazeTag;
}

// Sets default values
AMaze::AMaze()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	this->Tags.Add(AMaze::MazeTag);
}

void AMaze::UpdateFromSettings()
{
	for (auto Pair : this->MeshComponents)
	{
		Pair.Value->DestroyComponent();
	}
	this->MeshComponents.Empty();


	TArray<FAssetData> MazeMeshAssets = UAssetLoader::GetAssetsInPath(TEXT("/Game/Mazes/" + this->Settings->GetMazeName()));
	for (FAssetData MazeMeshAsset : MazeMeshAssets)
	{

		UStaticMeshComponent* MeshComponent = NewObject<UStaticMeshComponent>(this, MazeMeshAsset.AssetName);
		UStaticMesh* Mesh = UAssetLoader::LoadAssetFromPath<UStaticMesh>(MazeMeshAsset.ObjectPath.ToString());
		MeshComponent->SetStaticMesh(Mesh);
		MeshComponent->SetupAttachment(this->RootComponent);
		MeshComponent->RegisterComponent();

		this->MeshComponents.Add(MazeMeshAsset.AssetName, MeshComponent);
	}

	TArray<FName> UnusedComponentNames;
	this->MeshComponents.GetKeys(UnusedComponentNames);

	for (auto Pair : this->Settings->GetTextures())
	{
		FName SlotName = FName(*Pair.Key);
		FString TextureFileName = Pair.Value;
		UStaticMeshComponent** MeshComponent = this->MeshComponents.Find(SlotName);
		if (MeshComponent != nullptr)
		{
			UMaterialInstanceDynamic* Material = UAssetLoader::LoadMaterialInstanceFromTextureFile(TextureFileName, this);
			(*MeshComponent)->SetMaterial(0, Material);
			UnusedComponentNames.Remove(SlotName);
		}
	}

	for (FName UnusedComponentName : UnusedComponentNames)
	{
		UStaticMeshComponent** MeshComponent = this->MeshComponents.Find(UnusedComponentName);
		if (MeshComponent != nullptr)
		{
			UMaterialInstanceDynamic* Material = UAssetLoader::LoadMaterialInstanceFromTextureFile(TEXT(""), this);
			(*MeshComponent)->SetMaterial(0, Material);
		}
	}
}

UMazeSettings* AMaze::GetSettings()
{
	return this->Settings;
}

void AMaze::SetSettings(UMazeSettings* SettingsValue)
{
	this->Settings = SettingsValue;
	this->UpdateFromSettings();
}
