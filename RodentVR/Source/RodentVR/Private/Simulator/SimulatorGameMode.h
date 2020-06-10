// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "Settings/RodentVRSettings.h"
#include "SimulatorGameMode.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMazeLoadedDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMazeFinishedDelegate);

class UStopConditionsChecker;
/**
 *
 */
UCLASS()
class ASimulatorGameMode : public AGameMode
{
	GENERATED_BODY()

private:
	UPROPERTY()
		UStopConditionsChecker* StopConditionsChecker;
	UPROPERTY(BlueprintGetter = GetRodentVRSettings, BlueprintSetter = SetRodentVRSettings)
		URodentVRSettings* RodentVRSettings;

	UFUNCTION()
		void OnMazeLoaded();
	UFUNCTION()
		void OnMazeFinished();

public:

	ASimulatorGameMode();
	
	UPROPERTY(BlueprintReadOnly)
		int CurrentMazeIndex;

	UFUNCTION(BlueprintGetter)
		URodentVRSettings* GetRodentVRSettings();
	UFUNCTION(BlueprintSetter)
		void SetRodentVRSettings(URodentVRSettings* RodentVRSettingsValue);

	UFUNCTION(BlueprintCallable)
		void LoadNextMaze();

	virtual void Tick(float DeltaSeconds) override;


	static FMazeLoadedDelegate OnMazeLoadedDelegate;
	static FMazeFinishedDelegate OnMazeFinishedDelegate;
};
