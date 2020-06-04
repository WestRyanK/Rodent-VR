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

	this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	this->StaticMesh->SetupAttachment(this->RootComponent);

	this->Tags.Add(AMaze::MazeTag);
}

void AMaze::UpdateMaze()
{
	FString MeshPath = FString(TEXT("StaticMesh'/Game/Mazes/") + this->MazeName + TEXT("Mesh.") + this->MazeName + TEXT("Mesh"));

	UStaticMesh* Mesh = UAssetLoader::LoadAssetFromPath<UStaticMesh>(MeshPath);
	this->StaticMesh->SetStaticMesh(Mesh);
	TArray<FName> MaterialSlots = this->StaticMesh->GetMaterialSlotNames();

	for (auto Pair : this->Textures)
	{
		FName SlotName = FName(*Pair.Key);
		FString TextureFileName = Pair.Value;
		UMaterialInstanceDynamic* Material = UAssetLoader::LoadMaterialInstanceFromTextureFile(TextureFileName, this);
		this->StaticMesh->SetMaterialByName(SlotName, Material);
		MaterialSlots.Remove(SlotName);
	}

	for (auto UnusedSlot : MaterialSlots)
	{
		UMaterialInstanceDynamic* Material = UAssetLoader::LoadMaterialInstanceFromTextureFile(TEXT(""), this);
		this->StaticMesh->SetMaterialByName(UnusedSlot, Material);
	}
}

FString AMaze::GetMazeName()
{
	return this->MazeName;
}

void AMaze::SetMazeName(FString MazeNameValue)
{
	this->MazeName = MazeNameValue;
	this->UpdateMaze();
}

TMap<FString, FString> AMaze::GetTextures()
{
	return this->Textures;
}

void AMaze::SetTextures(TMap<FString, FString> TexturesValue)
{
	this->Textures = TexturesValue;
	this->UpdateMaze();
}
