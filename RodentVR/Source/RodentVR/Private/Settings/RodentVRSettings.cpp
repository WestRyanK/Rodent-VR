// Fill out your copyright notice in the Description page of Project Settings.


#include "RodentVRSettings.h"
#include "Settings/RegionSettings.h"

FRodentVRSettingsChangedDelegate URodentVRSettings::OnRodentVRSettingsChangedDelegate;

URodentVRSettings::URodentVRSettings()
{
	this->SetAirPufferLeftDevice(NewObject<UDevice>());
	this->SetAirPufferRightDevice(NewObject<UDevice>());
	this->GraphicsSettings = NewObject<UGraphicsSettings>();
}

FString URodentVRSettings::GetSettingsFileName()
{
	return this->SettingsFileName;
}

void URodentVRSettings::SetSettingsFileName(FString SettingsFileNameValue)
{
	bool ValueChanged = (this->SettingsFileName != SettingsFileNameValue);
	this->SettingsFileName = SettingsFileNameValue;
	if (ValueChanged)
	{
		this->OnRodentVRSettingsChanged();
	}
}

FString URodentVRSettings::GetBallInputMouseADevice()
{
	return this->BallInputMouseADevice;
}

void URodentVRSettings::SetBallInputMouseADevice(FString BallInputMouseADeviceValue)
{
	bool ValueChanged = (this->BallInputMouseADevice != BallInputMouseADeviceValue);
	this->BallInputMouseADevice = BallInputMouseADeviceValue;
	if (ValueChanged)
	{
		this->OnRodentVRSettingsChanged();
	}
}

FString URodentVRSettings::GetBallInputMouseBDevice()
{
	return this->BallInputMouseBDevice;
}

void URodentVRSettings::SetBallInputMouseBDevice(FString BallInputMouseBDeviceValue)
{
	bool ValueChanged = (this->BallInputMouseBDevice != BallInputMouseBDeviceValue);
	this->BallInputMouseBDevice = BallInputMouseBDeviceValue;
	if (ValueChanged)
	{
		this->OnRodentVRSettingsChanged();
	}
}

float URodentVRSettings::GetBallInputMouseAMultiplier()
{
	return this->BallInputMouseAMultiplier;
}

void URodentVRSettings::SetBallInputMouseAMultiplier(float BallInputMouseAMultiplierValue)
{
	bool ValueChanged = (this->BallInputMouseAMultiplier != BallInputMouseAMultiplierValue);
	this->BallInputMouseAMultiplier = BallInputMouseAMultiplierValue;
	if (ValueChanged)
	{
		this->OnRodentVRSettingsChanged();
	}
}

float URodentVRSettings::GetBallInputMouseBMultiplier()
{
	return this->BallInputMouseBMultiplier;
}

void URodentVRSettings::SetBallInputMouseBMultiplier(float BallInputMouseBMultiplierValue)
{
	bool ValueChanged = (this->BallInputMouseBMultiplier != BallInputMouseBMultiplierValue);
	this->BallInputMouseBMultiplier = BallInputMouseBMultiplierValue;
	if (ValueChanged)
	{
		this->OnRodentVRSettingsChanged();
	}
}

bool URodentVRSettings::GetBallInputMouseAIsOnBack()
{
	return this->BallInputMouseAIsOnBack;
}

void URodentVRSettings::SetBallInputMouseAIsOnBack(bool BallInputMouseAIsOnBackValue)
{
	bool ValueChanged = (this->BallInputMouseAIsOnBack != BallInputMouseAIsOnBackValue);
	this->BallInputMouseAIsOnBack = BallInputMouseAIsOnBackValue;
	if (ValueChanged)
	{
		this->OnRodentVRSettingsChanged();
	}
}

bool URodentVRSettings::GetBallInputMouseBIsOnRight()
{
	return this->BallInputMouseBIsOnRight;
}

void URodentVRSettings::SetBallInputMouseBIsOnRight(bool BallInputMouseBIsOnRightValue)
{
	bool ValueChanged = (this->BallInputMouseBIsOnRight != BallInputMouseBIsOnRightValue);
	this->BallInputMouseBIsOnRight = BallInputMouseBIsOnRightValue;
	if (ValueChanged)
	{
		this->OnRodentVRSettingsChanged();
	}
}

UDevice* URodentVRSettings::GetAirPufferLeftDevice()
{
	return this->AirPufferLeftDevice;
}

void URodentVRSettings::SetAirPufferLeftDevice(UDevice* AirPufferLeftDeviceValue)
{
	bool ValueChanged = (this->AirPufferLeftDevice != AirPufferLeftDeviceValue);
	this->AirPufferLeftDevice = AirPufferLeftDeviceValue;
	if (ValueChanged)
	{
		this->OnRodentVRSettingsChanged();
	}
}

