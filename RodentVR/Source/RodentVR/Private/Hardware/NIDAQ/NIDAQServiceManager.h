// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//#define WIN32_LEAN_AND_MEAN
//#include "MinWindows.h"
#include <Windows.h>
#include <string>
#include "NIDAQServiceManager.generated.h"


UENUM(BlueprintType)
enum class ServiceStatus : uint8
{
	STATUS_PERMISSIONS_ERROR = 11,
	STATUS_FAILED = 12,
	STATUS_NONEXISTENT = 13,
	STATUS_NOT_RUNNING = 0,
	STATUS_RUNNING = 1,
	STATUS_ALREADY_RUNNING = 2
};

/**
 *
 */
UCLASS(Blueprintable)
class UNIDAQServiceManager : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "NIDAQ")
		static bool GetAreAllNidaqServicesRunning();

	UFUNCTION(BlueprintCallable, Category = "NIDAQ")
		static bool StartAllNidaqServices();

	UFUNCTION(BlueprintCallable, Category = "NIDAQ")
		static bool GetIsProcessElevated();

private:
	static TArray<FString> NidaqServices;

	static LPCWSTR ConvertString(FString stringValue);

	static ServiceStatus StartWindowsService(FString serviceName);

	static ServiceStatus GetServiceStatus(FString serviceName);

};
