// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleObject.h"
#include "Settings/MazeObjectTypeHelper.h"
#include "Simulator/AssetLoader.h"

// Sets default values
ASimpleObject::ASimpleObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	this->RootComponent = this->StaticMesh;

}

void ASimpleObject::Update(FVector Position, FRotator Rotation, FVector Scale, MazeObjectType ObjectType)
{
	this->SetActorLocation(Position);
	this->SetActorRotation(Rotation);
	this->SetActorScale3D(Scale);

	if (ObjectType != MazeObjectType::INVALID)
	{
		FString ObjectTypeString = UMazeObjectTypeHelper::ObjectTypeToString(ObjectType);
		FString MeshPath = FString(TEXT("StaticMesh'/Game/Objects/") + ObjectTypeString + TEXT("Mesh.") + ObjectTypeString + TEXT("Mesh"));

		UStaticMesh* Mesh = UAssetLoader::LoadAssetFromPath<UStaticMesh>(MeshPath);
		this->StaticMesh->SetStaticMesh(Mesh);
	}
}
