// Fill out your copyright notice in the Description page of Project Settings.


#include "RodentVRSettings.h"

URodentVRSettings::URodentVRSettings()
{
	this->SetAirPufferLeftDevice(NewObject<UDevice>());
	this->SetAirPufferRightDevice(NewObject<UDevice>());
}

FString URodentVRSettings::GetSettingsFileName()
{
	return this->SettingsFileName;
}

void URodentVRSettings::SetSettingsFileName(FString SettingsFileNameValue)
{
	this->SettingsFileName = SettingsFileNameValue;
}

FString URodentVRSettings::GetBallInputMouseADevice()
{
	return this->BallInputMouseADevice;
}

void URodentVRSettings::SetBallInputMouseADevice(FString BallInputMouseADeviceValue)
{
	this->BallInputMouseADevice = BallInputMouseADeviceValue;
}

FString URodentVRSettings::GetBallInputMouseBDevice()
{
	return this->BallInputMouseBDevice;
}

void URodentVRSettings::SetBallInputMouseBDevice(FString BallInputMouseBDeviceValue)
{
	this->BallInputMouseBDevice = BallInputMouseBDeviceValue;
}

float URodentVRSettings::GetBallInputMouseAMultiplier()
{
	return this->BallInputMouseAMultiplier;
}

void URodentVRSettings::SetBallInputMouseAMultiplier(float BallInputMouseAMultiplierValue)
{
	this->BallInputMouseAMultiplier = BallInputMouseAMultiplierValue;
}

float URodentVRSettings::GetBallInputMouseBMultiplier()
{
	return this->BallInputMouseBMultiplier;
}

void URodentVRSettings::SetBallInputMouseBMultiplier(float BallInputMouseBMultiplierValue)
{
	this->BallInputMouseBMultiplier = BallInputMouseBMultiplierValue;
}

UDevice* URodentVRSettings::GetAirPufferLeftDevice()
{
	return this->AirPufferLeftDevice;
}

void URodentVRSettings::SetAirPufferLeftDevice(UDevice* AirPufferLeftDeviceValue)
{
	this->AirPufferLeftDevice = AirPufferLeftDeviceValue;
}

UDevice* URodentVRSettings::GetAirPufferRightDevice()
{
	return this->AirPufferRightDevice;
}

void URodentVRSettings::SetAirPufferRightDevice(UDevice* AirPufferRightDeviceValue)
{
	this->AirPufferRightDevice = AirPufferRightDeviceValue;
}

float URodentVRSettings::GetAirPufferFrontAngle()
{
	return this->AirPufferFrontAngle;
}

void URodentVRSettings::SetAirPufferFrontAngle(float AirPufferFrontAngleValue)
{
	this->AirPufferFrontAngle = AirPufferFrontAngleValue;
}

TArray<UDevice*> URodentVRSettings::GetRewardDevices()
{
	return this->RewardDevices;
}

void URodentVRSettings::AddRewardDevice(UDevice* RewardDeviceValue)
{
	this->RewardDevices.Add(RewardDeviceValue);
}

void URodentVRSettings::RemoveRewardDevice(UDevice* RewardDeviceValue)
{
	this->RewardDevices.Remove(RewardDeviceValue);
}

void URodentVRSettings::ClearRewardDevices()
{
	this->RewardDevices.Empty();
}

TArray<UMazeSettings*> URodentVRSettings::GetMazePlaylist()
{
	return this->MazePlaylist;
}

void URodentVRSettings::AddMaze(UMazeSettings* MazeValue)
{
	this->MazePlaylist.Add(MazeValue);
}

void URodentVRSettings::RemoveMaze(UMazeSettings* MazeValue)
{
	this->MazePlaylist.Remove(MazeValue);
}

void URodentVRSettings::ClearMazes()
{
	this->MazePlaylist.Empty();
}

UMazeSettings* URodentVRSettings::GetMazeFromPlaylistByFileName(FString MazeSettingsFileName)
{
	for (UMazeSettings* MazeSettings : this->GetMazePlaylist())
	{
		if (MazeSettings->GetMazeSettingsFileName() == MazeSettingsFileName)
		{
			return MazeSettings;
		}
	}
	return nullptr;
}
