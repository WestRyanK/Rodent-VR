// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeObject.h"

// Sets default values
AMazeObject::AMazeObject()
{
}

// Called when the game starts or when spawned
void AMazeObject::BeginPlay()
{
	Super::BeginPlay();
	this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	this->StaticMesh->SetupAttachment(this->RootComponent);
	//this->StaticMesh->AttachToComponent(this->RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

MazeObjectType AMazeObject::GetTypeFromString(FString TypeString)
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

FString AMazeObject::GetObjectTypeString()
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
		case MazeObjectType::INVALID:
			return "";
	}
}

void AMazeObject::SetObjectType(MazeObjectType ObjectTypeValue)
{
	this->ObjectType = ObjectTypeValue;
}

MazeObjectType AMazeObject::GetObjectType()
{
	return this->ObjectType;
}

void AMazeObject::SetTextureFileName(FString TextureFileNameValue)
{
	this->TextureFileName = TextureFileNameValue;
}

FString AMazeObject::GetTextureFileName()
{
	return this->TextureFileName;
}


void AMazeObject::SetCanCollide(bool CanCollideValue)
{
	this->CanCollide = CanCollideValue;
	this->SetActorEnableCollision(CanCollide);
}

bool AMazeObject::GetCanCollide()
{
	return this->CanCollide;
}

