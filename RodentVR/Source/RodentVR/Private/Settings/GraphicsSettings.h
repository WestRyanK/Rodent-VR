// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Math/IntPoint.h"
#include "GraphicsQualityLevels.h"
#include "GraphicsSettings.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UGraphicsSettings : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintGetter = GetScreenResolution, BlueprintSetter = SetScreenResolution)
		FIntPoint ScreenResolution = FIntPoint(1280, 720);
	UPROPERTY(BlueprintGetter = GetScreenPercentage, BlueprintSetter = SetScreenPercentage)
		int ScreenPercentage = 50;
	UPROPERTY(BlueprintGetter = GetPostProcessingQuality, BlueprintSetter = SetPostProcessingQuality)
		GraphicsQualityLevels PostProcessingQuality = GraphicsQualityLevels::MEDIUM;
	UPROPERTY(BlueprintGetter = GetAntiAliasingQuality, BlueprintSetter = SetAntiAliasingQuality)
		GraphicsQualityLevels AntiAliasingQuality = GraphicsQualityLevels::MEDIUM;
	UPROPERTY(BlueprintGetter = GetShadowQuality, BlueprintSetter = SetShadowQuality)
		GraphicsQualityLevels ShadowQuality = GraphicsQualityLevels::MEDIUM;
	UPROPERTY(BlueprintGetter = GetTextureQuality, BlueprintSetter = SetTextureQuality)
		GraphicsQualityLevels TextureQuality = GraphicsQualityLevels::MEDIUM;

	UFUNCTION(BlueprintGetter)
		FIntPoint GetScreenResolution();
	UFUNCTION(BlueprintSetter)
		void SetScreenResolution(FIntPoint ScreenResolutionValue);
	UFUNCTION(BlueprintGetter)
		int GetScreenPercentage();
	UFUNCTION(BlueprintSetter)
		void SetScreenPercentage(int ScreenPercentageValue);
	UFUNCTION(BlueprintGetter)
		GraphicsQualityLevels GetPostProcessingQuality();
	UFUNCTION(BlueprintSetter)
		void SetPostProcessingQuality(GraphicsQualityLevels PostProcessingQualityValue);
	UFUNCTION(BlueprintGetter)
		GraphicsQualityLevels GetAntiAliasingQuality();
	UFUNCTION(BlueprintSetter)
		void SetAntiAliasingQuality(GraphicsQualityLevels AntiAliasingQualityValue);
	UFUNCTION(BlueprintGetter)
		GraphicsQualityLevels GetShadowQuality();
	UFUNCTION(BlueprintSetter)
		void SetShadowQuality(GraphicsQualityLevels ShadowQualityValue);
	UFUNCTION(BlueprintGetter)
		GraphicsQualityLevels GetTextureQuality();
	UFUNCTION(BlueprintSetter)
		void SetTextureQuality(GraphicsQualityLevels TextureQualityValue);
	
};
