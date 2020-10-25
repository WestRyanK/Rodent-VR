// Fill out your copyright notice in the Description page of Project Settings.


#include "BallInputComponent.h"
#include "Engine.h"
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
		URodentVRSettings* RodentVRSettings = GameInstance->GetRodentVRSettings();

		if (IsValid(RodentVRSettings))
		{
			int MouseAFlipped = 1;
			int MouseBFlipped = -1;
			if (RodentVRSettings->GetBallInputMouseAIsOnBack()) {
				MouseAFlipped = -1;
			}
			if (RodentVRSettings->GetBallInputMouseBIsOnRight()) {
				MouseBFlipped = 1;
			}

			this->MouseAMultiplier = RodentVRSettings->GetBallInputMouseAMultiplier() * MouseAFlipped;
			this->MouseBMultiplier = RodentVRSettings->GetBallInputMouseBMultiplier() * MouseBFlipped;

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


void UBallInputComponent::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	UBallInput::Stop();
}


void UBallInputComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	float x = 0;
	float y = 0;
	UBallInput::GetMovementDelta(&x, &y);
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, *(FString::SanitizeFloat(x) + " " + FString::SanitizeFloat(y)));

	APawn* OwnerPawn = (APawn*)this->GetOwner();
	OwnerPawn->AddMovementInput(OwnerPawn->GetActorForwardVector(), x * this->MouseAMultiplier * 0.001f);
	OwnerPawn->AddControllerYawInput(y * this->MouseBMultiplier * 0.001f);
}

