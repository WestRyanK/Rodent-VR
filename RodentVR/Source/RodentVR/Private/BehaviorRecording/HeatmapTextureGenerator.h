// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorRecording/BehaviorSnapshot.h"
#include "Engine/Texture2D.h"
#include "Math/IntPoint.h"
#include "BehaviorRecording/ColorGradient.h"
#include "HeatmapTextureGenerator.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UHeatmapTextureGenerator : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	static UTexture2D* CreateHeatmapTexture(FVector HeatmapStart, FVector HeatmapEnd, int BucketSize, TArray<UBehaviorSnapshot*> Snapshots, UColorGradient* ColorGradient);

private:
	static TArray<float> CreateBucketsFromSnapshots(FVector HeatmapStart, FIntPoint HeatmapBucketsCount, int BucketSize, TArray<UBehaviorSnapshot*> Snapshots);
	static FIntPoint GetHeatmapSize(FVector HeatmapStart, FVector HeatmapEnd);
	static FIntPoint GetBucketIndex(FVector HeatmapStart, int BucketSize, FVector Position);
	static void DrawHeatmapInTextureData(TArray<float> Buckets, FIntPoint BucketsCount, int BucketSize, FIntPoint HeatmapSize, uint8* Data, UColorGradient* ColorGradient);
	//static void DrawHeatmapInTextureData(TArray<float> Buckets, FIntPoint BucketsCount, int BucketSize, FIntPoint HeatmapSize, FColor* Data, UColorGradient* ColorGradient);
	static FIntPoint GetHeatmapBucketsCount(FIntPoint HeatmapSize, int BucketSize);
};
