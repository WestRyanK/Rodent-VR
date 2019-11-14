// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "GameFramework/GameModeBase.h"
#include "RapidXML/rapidxml.hpp"
#include "StopConditionsChecker.h"
#include <string>
#include "RodentGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ARodentGameMode : public AGameModeBase
{
	GENERATED_BODY()

private:
	StopConditionsChecker* StopConditionsChecker;
	
public:
	ARodentGameMode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AirPufferLeftDeviceName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AirPufferRightDeviceName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AirPufferFrontAngle;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> RewardDeviceNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> PlaylistFiles;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int CurrentMazeIndex;


	UFUNCTION(BlueprintCallable, Category="Settings Loader")
	void LoadSettings();

	UFUNCTION(BlueprintCallable, Category = "Settings Loader")
	void LoadNextMaze();
	
	virtual void Tick(float DeltaSeconds) override;
};
