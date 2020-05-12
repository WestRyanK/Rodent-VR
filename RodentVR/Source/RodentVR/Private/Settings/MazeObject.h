// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Classes/Components/StaticMeshComponent.h"
#include "MazeObject.generated.h"

UENUM()
enum class MazeObjectType
{
	CUBE UMETA(DisplayName = "Cube"),
	CYLINDER UMETA(DisplayName = "Cylinder"),
	SPHERE UMETA(DisplayName = "Sphere"),
	CONE UMETA(DisplayName = "Cone"),
	FIGURINE UMETA(DisplayName = "Figurine"),
	INVALID UMETA(DisplayName = "Invalid")
};


UCLASS()
class AMazeObject : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMazeObject();
	static MazeObjectType GetTypeFromString(FString TypeString);

	UFUNCTION()
		void SetObjectType(MazeObjectType ObjectTypeValue);
	UFUNCTION()
		MazeObjectType GetObjectType();
	UFUNCTION()
		void SetTextureFileName(FString TextureFileNameValue);
	UFUNCTION()
		FString GetTextureFileName();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY()
		MazeObjectType ObjectType;
	UPROPERTY()
		FString TextureFileName;
	UPROPERTY()
		class UStaticMeshComponent* StaticMesh;
};

