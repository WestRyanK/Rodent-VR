// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Device.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class UDevice : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintGetter = GetDeviceId, BlueprintSetter = SetDeviceId)
		FString DeviceId;
	UPROPERTY(BlueprintGetter = GetDeviceName, BlueprintSetter = SetDeviceName)
		FString DeviceName;
	UPROPERTY(BlueprintGetter = GetDevicePort, BlueprintSetter = SetDevicePort)
		FString DevicePort;
	UPROPERTY(BlueprintGetter = GetDeviceLine, BlueprintSetter = SetDeviceLine)
		FString DeviceLine;
	UPROPERTY(BlueprintGetter = GetDevicePath, Transient)
		FString DevicePath;

public:
	UFUNCTION(BlueprintGetter)
		FString GetDeviceId();
	UFUNCTION(BlueprintSetter)
		void SetDeviceId(FString DeviceIdValue);
	UFUNCTION(BlueprintGetter)
		FString GetDeviceName();
	UFUNCTION(BlueprintSetter)
		void SetDeviceName(FString DeviceNameValue);
	UFUNCTION(BlueprintGetter)
		FString GetDevicePort();
	UFUNCTION(BlueprintSetter)
		void SetDevicePort(FString DevicePortValue);
	UFUNCTION(BlueprintGetter)
		FString GetDeviceLine();
	UFUNCTION(BlueprintSetter)
		void SetDeviceLine(FString DeviceLineValue);
	UFUNCTION(BlueprintGetter)
		FString GetDevicePath();
};
