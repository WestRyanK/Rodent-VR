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
AMazeObject::AMazeObject() : ASimpleObject()
{
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
	ASimpleObject::Update(this->Settings->GetPosition(), this->Settings->GetRotation(), this->Settings->GetScale(), this->Settings->GetObjectType());
	this->SetActorEnableCollision(this->Settings->GetCanCollide());

	if (this->Settings->GetObjectType() != MazeObjectType::INVALID)
	{
		UMaterialInstanceDynamic* Material = UAssetLoader::LoadMaterial(this->Settings->GetTexture(), this);
		this->StaticMesh->SetMaterial(0, Material);
	}
}
