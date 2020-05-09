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
UCLASS(Blueprintable)
class UMazeSettings : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintGetter=GetMazeName, BlueprintSetter=SetMazeName)
		FText MazeName;
	UPROPERTY(BlueprintGetter=GetMazeSettingsFileName, BlueprintSetter=SetMazeSettingsFileName)
		FText MazeSettingsFileName;
	UPROPERTY(BlueprintGetter=GetBehaviorRecordingFileName, BlueprintSetter=SetBehaviorRecordingFileName)
		FText BehaviorRecordingFileName;
	UPROPERTY(BlueprintGetter=GetPlayerStart, BlueprintSetter=SetPlayerStart)
		FTransform PlayerStart;
	UPROPERTY(BlueprintGetter=GetAreRegionsVisible, BlueprintSetter=SetAreRegionsVisible)
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
	UFUNCTION(BlueprintGetter)
		FText GetMazeName();
	UFUNCTION(BlueprintSetter)
		void SetMazeName(FText MazeNameValue);
	UFUNCTION(BlueprintGetter)
		FText GetMazeSettingsFileName();
	UFUNCTION(BlueprintSetter)
		void SetMazeSettingsFileName(FText MazeSettingsFileNameValue);
	UFUNCTION(BlueprintGetter)
		FText GetBehaviorRecordingFileName();
	UFUNCTION(BlueprintSetter)
		void SetBehaviorRecordingFileName(FText BehaviorRecordingFileNameValue);
	UFUNCTION(BlueprintGetter)
		FTransform GetPlayerStart();
	UFUNCTION(BlueprintSetter)
		void SetPlayerStart(FTransform PlayerStartValue);
	UFUNCTION(BlueprintGetter)
		bool GetAreRegionsVisible();
	UFUNCTION(BlueprintSetter)
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
