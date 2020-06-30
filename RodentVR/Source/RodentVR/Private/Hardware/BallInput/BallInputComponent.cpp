// Fill out your copyright notice in the Description page of Project Settings.


#include "BallInputComponent.h"
#include "Engine.h"
#include "BallInput.h"
#include "Settings/RodentVRSettings.h"
#include "Simulator/SimulatorGameMode.h"

// Sets default values for this component's properties
UBallInputComponent::UBallInputComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UBallInputComponent::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	if (IsValid(World))
	{
		ASimulatorGameMode* GameMode = (ASimulatorGameMode*)World->GetAuthGameMode();
		if (IsValid(GameMode))
		{
			URodentVRSettings* RodentVRSettings = GameMode->GetRodentVRSettings();

			this->MouseAMultiplier = RodentVRSettings->GetBallInputMouseAMultiplier();
			this->MouseBMultiplier = RodentVRSettings->GetBallInputMouseBMultiplier();

			std::string MouseANameStr = std::string(TCHAR_TO_UTF8(*(RodentVRSettings->GetBallInputMouseADevice())));
			std::string MouseBNameStr = std::string(TCHAR_TO_UTF8(*(RodentVRSettings->GetBallInputMouseBDevice())));

			std::wstring MouseANameWstr;
			std::wstring MouseBNameWstr;
			MouseANameWstr.assign(MouseANameStr.begin(), MouseANameStr.end());
			MouseBNameWstr.assign(MouseBNameStr.begin(), MouseBNameStr.end());

			UBallInput::Initialize(MouseANameWstr, MouseBNameWstr);
		}
	}

	UBallInput::Start();
}


// Called when the game ends
void UBallInputComponent::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	UBallInput::Stop();
}


// Called every frame
void UBallInputComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	float x = 0;
	float y = 0;
	UBallInput::GetMovementDelta(&x, &y);

	APawn* OwnerPawn = (APawn*) this->GetOwner();
	OwnerPawn->AddMovementInput(OwnerPawn->GetActorForwardVector(), x * this->MouseAMultiplier);
	OwnerPawn->AddControllerYawInput(y * this->MouseBMultiplier);
}

