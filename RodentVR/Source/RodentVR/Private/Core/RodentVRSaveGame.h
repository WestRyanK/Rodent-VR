// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "RodentVRSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class URodentVRSaveGame : public USaveGame
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintGetter = GetRodentVRSettingsFileName, BlueprintSetter = SetRodentVRSettingsFileName)
		FString RodentVRSettingsFileName;

public:
	UFUNCTION(BlueprintGetter)
		FString GetRodentVRSettingsFileName();
	UFUNCTION(BlueprintSetter)
		void SetRodentVRSettingsFileName(FString RodentVRSettingsFileNameValue);
	
	static const FString GameSlot;
};
