// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulatorGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Core/RodentVRGameInstance.h"
#include "StopConditions/StopConditionsChecker.h"
#include "Hardware/NIDAQ/NIDAQ.h"
#include "MazeSpawner.h"

FMazeLoadedDelegate ASimulatorGameMode::OnMazeLoadedDelegate;
FMazeFinishedDelegate ASimulatorGameMode::OnMazeFinishedDelegate;

ASimulatorGameMode::ASimulatorGameMode()
{
}

//URodentVRSettings* ASimulatorGameMode::GetRodentVRSettings()
//{
//	return this->RodentVRSettings;
//}
//
void ASimulatorGameMode::StopNIDAQDevices()
{
	URodentVRGameInstance* GameInstance = Cast<URodentVRGameInstance>(UGameplayStatics::GetGameInstance(this));
	if (IsValid(GameInstance))
	{
		URodentVRSettings* RodentVRSettings = GameInstance->GetRodentVRSettings();
		if (IsValid(RodentVRSettings))
		{
			TArray<UDevice*> Devices;
			Devices.Add(RodentVRSettings->GetAirPufferLeftDevice());
			Devices.Add(RodentVRSettings->GetAirPufferRightDevice());
			Devices.Append(RodentVRSettings->GetRewardDevices());
			for (UDevice* Device : Devices)
			{
				if (IsValid(Device))
				{
					UNIDAQ::control_NIDAQ(false, Device->GetDevicePath());
				}
			}
		}
	}
}

//void ASimulatorGameMode::SetRodentVRSettings(URodentVRSettings* RodentVRSettingsValue)
//{
//	this->CurrentMazeIndex = -1;
//	this->RodentVRSettings = RodentVRSettingsValue;
//}
//
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
		this->StopNIDAQDevices();
		this->CurrentMazeIndex++;
		URodentVRSettings* RodentVRSettings = GameInstance->GetRodentVRSettings();
		if (IsValid(RodentVRSettings))
		{
			if (this->CurrentMazeIndex < RodentVRSettings->GetMazePlaylist().Num())
			{
				UMazeSettings* MazeSettings = RodentVRSettings->GetMazePlaylist()[this->CurrentMazeIndex];
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
	this->StopNIDAQDevices();
	ASimulatorGameMode::OnMazeFinishedDelegate.Broadcast();
}
