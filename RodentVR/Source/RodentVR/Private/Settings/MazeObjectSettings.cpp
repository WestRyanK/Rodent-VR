// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeObjectSettings.h"

// Sets default values
UMazeObjectSettings::UMazeObjectSettings()
{
	this->SetCanCollide(true);
	this->SetObjectType(MazeObjectType::INVALID);
	this->SetTexture(NewObject<UTextureSettings>());
}


void UMazeObjectSettings::SetObjectType(MazeObjectType ObjectTypeValue)
{
	this->ObjectType = ObjectTypeValue;
}

MazeObjectType UMazeObjectSettings::GetObjectType()
{
	return this->ObjectType;
}

void UMazeObjectSettings::SetTexture(UTextureSettings* TextureValue)
{
	this->Texture = TextureValue;
}

UTextureSettings* UMazeObjectSettings::GetTexture()
{
	return this->Texture;
}


void UMazeObjectSettings::SetCanCollide(bool CanCollideValue)
{
	this->CanCollide = CanCollideValue;
	//this->SetActorEnableCollision(CanCollide);
}

bool UMazeObjectSettings::GetCanCollide()
{
	return this->CanCollide;
}
