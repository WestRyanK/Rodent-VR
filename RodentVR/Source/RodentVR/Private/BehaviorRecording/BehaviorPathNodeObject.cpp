// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviorPathNodeObject.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Simulator/AssetLoader.h"
#include "Settings/MazeObjectType.h"

FName ABehaviorPathNodeObject::BehaviorPathNodeObjectTag = FName("BehaviorPathNodeObject");

FName ABehaviorPathNodeObject::GetBehaviorPathNodeObjectTag()
{
	return ABehaviorPathNodeObject::BehaviorPathNodeObjectTag;
}

// Sets default values
ABehaviorPathNodeObject::ABehaviorPathNodeObject() : ASimpleObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	this->Tags.Add(ABehaviorPathNodeObject::BehaviorPathNodeObjectTag);
}

void ABehaviorPathNodeObject::UpdateNodeObject(FVector Position, FRotator Rotation, FVector Scale, FVector Color)
{
	ASimpleObject::Update(Position, Rotation, Scale, MazeObjectType::SPHERE);
	UMaterial* Material = UAssetLoader::LoadAssetFromPath<UMaterial>("Material'/Game/BehavioralAnalysis/BehaviorPathMaterial.BehaviorPathMaterial");
	UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(Material, this);
	DynamicMaterial->SetVectorParameterValue(FName("Color"), Color);

	this->StaticMesh->SetMaterial(0, DynamicMaterial);
}