UDevice* URodentVRSettings::GetAirPufferRightDevice()
{
	return this->AirPufferRightDevice;
}

void URodentVRSettings::SetAirPufferRightDevice(UDevice* AirPufferRightDeviceValue)
{
	bool ValueChanged = (this->AirPufferRightDevice != AirPufferRightDeviceValue);
	this->AirPufferRightDevice = AirPufferRightDeviceValue;
	if (ValueChanged)
	{
		this->OnRodentVRSettingsChanged();
	}
}

float URodentVRSettings::GetAirPufferFrontAngle()
{
	return this->AirPufferFrontAngle;
}

void URodentVRSettings::SetAirPufferFrontAngle(float AirPufferFrontAngleValue)
{
	bool ValueChanged = (this->AirPufferFrontAngle != AirPufferFrontAngleValue);
	this->AirPufferFrontAngle = AirPufferFrontAngleValue;
	if (ValueChanged)
	{
		this->OnRodentVRSettingsChanged();
	}
}

bool URodentVRSettings::GetShouldWarnIfNidaqServicesDisabled()
{
	return this->ShouldWarnIfNidaqServicesDisabled;
}

void URodentVRSettings::SetShouldWarnIfNidaqServicesDisabled(bool ShouldWarnIfNidaqServicesDisabledValue)
{
	bool ValueChanged = (this->ShouldWarnIfNidaqServicesDisabled != ShouldWarnIfNidaqServicesDisabledValue);
	this->ShouldWarnIfNidaqServicesDisabled = ShouldWarnIfNidaqServicesDisabledValue;
	if (ValueChanged)
	{
		this->OnRodentVRSettingsChanged();
	}
}

bool URodentVRSettings::GetIsNidaqEnabled()
{
	return this->IsNidaqEnabled;
}

void URodentVRSettings::SetIsNidaqEnabled(bool IsNidaqEnabledValue)
{
	bool ValueChanged = (this->IsNidaqEnabled != IsNidaqEnabledValue);
	this->IsNidaqEnabled = IsNidaqEnabledValue;
	if (ValueChanged)
	{
		this->OnRodentVRSettingsChanged();
	}
}

TArray<UDevice*> URodentVRSettings::GetRewardDevices()
{
	return this->RewardDevices;
}

void URodentVRSettings::AddRewardDevice(UDevice* RewardDeviceValue)
{
	this->RewardDevices.Add(RewardDeviceValue);
	this->OnRodentVRSettingsChanged();
}

void URodentVRSettings::RemoveRewardDevice(UDevice* RewardDeviceValue)
{
	this->RewardDevices.Remove(RewardDeviceValue);
	for (UMazeSettings* Maze : this->GetMazePlaylist())
	{
		for (URegionSettings* Region : Maze->GetRegionSettings())
		{
			if (Region->GetRewardDevice() == RewardDeviceValue)
			{
				Region->SetRewardDevice(nullptr);
			}
		}
	}
	this->OnRodentVRSettingsChanged();
}

void URodentVRSettings::ClearRewardDevices()
{
	this->RewardDevices.Empty();
	this->OnRodentVRSettingsChanged();
}

TArray<UMazeSettings*> URodentVRSettings::GetMazePlaylist()
{
	return this->MazePlaylist;
}

void URodentVRSettings::AddMaze(UMazeSettings* MazeValue)
{
	this->MazePlaylist.Add(MazeValue);
	this->OnRodentVRSettingsChanged();
}

void URodentVRSettings::RemoveMaze(UMazeSettings* MazeValue)
{
	this->MazePlaylist.Remove(MazeValue);
	this->OnRodentVRSettingsChanged();
}

void URodentVRSettings::RemoveMazeAtIndex(int MazeIndexValue)
{
	this->MazePlaylist.RemoveAt(MazeIndexValue);
	this->OnRodentVRSettingsChanged();
}

void URodentVRSettings::ClearMazes()
{
	this->MazePlaylist.Empty();
	this->OnRodentVRSettingsChanged();
}

UGraphicsSettings* URodentVRSettings::GetGraphicsSettings()
{
	return this->GraphicsSettings;
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

UDevice* URodentVRSettings::GetRewardDeviceById(FString DeviceIdValue)
{
	for (UDevice* RewardDevice : this->GetRewardDevices())
	{
		if (RewardDevice->GetDeviceId() == DeviceIdValue)
		{
			return RewardDevice;
		}
	}
	return nullptr;
}

void URodentVRSettings::OnRodentVRSettingsChanged()
{
	URodentVRSettings::OnRodentVRSettingsChangedDelegate.Broadcast();
}
