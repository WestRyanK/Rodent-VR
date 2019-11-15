// Fill out your copyright notice in the Description page of Project Settings.

#include "RodentGameMode.h"
#include "Settings/SettingsLoader.h"
#include "Settings/MazeLoader.h"

ARodentGameMode::ARodentGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ARodentGameMode::LoadSettings()
{
	USettingsLoader::LoadSettings(this, this);
	this->CurrentMazeIndex = -1;

	this->LoadNextMaze();
}

void ARodentGameMode::LoadNextMaze()
{
	this->CurrentMazeIndex++;
	this->StopConditionsChecker = UMazeLoader::LoadMaze(this, this->PlaylistFiles[this->CurrentMazeIndex]);
}

void ARodentGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (this->StopConditionsChecker != nullptr)
	{
		if (this->StopConditionsChecker->AreStopConditionsMet(this))
		{
			delete this->StopConditionsChecker;
			this->StopConditionsChecker = nullptr;

			this->LoadNextMaze();
		}
	}
}
