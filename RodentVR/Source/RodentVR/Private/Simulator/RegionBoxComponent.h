// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "FocusableObject.h"
#include "TransformerPawn.h"
#include "Components/ShapeComponent.h"
#include "Components/BoxComponent.h"
#include "RegionBoxComponent.generated.h"

UCLASS(ClassGroup = "Collision", hidecategories = (Object, LOD, Lighting, TextureStreaming), editinlinenew, meta = (DisplayName = "Box Collision", BlueprintSpawnableComponent))
class URegionBoxComponent : public UBoxComponent, public IFocusableObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintGetter)
		float GetLineThickness();
	UFUNCTION(BlueprintSetter)
		void SetLineThickness(float LineThicknessValue);


	virtual void Focus_Implementation(class ATransformerPawn* Caller, class USceneComponent* Component, bool bComponentBased) override;
};
