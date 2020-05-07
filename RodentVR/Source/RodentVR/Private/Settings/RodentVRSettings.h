// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MazeSettings.h"
#include "RodentVRSettings.generated.h"

/**
 * 
 */
UCLASS()
class URodentVRSettings : public UObject
{
	GENERATED_BODY()
	
private:
	UPROPERTY()
		FText SettingsFileName;
	UPROPERTY()
		FText BallInputMouseADevice;
	UPROPERTY()
		FText BallInputMouseBDevice;
	UPROPERTY()
		float BallInputMouseAMultiplier;
	UPROPERTY()
		float BallInputMouseBMultiplier;
	UPROPERTY()
		UDevice* AirPufferLeftDevice;
	UPROPERTY()
		UDevice* AirPufferRightDevice;
	UPROPERTY()
		float AirPufferFrontAngle;
	UPROPERTY()
		TArray<UDevice*> RewardDevices;
	UPROPERTY()
		TArray<UMazeSettings*> MazePlaylist;

public:

	UFUNCTION()
		FText GetSettingsFileName();
	UFUNCTION()
		void SetSettingsFileName(FText SettingsFileNameValue);
	UFUNCTION()
		FText GetBallInputMouseADevice();
	UFUNCTION()
		void SetBallInputMouseADevice(FText BallInputMouseADeviceValue);
	UFUNCTION()
		FText GetBallInputMouseBDevice();
	UFUNCTION()
		void SetBallInputMouseBDevice(FText BallInputMouseBDeviceValue);
	UFUNCTION()
		float GetBallInputMouseAMultiplier();
	UFUNCTION()
		void SetBallInputMouseAMultiplier(float BallInputMouseAMultiplierValue);
	UFUNCTION()
		float GetBallInputMouseBMultiplier();
	UFUNCTION()
		void SetBallInputMouseBMultiplier(float BallInputMouseBMultiplierValue);
	UFUNCTION()
		UDevice* GetAirPufferLeftDevice();
	UFUNCTION()
		void SetAirPufferLeftDevice(UDevice* AirPufferLeftDeviceValue);
	UFUNCTION()
		UDevice* GetAirPufferRightDevice();
	UFUNCTION()
		void GetAirPufferRightDevice(UDevice* AirPufferRightDeviceValue);
	UFUNCTION()
		float GetAirPufferFrontAngle();
	UFUNCTION()
		void SetAirPufferFrontAngle(float AirPufferFrontAngleValue);
	UFUNCTION()
		TArray<UDevice*> GetRewardDevices();
	UFUNCTION()
		void GetRewardDevices(TArray<UDevice*> RewardDevicesValue);
	UFUNCTION()
		TArray<UMazeSettings*> GetMazePlaylist();
	UFUNCTION()
		void SetMazePlaylist(TArray<UMazeSettings*> MazePlaylistValue);
};
