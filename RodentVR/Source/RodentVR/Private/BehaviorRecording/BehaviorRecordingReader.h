// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorSnapshot.h"
#include "BehaviorRecordingReader.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UBehaviorRecordingReader : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		static void LoadBehaviorRecordingFromFile(
			UObject* OuterObject,
			FString BehaviorRecordingFileName,
			FString& SettingsFileName,
			FString& MazeFileName,
			int32 LoadEveryNthSnapshot,
			TArray<UBehaviorSnapshot*>& BehaviorSnapshots);
	
};
