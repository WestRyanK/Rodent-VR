// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "StopConditions/StopCondition.h"
#include "MazeObject.h"
#include "UObject/NoExportTypes.h"
#include "MazeSettings.generated.h"

/**
 *
 */
UCLASS()
class UMazeSettings : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
		FText MazeName;
	UPROPERTY()
		FText MazeSettingsFileName;
	UPROPERTY()
		FText BehaviorRecordingFileName;
	UPROPERTY()
		FTransform PlayerStart;
	UPROPERTY()
		bool AreRegionsVisible;
	//UPROPERTY()
	//TArray<Region> 
	UPROPERTY()
	TArray<AMazeObject*> MazeObjects;
	UPROPERTY()
		TMap<FString, UTexture2D*> Textures;
	UPROPERTY()
	TArray<UStopCondition*> StopConditions;

public:
	UFUNCTION()
		FText GetMazeName();
	UFUNCTION()
		void SetMazeName(FText MazeNameValue);
	UFUNCTION()
		FText GetMazeSettingsFileName();
	UFUNCTION()
		void SetMazeSettingsFileName(FText MazeSettingsFileNameValue);
	UFUNCTION()
		FText GetBehaviorRecordingFileName();
	UFUNCTION()
		void SetBehaviorRecordingFileName(FText BehaviorRecordingFileNameValue);
	UFUNCTION()
		FTransform GetPlayerStart();
	UFUNCTION()
		void SetPlayerStart(FTransform PlayerStartValue);
	UFUNCTION()
		bool GetAreRegionsVisible();
	UFUNCTION()
		void SetAreRegionsVisible(bool AreRegionsVisibleValue);
	UFUNCTION()
		void ClearTextures();
	UFUNCTION()
		void RemoveTexture(FString SlotName);
	UFUNCTION()
		void AddTexture(FString SlotName, FString TextureFileNameValue);
	UFUNCTION()
		void ClearStopConditions();
	UFUNCTION()
		void RemoveStopCondition(int position);
	UFUNCTION()
		void AddStopCondition(UStopCondition* StopCondition);
	UFUNCTION()
		void ClearMazeObjects();
	UFUNCTION()
		void RemoveMazeObject(int position);
	UFUNCTION()
		void AddMazeObject(AMazeObject* MazeObject);
};
