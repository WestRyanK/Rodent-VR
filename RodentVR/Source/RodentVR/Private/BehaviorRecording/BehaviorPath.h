// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Math/Color.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/Material.h"
#include "BehaviorSnapshot.h"
#include "Settings/MazeObjectType.h"
#include "Engine/StaticMesh.h"
#include "Engine/Texture2D.h"
#include "BehaviorPath.generated.h"

UCLASS(Blueprintable)
class ABehaviorPath : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABehaviorPath();

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		UStaticMesh* PathNodeMesh;

	UPROPERTY()
		UStaticMeshComponent* PathNodeMeshComponent;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		UMaterial* Material;
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		UTexture2D* MaterialTexture;


	UPROPERTY(BlueprintGetter = GetSnapshots, BlueprintSetter = SetSnapshots)
		TArray<UBehaviorSnapshot*> Snapshots;
	UPROPERTY(BlueprintGetter = GetPathWidth, BlueprintSetter = SetPathWidth)
		float PathWidth = 20.0f;
	UPROPERTY(BlueprintGetter = GetPathColor, BlueprintSetter = SetPathColor)
		FLinearColor PathColor = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
	UPROPERTY(BlueprintGetter = GetIsPathVisible, BlueprintSetter = SetIsPathVisible)
		bool IsPathVisible = true;

	UFUNCTION(BlueprintGetter)
		TArray<UBehaviorSnapshot*> GetSnapshots();
	UFUNCTION(BlueprintSetter)
		void SetSnapshots(TArray<UBehaviorSnapshot*> SnapshotsVal);
	UFUNCTION(BlueprintGetter)
		float GetPathWidth();
	UFUNCTION(BlueprintSetter)
		void SetPathWidth(float PathWidthVal);
	UFUNCTION(BlueprintGetter)
		FLinearColor GetPathColor();
	UFUNCTION(BlueprintSetter)
		void SetPathColor(FLinearColor PathColorVal);
	UFUNCTION(BlueprintGetter)
		bool GetIsPathVisible();
	UFUNCTION(BlueprintSetter)
		void SetIsPathVisible(bool IsPathVisibleVal);

	virtual void BeginPlay();

private:
	UFUNCTION()
		void UpdatePath();
	UFUNCTION()
		void InitPathMaterial();

	UPROPERTY()
		UMaterialInstanceDynamic* PathMaterial = nullptr;


	UFUNCTION()
		FTransform GetTransformFromSnapshot(UBehaviorSnapshot* Snapshot);

	UPROPERTY()
		class UInstancedStaticMeshComponent* BehaviorPathNodesInstances;
};
