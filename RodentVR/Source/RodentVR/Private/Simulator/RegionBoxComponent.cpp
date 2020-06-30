// Fill out your copyright notice in the Description page of Project Settings.


#include "RegionBoxComponent.h"
#include "WorldCollision.h"
#include "PrimitiveViewRelevance.h"
#include "PrimitiveSceneProxy.h"
#include "Components/StaticMeshComponent.h"
#include "SceneManagement.h"
#include "PhysicsEngine/BoxElem.h"
#include "PhysicsEngine/BodySetup.h"
#include "PrimitiveSceneProxy.h"

float URegionBoxComponent::GetLineThickness()
{
	return this->LineThickness;
}

void URegionBoxComponent::SetLineThickness(float LineThicknessValue)
{
	this->LineThickness = LineThicknessValue;
}

void URegionBoxComponent::Focus_Implementation(class ATransformerPawn* Caller, class USceneComponent* Component, bool bComponentBased)
{
	AActor* Owner = this->GetOwner();
	if (IsValid(Owner))
	{
		UStaticMeshComponent* MeshComponent = Owner->FindComponentByClass<UStaticMeshComponent>();
		if (IsValid(MeshComponent))
		{
			Caller->SelectComponent(MeshComponent);
		}
	}
}
