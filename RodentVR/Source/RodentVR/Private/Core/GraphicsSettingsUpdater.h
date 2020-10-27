// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Settings/GraphicsSettings.h"
#include "GraphicsSettingsUpdater.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UGraphicsSettingsUpdater : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
		static void UpdateGraphicsSettings(UObject* WorldContextObject, UGraphicsSettings* GraphicsSettings);
};
