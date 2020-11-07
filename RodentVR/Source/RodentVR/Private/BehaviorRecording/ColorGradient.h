// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Math/Color.h"
#include "Engine/Texture2D.h"
#include "ColorGradient.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FColorGradientChangedDelegate);

/**
 *
 */
UCLASS(Blueprintable)
class UColorGradient : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
		FLinearColor GetColorAtValue(float Value);
	UFUNCTION(BlueprintGetter)
		TMap<float, FLinearColor> GetColorStops();
	UFUNCTION(BlueprintCallable, BlueprintPure)
		TArray<float> GetSortedValues();
	UFUNCTION(BlueprintCallable, BlueprintPure)
		void GetMaxMinOfValues(float& MaxValue, float& MinValue);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		TArray<float> GetSortedNormalizedValues();
	UFUNCTION(BlueprintCallable)
		void AddColorStop(float StopValue, FLinearColor StopColor);
	UFUNCTION(BlueprintCallable)
		void RemoveColorStop(float StopValue);
	UFUNCTION(BlueprintGetter)
		bool GetUseHSVLerp();
	UFUNCTION(BlueprintSetter)
		void SetUseHSVLerp(bool UseHSVLerpValue);
	UFUNCTION(BlueprintCallable)
		UTexture2D* CreateTextureFromGradient(int Width);


	UPROPERTY(BlueprintAssignable)
		FColorGradientChangedDelegate OnColorGradientChangedDelegate;

private:
	UPROPERTY(BlueprintGetter = GetColorStops)
		TMap<float, FLinearColor> ColorStops;
	UPROPERTY(BlueprintGetter = GetUseHSVLerp, BlueprintSetter = SetUseHSVLerp)
		bool UseHSVLerp = false;

	UFUNCTION(BlueprintCallable)
		void OnColorGradientChanged();

	static void DrawGradientInTextureData(int Width, uint8* Data, UColorGradient* Gradient);

};
