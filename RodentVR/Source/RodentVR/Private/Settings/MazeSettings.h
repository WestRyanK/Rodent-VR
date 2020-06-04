// Fill out your copyright notice in the Description page of Project Settings.


#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "StopConditions/StopCondition.h"
#include "MazeObjectSettings.h"
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
	UPROPERTY(BlueprintGetter = GetMazeName, BlueprintSetter = SetMazeName)
		FString MazeName;
	UPROPERTY(BlueprintGetter = GetMazeSettingsFileName, BlueprintSetter = SetMazeSettingsFileName)
		FString MazeSettingsFileName;
	UPROPERTY(BlueprintGetter = GetBehaviorRecordingFileName, BlueprintSetter = SetBehaviorRecordingFileName)
		FString BehaviorRecordingFileName;
	UPROPERTY(BlueprintGetter = GetPlayerStart, BlueprintSetter = SetPlayerStart)
		FTransform PlayerStart;
	UPROPERTY(BlueprintGetter = GetAreRegionsVisible, BlueprintSetter = SetAreRegionsVisible)
		bool AreRegionsVisible;
	//UPROPERTY()
	//TArray<Region> 
	UPROPERTY(BlueprintGetter = GetMazeObjects)
		TArray<UMazeObjectSettings*> MazeObjects;
	UPROPERTY(BlueprintGetter = GetTextures)
		TMap<FString, FString> Textures;
	UPROPERTY(BlueprintGetter = GetStopConditions)
		TArray<UStopCondition*> StopConditions;

public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool DoesMazeHaveSettings() const;
	UFUNCTION(BlueprintGetter)
		FString GetMazeName();
	UFUNCTION(BlueprintSetter)
		void SetMazeName(FString MazeNameValue);
	UFUNCTION(BlueprintGetter)
		FString GetMazeSettingsFileName();
	UFUNCTION(BlueprintSetter)
		void SetMazeSettingsFileName(FString MazeSettingsFileNameValue);
	UFUNCTION(BlueprintGetter)
		FString GetBehaviorRecordingFileName();
	UFUNCTION(BlueprintSetter)
		void SetBehaviorRecordingFileName(FString BehaviorRecordingFileNameValue);
	UFUNCTION(BlueprintGetter)
		FTransform GetPlayerStart();
	UFUNCTION(BlueprintSetter)
		void SetPlayerStart(FTransform PlayerStartValue);
	UFUNCTION(BlueprintGetter)
		bool GetAreRegionsVisible();
	UFUNCTION(BlueprintSetter)
		void SetAreRegionsVisible(bool AreRegionsVisibleValue);
	UFUNCTION(BlueprintGetter)
		TMap<FString, FString> GetTextures();
	UFUNCTION(BlueprintCallable)
		void ClearTextures();
	UFUNCTION(BlueprintCallable)
		void RemoveTexture(FString SlotName);
	UFUNCTION(BlueprintCallable)
		void AddTexture(FString SlotName, FString TextureFileNameValue);
	UFUNCTION(BlueprintCallable)
		void ClearStopConditions();
	UFUNCTION(BlueprintCallable)
		void RemoveStopCondition(int position);
	UFUNCTION(BlueprintCallable)
		void AddStopCondition(UStopCondition* StopCondition);
	UFUNCTION(BlueprintGetter)
		TArray<UStopCondition*> GetStopConditions();
	UFUNCTION(BlueprintCallable)
		void ClearMazeObjects();
	UFUNCTION(BlueprintCallable)
		void RemoveMazeObject(UMazeObjectSettings* MazeObject);
	UFUNCTION(BlueprintCallable)
		void AddMazeObject(UMazeObjectSettings* MazeObject);
	UFUNCTION(BlueprintGetter)
		TArray<UMazeObjectSettings*> GetMazeObjects();
};
