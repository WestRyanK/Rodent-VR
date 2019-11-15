// Fill out your copyright notice in the Description page of Project Settings.

#include "RodentGameMode.h"
#include "Settings/SettingsLoader.h"
#include "Kismet/KismetSystemLibrary.h"
#include "StopConditions/StopConditionsChecker.h"
#include "Settings/MazeLoader.h"


FMazeLoadedDelegate ARodentGameMode::OnMazeLoadedDelegate;

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
	if (this->CurrentMazeIndex < this->PlaylistFiles.Num())
	{
		this->StopConditionsChecker = UMazeLoader::LoadMaze(this, this->PlaylistFiles[this->CurrentMazeIndex]);
		this->OnMazeLoaded();
	}
	else
	{
		FGenericPlatformMisc::RequestExit(false);
	}
}

void ARodentGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (this->StopConditionsChecker != nullptr)
	{
		if (this->StopConditionsChecker->AreStopConditionsMet(this))
		{
			this->StopConditionsChecker = nullptr;

			this->LoadNextMaze();
		}
	}
}

void ARodentGameMode::OnMazeLoaded()
{
	ARodentGameMode::OnMazeLoadedDelegate.Broadcast();
}
