// Fill out your copyright notice in the Description page of Project Settings.


#include "RodentVRSettings.h"

URodentVRSettings::URodentVRSettings()
{
	this->SetAirPufferLeftDevice(NewObject<UDevice>());
	this->SetAirPufferRightDevice(NewObject<UDevice>());
}

FText URodentVRSettings::GetSettingsFileName()
{
	return this->SettingsFileName;
}

void URodentVRSettings::SetSettingsFileName(FText SettingsFileNameValue)
{
	this->SettingsFileName = SettingsFileNameValue;
}

FText URodentVRSettings::GetBallInputMouseADevice()
{
	return this->BallInputMouseADevice;
}

void URodentVRSettings::SetBallInputMouseADevice(FText BallInputMouseADeviceValue)
{
	this->BallInputMouseADevice = BallInputMouseADeviceValue;
}

FText URodentVRSettings::GetBallInputMouseBDevice()
{
	return this->BallInputMouseBDevice;
}

void URodentVRSettings::SetBallInputMouseBDevice(FText BallInputMouseBDeviceValue)
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

TArray<UDevice*>& URodentVRSettings::GetRewardDevices()
{
	return this->RewardDevices;
}

void URodentVRSettings::SetRewardDevices(TArray<UDevice*> RewardDevicesValue)
{
	this->RewardDevices = RewardDevicesValue;
}

TArray<UMazeSettings*> URodentVRSettings::GetMazePlaylist()
{
	return this->MazePlaylist;
}

void URodentVRSettings::SetMazePlaylist(TArray<UMazeSettings*> MazePlaylistValue)
{
	this->MazePlaylist = MazePlaylistValue;
}

