// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "GameFramework/GameModeBase.h"
#include "RapidXML/rapidxml.hpp"
//#include "StopConditions/StopConditionsChecker.h"
#include <string>
#include "RodentGameMode.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMazeLoadedDelegate);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMazeFinishedDelegate);

class UStopConditionsChecker;
/**
 * 
 */
UCLASS()
class ARodentGameMode : public AGameModeBase
{
	GENERATED_BODY()

private:
	UPROPERTY()
	UStopConditionsChecker* StopConditionsChecker;

	UFUNCTION()
	void OnMazeLoaded();
	UFUNCTION()
	void OnMazeFinished();

public:
	ARodentGameMode();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int CurrentMazeIndex;


	UFUNCTION(BlueprintCallable, Category="Settings Loader")
	void LoadSettings();

	UFUNCTION(BlueprintCallable, Category = "Settings Loader")
	void LoadNextMaze();
	
	virtual void Tick(float DeltaSeconds) override;


	//static FMazeLoadedDelegate OnMazeLoadedDelegate;
	//static FMazeFinishedDelegate OnMazeFinishedDelegate;
};
