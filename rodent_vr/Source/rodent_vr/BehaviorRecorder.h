// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <vector>
#include "BehaviorSnapshot.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BehaviorRecorder.generated.h"

/**
 * 
 */
UCLASS()
class RODENT_VR_API UBehaviorRecorder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
private:
	static std::vector<BehaviorSnapshot> snapshots;
	static int current_region;

public:

	UFUNCTION(BlueprintCallable, Category="Behavior Recorder")
	static void reset();

	UFUNCTION(BlueprintCallable, Category="Behavior Recorder")
	static void record(float time, FVector position, FVector forward);

	UFUNCTION(BlueprintCallable, Category="Behavior Recorder")
	static void save(FString filename);

	UFUNCTION(BlueprintCallable, Category = "Behavior Recorder")
	static void record_region(int region);
};
