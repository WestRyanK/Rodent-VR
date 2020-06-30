// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulatorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Core/RodentVRGameInstance.h"
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

	if (IsValid(this->StopConditionsChecker))
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
	URodentVRGameInstance* GameInstance = Cast<URodentVRGameInstance>(UGameplayStatics::GetGameInstance(this));
	if (IsValid(GameInstance))
	{
		this->CurrentMazeIndex++;
		if (IsValid(this->RodentVRSettings))
		{
			if (this->CurrentMazeIndex < this->RodentVRSettings->GetMazePlaylist().Num())
			{
				UMazeSettings* MazeSettings = this->RodentVRSettings->GetMazePlaylist()[this->CurrentMazeIndex];
				GameInstance->SetCurrentMaze(MazeSettings);
				UMazeSpawner::SpawnMaze(this, MazeSettings, false, false);
				this->StopConditionsChecker = NewObject<UStopConditionsChecker>();
				this->StopConditionsChecker->SetStopConditions(MazeSettings->GetStopConditions());
				this->StopConditionsChecker->InitStopConditions(this);
				this->OnMazeLoaded();
			}
			else
			{
				GameInstance->GoToPage(PageEnum::MAINMENU);
			}
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
