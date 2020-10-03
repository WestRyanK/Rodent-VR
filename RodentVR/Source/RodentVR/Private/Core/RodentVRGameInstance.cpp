#include "RodentVRGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Core/RodentVRSaveGame.h"
#include "XML/RodentVRSettingsXmlReader.h"

void URodentVRGameInstance::Init()
{
	Super::Init();

	URodentVRSettings::OnRodentVRSettingsChangedDelegate.AddDynamic(this, &URodentVRGameInstance::OnRodentVRSettingsChanged);
	this->LoadGame();
}

void URodentVRGameInstance::OnRodentVRSettingsChanged()
{
	if (!this->IgnoreSettingsChanged)
	{
		this->SetSettingsModified(true);
	}
}

URodentVRSettings* URodentVRGameInstance::GetRodentVRSettings()
{
	return this->RodentVRSettings;
}

void URodentVRGameInstance::SetRodentVRSettings(URodentVRSettings* RodentVRSettingsValue)
{
	this->RodentVRSettings = RodentVRSettingsValue;
	this->SaveGame();
	this->OnSettingsLoaded();
	this->SetSettingsModified(false);
}

UMazeSettings* URodentVRGameInstance::GetCurrentMaze()
{
	return this->CurrentMaze;
}

void URodentVRGameInstance::SetCurrentMaze(UMazeSettings* CurrentMazeValue)
{
	this->CurrentMaze = CurrentMazeValue;
}

void URodentVRGameInstance::LoadGame()
{
	if (UGameplayStatics::DoesSaveGameExist(URodentVRSaveGame::GameSlot, 0))
	{
		URodentVRSaveGame* SaveGameObject = (URodentVRSaveGame*)UGameplayStatics::LoadGameFromSlot(URodentVRSaveGame::GameSlot, 0);
		URodentVRSettings* Settings = URodentVRSettingsXmlReader::LoadRodentVRSettingsFromFile(SaveGameObject->GetRodentVRSettingsFileName());
		this->SetRodentVRSettings(Settings);
	}
}

void URodentVRGameInstance::SaveGame()
{
	URodentVRSaveGame* SaveGameObject = (URodentVRSaveGame*)UGameplayStatics::CreateSaveGameObject(URodentVRSaveGame::StaticClass());
	if (IsValid(this->RodentVRSettings))
	{
		SaveGameObject->SetRodentVRSettingsFileName(this->RodentVRSettings->GetSettingsFileName());
	}
	UGameplayStatics::SaveGameToSlot(SaveGameObject, URodentVRSaveGame::GameSlot, 0);
}

PageEnum URodentVRGameInstance::GetCurrentPage()
{
	return this->CurrentPage;
}

void URodentVRGameInstance::GoToPage(PageEnum Page)
{
	this->CurrentPage = Page;

	switch (Page)
	{
	case PageEnum::MAINMENU:
	case PageEnum::OPTIONS:
	case PageEnum::OPTIONS_PLAYLIST:
		UGameplayStatics::OpenLevel(this, "MainMap", false, "?Game=/Game/Menu/MainMenuGameMode.MainMenuGameMode_C");
		//UGameplayStatics::OpenLevel(this, "MainMenuMap", false, "?Game=/Game/Menu/MainMenuGameMode.MainMenuGameMode_C");
		break;
	case PageEnum::EDITOR:
		UGameplayStatics::OpenLevel(this, "MainMap", false, "?Game=/Game/Editor/EditorGameMode.EditorGameMode_C");
		//UGameplayStatics::OpenLevel(this, "SimulatorMap", false, "?Game=/Game/Editor/EditorGameMode.EditorGameMode_C");
		break;
	case PageEnum::SIMULATOR:
		UGameplayStatics::OpenLevel(this, "MainMap", false, "?Game=/Game/Simulator/SimulatorGameModeBP.SimulatorGameModeBP_C");
		//UGameplayStatics::OpenLevel(this, "SimulatorMap", false, "?Game=/Game/Simulator/SimulatorGameModeBP.SimulatorGameModeBP_C");
		break;
	case PageEnum::BEHAVIORAL_ANALYSIS:
		UGameplayStatics::OpenLevel(this, "MainMap", false, "?Game=/Game/BehavioralAnalysis/BehavioralAnalysisGameMode.BehavioralAnalysisGameMode_C");
		//UGameplayStatics::OpenLevel(this, "SimulatorMap", false, "?Game=/Game/BehavioralAnalysis/BehavioralAnalysisGameMode.BehavioralAnalysisGameMode_C");
		break;
	case PageEnum::EXIT:
		GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
	}
}

void URodentVRGameInstance::OnSettingsLoaded()
{
	this->OnSettingsLoadedDelegate.Broadcast();
}

UToneGenerator* URodentVRGameInstance::GetToneGenerator(UObject* WorldContextObject)
{
	if (!IsValid(this->ToneGenerator))
	{
		this->ToneGenerator = NewObject<UToneGenerator>(WorldContextObject);
		int32 SampleRate = 44100;
		this->ToneGenerator->Init(SampleRate);
	}

	return this->ToneGenerator;
}

bool URodentVRGameInstance::GetSettingsModified()
{
	return this->SettingsModified;
}

void URodentVRGameInstance::SetSettingsModified(bool SettingsModifiedValue)
{
	this->SettingsModified = SettingsModifiedValue;
}

bool URodentVRGameInstance::GetIgnoreSettingsChanged()
{
	return this->IgnoreSettingsChanged;
}

void URodentVRGameInstance::SetIgnoreSettingsChanged(bool IgnoreSettingsChangedValue)
{
	this->IgnoreSettingsChanged = IgnoreSettingsChangedValue;
}
