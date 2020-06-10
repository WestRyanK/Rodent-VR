// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulatorGameMode.h"
#include "StopConditions/StopConditionsChecker.h"
#include "MazeSpawner.h"

FMazeLoadedDelegate ASimulatorGameMode::OnMazeLoadedDelegate;
FMazeFinishedDelegate ASimulatorGameMode::OnMazeFinishedDelegate;

ASimulatorGameMode::ASimulatorGameMode()
{
}

URodentVRSettings* ASimulatorGameMode::GetRodentVRSettings()
{
	return this->RodentVRSettings;
}

void ASimulatorGameMode::SetRodentVRSettings(URodentVRSettings* RodentVRSettingsValue)
{
	this->CurrentMazeIndex = -1;
	this->RodentVRSettings = RodentVRSettingsValue;
}

void ASimulatorGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (this->StopConditionsChecker != nullptr)
	{
		if (this->StopConditionsChecker->AreStopConditionsMet(this))
		{
			this->OnMazeFinished();
			this->StopConditionsChecker = nullptr;

			this->LoadNextMaze();
		}
	}
}

void ASimulatorGameMode::LoadNextMaze()
{
	this->CurrentMazeIndex++;
	if (this->RodentVRSettings != nullptr)
	{
		if (this->CurrentMazeIndex < this->RodentVRSettings->GetMazePlaylist().Num())
		{
			UMazeSettings* MazeSettings = this->RodentVRSettings->GetMazePlaylist()[this->CurrentMazeIndex];
			TMap<AActor*, UObject*> ActorToSetting;
			TMap<UObject*, AActor*> SettingToActor;
			TArray<UStopCondition*> StopConditions;
			UMazeSpawner::SpawnMaze(this, MazeSettings, false, ActorToSetting, SettingToActor, StopConditions);
			this->StopConditionsChecker = NewObject<UStopConditionsChecker>();
			this->StopConditionsChecker->SetStopConditions(StopConditions);
			this->OnMazeLoaded();
		}
		else
		{
			FGenericPlatformMisc::RequestExit(false);
		}
	}
}

void ASimulatorGameMode::OnMazeLoaded()
{
	ASimulatorGameMode::OnMazeLoadedDelegate.Broadcast();
}

void ASimulatorGameMode::OnMazeFinished()
{
	ASimulatorGameMode::OnMazeFinishedDelegate.Broadcast();
}
