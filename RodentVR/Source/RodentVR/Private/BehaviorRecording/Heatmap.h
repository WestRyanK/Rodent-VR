// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BehaviorSnapshot.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/StaticMesh.h"
#include "ColorGradient.h"
#include "Heatmap.generated.h"

UCLASS(Blueprintable)
class AHeatmap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHeatmap();

	UPROPERTY(BlueprintGetter = GetSnapshots, BlueprintSetter = SetSnapshots)
		TArray<UBehaviorSnapshot*> Snapshots;
	UPROPERTY(BlueprintGetter = GetBucketSize, BlueprintSetter = SetBucketSize)
		int BucketSize = 100;
	UPROPERTY(BlueprintGetter = GetMazeActor, BlueprintSetter = SetMazeActor)
		AActor* MazeActor = nullptr;
	UPROPERTY(BlueprintGetter = GetIsHeatmapVisible, BlueprintSetter = SetIsHeatmapVisible)
		bool IsHeatmapVisible = true;
	UPROPERTY(BlueprintGetter = GetColorGradient, BlueprintSetter = SetColorGradient)
		UColorGradient* ColorGradient;

	UFUNCTION(BlueprintGetter)
		TArray<UBehaviorSnapshot*> GetSnapshots();
	UFUNCTION(BlueprintSetter)
		void SetSnapshots(TArray<UBehaviorSnapshot*> SnapshotsVal);
	UFUNCTION(BlueprintGetter)
		int GetBucketSize();
	UFUNCTION(BlueprintSetter)
		void SetBucketSize(int BucketSizeVal);
	UFUNCTION(BlueprintGetter)
		AActor* GetMazeActor();
	UFUNCTION(BlueprintSetter)
		void SetMazeActor(AActor* MazeActorVal);
	UFUNCTION(BlueprintGetter)
		bool GetIsHeatmapVisible();
	UFUNCTION(BlueprintSetter)
		void SetIsHeatmapVisible(bool IsHeatmapVisibleVal);
	UFUNCTION(BlueprintGetter)
		UColorGradient* GetColorGradient();
	UFUNCTION(BlueprintSetter)
		void SetColorGradient(UColorGradient* ColorGradientVal);
	

private:
	UFUNCTION()
		void UpdateHeatmap();
	UFUNCTION()
		void InitHeatmapMaterial();

	UPROPERTY()
		UMaterialInstanceDynamic* HeatmapMaterial = nullptr;

	UPROPERTY()
		class UStaticMeshComponent* HeatmapMesh;
};
