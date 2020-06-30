// Fill out your copyright notice in the Description page of Project Settings.


#include "StartPosition.h"
#include "Engine/StaticMesh.h"
#include "Simulator/AssetLoader.h"

FName AStartPosition::StartPositionTag = FName("StartPosition");

FName AStartPosition::GetStartPositionTag()
{
	return AStartPosition::StartPositionTag;
}


AStartPosition::AStartPosition()
{
	PrimaryActorTick.bCanEverTick = false;

	this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	this->RootComponent = this->StaticMesh;
	//this->StaticMesh->SetupAttachment(this->RootComponent);

	FString MeshPath = FString(TEXT("StaticMesh'/Game/Objects/StartFlagMesh.StartFlagMesh"));

	UStaticMesh* Mesh = UAssetLoader::LoadAssetFromPath<UStaticMesh>(MeshPath);
	this->StaticMesh->SetStaticMesh(Mesh);

	this->Tags.Add(AStartPosition::StartPositionTag);
}

// Called when the game starts or when spawned
void AStartPosition::BeginPlay()
{
	Super::BeginPlay();

}

UStartPositionSettings* AStartPosition::GetSettings()
{
	return this->Settings;
}

void AStartPosition::SetSettings(UStartPositionSettings* SettingsValue)
{
	this->Settings = SettingsValue;
	this->UpdateFromSettings();
}

void AStartPosition::UpdateFromSettings()
{
	this->SetActorLocation(this->Settings->GetPosition());
	this->SetActorRotation(this->Settings->GetRotation());
	this->SetActorScale3D(this->Settings->GetScale());

	UMaterialInstanceDynamic* DynamicMaterial = UAssetLoader::LoadMaterialFromTexture(nullptr, this);
	this->StaticMesh->SetMaterial(0, DynamicMaterial);
}

