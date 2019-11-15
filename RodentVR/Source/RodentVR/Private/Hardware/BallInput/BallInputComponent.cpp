// Fill out your copyright notice in the Description page of Project Settings.


#include "BallInputComponent.h"
#include "Engine.h"
#include "BallInput.h"
#include "RodentGameMode.h"

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
	if (World != nullptr) 
	{
		AGameModeBase* GameMode = World->GetAuthGameMode();
		if (GameMode != nullptr)
		{
			ARodentGameMode* RodentGameMode = (ARodentGameMode*)GameMode;

			this->MouseAMultiplier = RodentGameMode->MouseAMultiplier;
			this->MouseBMultiplier = RodentGameMode->MouseBMultiplier;

			std::string MouseANameStr = std::string(TCHAR_TO_UTF8(*(RodentGameMode->MouseADeviceName)));
			std::string MouseBNameStr = std::string(TCHAR_TO_UTF8(*(RodentGameMode->MouseBDeviceName)));

			std::wstring MouseANameWstr;
			std::wstring MouseBNameWstr;
			MouseANameWstr.assign(MouseANameStr.begin(), MouseANameStr.end());
			MouseBNameWstr.assign(MouseBNameStr.begin(), MouseBNameStr.end());

			BallInput::Initialize(MouseANameWstr, MouseBNameWstr);
		}
	}

	BallInput::Start();
}


// Called when the game ends
void UBallInputComponent::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	BallInput::Stop();
}


// Called every frame
void UBallInputComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	float x = 0;
	float y = 0;
	BallInput::GetMovementDelta(&x, &y);

	APawn* OwnerPawn = (APawn*) this->GetOwner();
	OwnerPawn->AddMovementInput(OwnerPawn->GetActorForwardVector(), x * this->MouseAMultiplier);
	OwnerPawn->AddControllerYawInput(y * this->MouseBMultiplier);
}

