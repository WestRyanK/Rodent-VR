// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeObjectSettings.h"

// Sets default values
UMazeObjectSettings::UMazeObjectSettings()
{
	this->SetCanCollide(true);
	this->SetObjectType(MazeObjectType::INVALID);
	this->SetTextureFileName(TEXT(""));
}

MazeObjectType UMazeObjectSettings::GetTypeFromString(FString TypeString)
{
	if (TypeString == "Cube")
	{
		return MazeObjectType::CUBE;
	}
	else if (TypeString == "Cylinder")
	{
		return MazeObjectType::CYLINDER;
	}
	else if (TypeString == "Sphere")
	{
		return MazeObjectType::SPHERE;
	}
	else if (TypeString == "Cone")
	{
		return MazeObjectType::CONE;
	}
	else if (TypeString == "Figurine")
	{
		return MazeObjectType::FIGURINE;
	}
	return MazeObjectType::INVALID;
}

FString UMazeObjectSettings::GetObjectTypeString()
{
	switch (this->ObjectType)
	{
	case MazeObjectType::CUBE:
		return "Cube";
	case MazeObjectType::CYLINDER:
		return "Cylinder";
	case MazeObjectType::SPHERE:
		return "Sphere";
	case MazeObjectType::CONE:
		return "Cone";
	case MazeObjectType::FIGURINE:
		return "Figurine";
	default:
		return "";
	}
}

void UMazeObjectSettings::SetObjectType(MazeObjectType ObjectTypeValue)
{
	this->ObjectType = ObjectTypeValue;
}

MazeObjectType UMazeObjectSettings::GetObjectType()
{
	return this->ObjectType;
}

void UMazeObjectSettings::SetTextureFileName(FString TextureFileNameValue)
{
	this->TextureFileName = TextureFileNameValue;
}

FString UMazeObjectSettings::GetTextureFileName()
{
	return this->TextureFileName;
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
