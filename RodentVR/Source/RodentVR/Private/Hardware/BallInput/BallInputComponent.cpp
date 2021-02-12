// Fill out your copyright notice in the Description page of Project Settings.


#include "BallInputComponent.h"
#include "BallInput.h"
#include "Settings/RodentVRSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Core/RodentVRGameInstance.h"

UBallInputComponent::UBallInputComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UBallInputComponent::BeginPlay()
{
	Super::BeginPlay();

	URodentVRGameInstance* GameInstance = (URodentVRGameInstance*)UGameplayStatics::GetGameInstance(this);
	if (IsValid(GameInstance))
	{
		UE_LOG(LogTemp, Log, TEXT("GameInstance is valid"));
		URodentVRSettings* RodentVRSettings = GameInstance->GetRodentVRSettings();
		this->SetBallInputSettings(RodentVRSettings);
	}
	else {
		UE_LOG(LogTemp, Log, TEXT("GameInstance not valid"));
	}
}

void UBallInputComponent::SetBallInputSettings(URodentVRSettings* Settings)
{
	if (IsValid(Settings))
	{
		int MouseAFlipped = 1;
		int MouseBFlipped = -1;
		if (Settings->GetBallInputMouseAIsOnBack()) {
			MouseAFlipped = -1;
		}
		if (Settings->GetBallInputMouseBIsOnRight()) {
			MouseBFlipped = 1;
		}

		this->MouseAMultiplier = Settings->GetBallInputMouseAMultiplier() * MouseAFlipped;
		this->MouseBMultiplier = Settings->GetBallInputMouseBMultiplier() * MouseBFlipped;

		std::string MouseANameStr = std::string(TCHAR_TO_UTF8(*(Settings->GetBallInputMouseADevice())));
		std::string MouseBNameStr = std::string(TCHAR_TO_UTF8(*(Settings->GetBallInputMouseBDevice())));

		std::wstring MouseANameWstr;
		std::wstring MouseBNameWstr;
		MouseANameWstr.assign(MouseANameStr.begin(), MouseANameStr.end());
		MouseBNameWstr.assign(MouseBNameStr.begin(), MouseBNameStr.end());

		UE_LOG(LogTemp, Log, TEXT("MouseADevice: "), *Settings->GetBallInputMouseADevice());
		UE_LOG(LogTemp, Log, TEXT("MouseBDevice: "), *Settings->GetBallInputMouseBDevice());

		UBallInput::Initialize(MouseANameWstr, MouseBNameWstr);
		UBallInput::Start();
	}
}


void UBallInputComponent::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	UBallInput::Stop();
}


void UBallInputComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	URodentVRGameInstance* GameInstance = (URodentVRGameInstance*)UGameplayStatics::GetGameInstance(this);
	if (IsValid(GameInstance))
	{
		URodentVRSettings* RodentVRSettings = GameInstance->GetRodentVRSettings();
		if (IsValid(RodentVRSettings))
		{

			float xMouseMovement = 0;
			float yMouseMovement = 0;
			UBallInput::GetMovementDelta(&xMouseMovement, &yMouseMovement);

			float x = xMouseMovement * this->MouseAMultiplier * 0.001f;
			float y = yMouseMovement * this->MouseBMultiplier * 0.001f;

			APawn* OwnerPawn = (APawn*)this->GetOwner();
			OwnerPawn->AddMovementInput(OwnerPawn->GetActorForwardVector(), x);
			OwnerPawn->AddControllerYawInput(y);
		}
	}
}

