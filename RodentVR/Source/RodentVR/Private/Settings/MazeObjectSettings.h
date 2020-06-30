// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Settings/TextureSettings.h"
#include "Classes/Components/StaticMeshComponent.h"
#include "Settings/ActorSettings.h"
#include "MazeObjectSettings.generated.h"

UENUM(BlueprintType)
enum class MazeObjectType : uint8
{
	CUBE UMETA(DisplayName = "Cube"),
	CYLINDER UMETA(DisplayName = "Cylinder"),
	SPHERE UMETA(DisplayName = "Sphere"),
	CONE UMETA(DisplayName = "Cone"),
	FIGURINE UMETA(DisplayName = "Figurine"),
	INVALID UMETA(DisplayName = "Invalid")
};


UCLASS(Blueprintable)
class UMazeObjectSettings : public UActorSettings
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	UMazeObjectSettings();
	static MazeObjectType GetTypeFromString(FString TypeString);

	UFUNCTION(BlueprintSetter)
		void SetCanCollide(bool CanCollideValue);
	UFUNCTION(BlueprintGetter)
		bool GetCanCollide();
	UFUNCTION(BlueprintSetter)
		void SetObjectType(MazeObjectType ObjectTypeValue);
	UFUNCTION(BlueprintGetter)
		MazeObjectType GetObjectType();
	UFUNCTION()
		FString GetObjectTypeString();
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

