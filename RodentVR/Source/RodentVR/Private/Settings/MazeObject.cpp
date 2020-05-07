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
	this->StaticMesh->AttachToComponent(this->RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

MazeObjectType AMazeObject::GetTypeFromString(FString TypeString)
{
	if (TypeString == "CUBE")
	{
		return MazeObjectType::CUBE;
	}
	else if(TypeString == "Cylinder")
	{
		return MazeObjectType::SPHERE;
	} 
	else if (TypeString == "Sphere")
	{

		return MazeObjectType::SPHERE;
	}
	else if (TypeString == "Cone")
	{
		return MazeObjectType::FIGURINE;
	}
	else if (TypeString == "Figurine")
	{
		return MazeObjectType::FIGURINE;
	}
	return MazeObjectType::INVALID;
}

void AMazeObject::SetObjectType(MazeObjectType ObjectTypeValue)
{
	this->ObjectType = ObjectTypeValue;
}

MazeObjectType AMazeObject::GetObjectType()
{
	return this->ObjectType;
}

void AMazeObject::SetTextureFileName(FText TextureFileNameValue)
{
	this->TextureFileName = TextureFileNameValue;
}

FText AMazeObject::GetTextureFileName()
{
	return this->TextureFileName;
}

