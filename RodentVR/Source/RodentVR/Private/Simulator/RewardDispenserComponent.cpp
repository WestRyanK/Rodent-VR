// Fill out your copyright notice in the Description page of Project Settings.


#include "RewardDispenserComponent.h"
#include "Core/RodentVRGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Hardware/NIDAQ/NIDAQ.h"

// Sets default values for this component's properties
URewardDispenserComponent::URewardDispenserComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URewardDispenserComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void URewardDispenserComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void URewardDispenserComponent::DispenseReward(UDevice* Device, float RewardDeviceDispensingDurationSec)
{
	URodentVRGameInstance* GameInstance = (URodentVRGameInstance*)UGameplayStatics::GetGameInstance(this);
	if (GameInstance->GetRodentVRSettings()->GetIsNidaqEnabled())
	{
		if (IsValid(Device))
		{
			UNIDAQ::control_NIDAQ(true, Device->GetDevicePath());

			if (RewardDeviceDispensingDurationSec <= 0.0f || RewardDeviceDispensingDurationSec > 25.0f)
			{
				RewardDeviceDispensingDurationSec = 25.0f;
			}

			GetWorld()->GetTimerManager().SetTimer(this->DispensingTimerHandle, this, &URewardDispenserComponent::StopDispensingRewards, 1.0f, false, RewardDeviceDispensingDurationSec);

		}
	}
}

void URewardDispenserComponent::StopDispensingRewards()
{
	URodentVRGameInstance* GameInstance = (URodentVRGameInstance*)UGameplayStatics::GetGameInstance(this);
	if (GameInstance->GetRodentVRSettings()->GetIsNidaqEnabled())
	{
		for (UDevice* Device : GameInstance->GetRodentVRSettings()->GetRewardDevices())
		{
			UNIDAQ::control_NIDAQ(false, Device->GetDevicePath());
		}
	}
}
