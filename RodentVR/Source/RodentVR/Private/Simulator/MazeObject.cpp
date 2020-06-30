// Fill out your copyright notice in the Description page of Project Settings.

#include "MazeObject.h"
#include "Engine/StaticMesh.h"
#include "Simulator/AssetLoader.h"

FName AMazeObject::MazeObjectTag = FName("MazeObject");

FName AMazeObject::GetMazeObjectTag()
{
	return AMazeObject::MazeObjectTag;
}

// Sets default values
AMazeObject::AMazeObject()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	this->RootComponent = this->StaticMesh;

	this->Tags.Add(AMazeObject::MazeObjectTag);
}

UMazeObjectSettings* AMazeObject::GetSettings()
{
	return this->Settings;
}

void AMazeObject::SetSettings(UMazeObjectSettings* SettingsValue)
{
	this->Settings = SettingsValue;
	this->UpdateFromSettings();
}

void AMazeObject::UpdateFromSettings()
{
	this->SetActorLocation(this->Settings->GetPosition());
	this->SetActorRotation(this->Settings->GetRotation());
	this->SetActorScale3D(this->Settings->GetScale());
	this->SetActorEnableCollision(this->Settings->GetCanCollide());

	if (this->Settings->GetObjectType() != MazeObjectType::INVALID)
	{
		FString ObjectTypeString = this->Settings->GetObjectTypeString();
		FString MeshPath = FString(TEXT("StaticMesh'/Game/Objects/") + ObjectTypeString + TEXT("Mesh.") + ObjectTypeString + TEXT("Mesh"));

		UStaticMesh* Mesh = UAssetLoader::LoadAssetFromPath<UStaticMesh>(MeshPath);
		this->StaticMesh->SetStaticMesh(Mesh);

		UMaterialInstanceDynamic* Material = UAssetLoader::LoadMaterial(this->Settings->GetTexture(), this);
		this->StaticMesh->SetMaterial(0, Material);
	}
}
