// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MazeSettings.h"
#include "Device.h"
#include "RodentVRSettings.generated.h"



/**
 * 
 */
UCLASS(Blueprintable)
class URodentVRSettings : public UObject
{
	GENERATED_BODY()
	
private:
	UPROPERTY(BlueprintGetter=GetSettingsFileName, BlueprintSetter=SetSettingsFileName)
		FString SettingsFileName;
	UPROPERTY(BlueprintGetter=GetBallInputMouseADevice, BlueprintSetter=SetBallInputMouseADevice)
		FString BallInputMouseADevice;
	UPROPERTY(BlueprintGetter=GetBallInputMouseBDevice, BlueprintSetter=SetBallInputMouseBDevice)
		FString BallInputMouseBDevice;
	UPROPERTY(BlueprintGetter=GetBallInputMouseAMultiplier, BlueprintSetter=SetBallInputMouseAMultiplier)
		float BallInputMouseAMultiplier;
	UPROPERTY(BlueprintGetter=GetBallInputMouseBMultiplier, BlueprintSetter=SetBallInputMouseBMultiplier)
		float BallInputMouseBMultiplier;
	UPROPERTY(BlueprintGetter=GetAirPufferLeftDevice, BlueprintSetter=SetAirPufferLeftDevice)
		UDevice* AirPufferLeftDevice;
	UPROPERTY(BlueprintGetter=GetAirPufferRightDevice, BlueprintSetter=SetAirPufferRightDevice)
		UDevice* AirPufferRightDevice;
	UPROPERTY(BlueprintGetter=GetAirPufferFrontAngle, BlueprintSetter=SetAirPufferFrontAngle)
		float AirPufferFrontAngle;
	UPROPERTY(BlueprintGetter=GetRewardDevices)
		TArray<UDevice*> RewardDevices;
	UPROPERTY(BlueprintGetter=GetMazePlaylist)
		TArray<UMazeSettings*> MazePlaylist;

public:
	URodentVRSettings();

	//UPROPERTY(BlueprintReadWrite)
	//	TArray<UDevice*> RewardDevices;

	UFUNCTION(BlueprintGetter)
		FString GetSettingsFileName();
	UFUNCTION(BlueprintSetter)
		void SetSettingsFileName(FString SettingsFileNameValue);
	UFUNCTION(BlueprintGetter)
		FString GetBallInputMouseADevice();
	UFUNCTION(BlueprintSetter)
		void SetBallInputMouseADevice(FString BallInputMouseADeviceValue);
	UFUNCTION(BlueprintGetter)
		FString GetBallInputMouseBDevice();
	UFUNCTION(BlueprintSetter)
		void SetBallInputMouseBDevice(FString BallInputMouseBDeviceValue);
	UFUNCTION(BlueprintGetter)
		float GetBallInputMouseAMultiplier();
	UFUNCTION(BlueprintSetter)
		void SetBallInputMouseAMultiplier(float BallInputMouseAMultiplierValue);
	UFUNCTION(BlueprintGetter)
		float GetBallInputMouseBMultiplier();
	UFUNCTION(BlueprintSetter)
		void SetBallInputMouseBMultiplier(float BallInputMouseBMultiplierValue);
	UFUNCTION(BlueprintGetter)
		UDevice* GetAirPufferLeftDevice();
	UFUNCTION(BlueprintSetter)
		void SetAirPufferLeftDevice(UDevice* AirPufferLeftDeviceValue);
	UFUNCTION(BlueprintGetter)
		UDevice* GetAirPufferRightDevice();
	UFUNCTION(BlueprintSetter)
		void SetAirPufferRightDevice(UDevice* AirPufferRightDeviceValue);
	UFUNCTION(BlueprintGetter)
		float GetAirPufferFrontAngle();
	UFUNCTION(BlueprintSetter)
		void SetAirPufferFrontAngle(float AirPufferFrontAngleValue);
	UFUNCTION(BlueprintGetter)
		TArray<UDevice*> GetRewardDevices();
	UFUNCTION(BlueprintCallable)
		void AddRewardDevice(UDevice* RewardDeviceValue);
	UFUNCTION(BlueprintCallable)
		void RemoveRewardDevice(UDevice* RewardDeviceValue);
	UFUNCTION(BlueprintCallable)
		void ClearRewardDevices();
	UFUNCTION(BlueprintGetter)
		TArray<UMazeSettings*> GetMazePlaylist();
	UFUNCTION(BlueprintCallable)
		void AddMaze(UMazeSettings* MazeValue);
	UFUNCTION(BlueprintCallable)
		void RemoveMaze(UMazeSettings* MazeValue);
	UFUNCTION(BlueprintCallable)
		void ClearMazes();
};