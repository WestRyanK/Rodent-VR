// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Math/Color.h"
#include "ColorGradient.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UColorGradient : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintGetter = GetColorStops)
		TMap<float, FLinearColor> ColorStops;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		FLinearColor GetColorAtValue(float Value);
	UFUNCTION(BlueprintGetter)
		TMap<float, FLinearColor> GetColorStops();
	UFUNCTION(BlueprintCallable)
		void AddColorStop(float StopValue, FLinearColor StopColor);

};
