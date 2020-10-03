// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Settings/TextureSettings.h"
#include "Classes/Components/StaticMeshComponent.h"
#include "Settings/ActorSettings.h"
#include "MazeObjectType.h"
#include "MazeObjectSettings.generated.h"

UCLASS(Blueprintable)
class UMazeObjectSettings : public UActorSettings
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	UMazeObjectSettings();

	UFUNCTION(BlueprintSetter)
		void SetCanCollide(bool CanCollideValue);
	UFUNCTION(BlueprintGetter)
		bool GetCanCollide();
	UFUNCTION(BlueprintSetter)
		void SetObjectType(MazeObjectType ObjectTypeValue);
	UFUNCTION(BlueprintGetter)
		MazeObjectType GetObjectType();
	UFUNCTION(BlueprintSetter)
		void SetTexture(UTextureSettings* TextureValue);
	UFUNCTION(BlueprintGetter)
		UTextureSettings* GetTexture();

private:
	UPROPERTY(BlueprintGetter = GetCanCollide, BlueprintSetter = SetCanCollide)
		bool CanCollide;
	UPROPERTY(BlueprintGetter = GetObjectType, BlueprintSetter = SetObjectType)
		MazeObjectType ObjectType;
	UPROPERTY(BlueprintGetter = GetTexture, BlueprintSetter = SetTexture)
		UTextureSettings* Texture;
};

