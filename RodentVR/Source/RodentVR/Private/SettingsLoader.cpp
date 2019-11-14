// Fill out your copyright notice in the Description page of Project Settings.


#include "SettingsLoader.h"
#include <stdexcept>

void USettingsLoader::LoadPlaylist(ARodentGameMode* InRodentGameMode, rapidxml::xml_node<>* SettingsNode)
{
	TArray<FString> PlaylistFiles;

	rapidxml::xml_node<>* PlaylistNode = SettingsNode->first_node("Playlist");
	if (PlaylistNode != nullptr)
	{
		for (rapidxml::xml_node<>* MazeFileNode = PlaylistNode->first_node("MazeFile"); MazeFileNode; MazeFileNode = MazeFileNode->next_sibling())
		{
			FString MazeFilePath = FString(USettingsLoader::GetStringFromAttribute(MazeFileNode, "Path", "").c_str());
			PlaylistFiles.Add(MazeFilePath);
		}
	}

	InRodentGameMode->PlaylistFiles = PlaylistFiles;
}

void USettingsLoader::LoadRewardDevices(ARodentGameMode* InRodentGameMode, rapidxml::xml_node<>* SettingsNode)
{
	TArray<FString> RewardDeviceNames;

	rapidxml::xml_node<>* RewardDevicesNode = SettingsNode->first_node("RewardDevices");
	if (RewardDevicesNode != nullptr)
	{
		for (rapidxml::xml_node<>* RewardDeviceNode = RewardDevicesNode->first_node("RewardDevice"); RewardDeviceNode; RewardDeviceNode = RewardDeviceNode->next_sibling())
		{
			FString RewardDeviceName = FString(USettingsLoader::GetStringFromAttribute(RewardDeviceNode, "Name", "").c_str());
			RewardDeviceNames.Add(RewardDeviceName);
		}
	}

	InRodentGameMode->RewardDeviceNames = RewardDeviceNames;
}

void USettingsLoader::LoadAirPufferSettings(ARodentGameMode* InRodentGameMode, rapidxml::xml_node<>* SettingsNode)
{
	rapidxml::xml_node<>* AirPufferNode = SettingsNode->first_node("AirPuffer");
	if (AirPufferNode != nullptr)
	{
		FString LeftDeviceName = FString(USettingsLoader::GetStringFromAttribute(AirPufferNode->first_node("LeftDevice"), "Name", "").c_str());
		FString RightDeviceName = FString(USettingsLoader::GetStringFromAttribute(AirPufferNode->first_node("RightDevice"), "Name", "").c_str());
		float FrontToleranceAngle = USettingsLoader::GetFloatFromAttribute(AirPufferNode->first_node("FrontTolerance"), "Angle", 0.0f);

		InRodentGameMode->AirPufferLeftDeviceName = LeftDeviceName;
		InRodentGameMode->AirPufferLeftDeviceName = LeftDeviceName;
		InRodentGameMode->AirPufferFrontAngle = FrontToleranceAngle;
	}
}

void USettingsLoader::LoadSettings(UObject* WorldContextObject, ARodentGameMode* InRodentGameMode)
{
	UWorld* World = WorldContextObject->GetWorld();

	rapidxml::xml_document<>* File = nullptr;
	
	try
	{
		File = USettingsLoader::OpenFile( "C:\\Users\\Ryan\\Drive\\BYU\\2018_Fall\\cs_497r\\Rodent-VR\\RodentVR\\TestSettings.vrsettings");
	}
	catch (rapidxml::parse_error ex)
	{
	}
	catch (std::runtime_error ex)
	{
	}

	if (File != nullptr && World != nullptr)
	{
		rapidxml::xml_node<>* SettingsNode = File->first_node("Settings");
		if (SettingsNode != nullptr)
		{
			USettingsLoader::LoadAirPufferSettings(InRodentGameMode, SettingsNode);
			USettingsLoader::LoadRewardDevices(InRodentGameMode, SettingsNode);
			USettingsLoader::LoadPlaylist(InRodentGameMode, SettingsNode);
		}
	}
}
