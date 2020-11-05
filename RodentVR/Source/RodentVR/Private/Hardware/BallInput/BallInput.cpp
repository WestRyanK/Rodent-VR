// Fill out your copyright notice in the Description page of Project Settings.

#include "BallInput.h"
#include "MouseMovementReader.h"
#include <iostream>
#include <mutex>
#include <thread>
#include <stdexcept>
#define Debug(Time, Color, x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, Time, Color, x);}

MouseMovementReader* MovementReader = NULL;
const std::wstring CONFIG_MOUSE_A_KEY = L"mouse_a_name";
const std::wstring CONFIG_MOUSE_B_KEY = L"mouse_b_name";

void UBallInput::GetMovementDelta(float* OutX, float* OutY)
{
	if (MovementReader == NULL)
	{
		Debug(10.0f, FColor::Red, TEXT("BallInput must be initialized before calling get_movement_delta()!"));
	}
	else if (OutX != NULL && OutY != NULL)
	{
		MovementReader->LockMouseReader();

		// Copy the current movement velocities to output
		*OutX = MovementReader->read_delta(MouseMovementReader::AXIS_X);
		*OutY = MovementReader->read_delta(MouseMovementReader::AXIS_Y);

		MovementReader->UnlockMouseReader();
	}
}

FString UBallInput::GetCurrentDeviceName()
{
	const wchar_t* CurrentDeviceName = MovementReader->GetCurrentMouseName();
	FString CurrentDevice = FString(CurrentDeviceName);

	return CurrentDevice;
}

void UBallInput::Initialize(std::wstring MouseAName, std::wstring MouseBName)
{
	if (MovementReader != nullptr)
	{
		delete MovementReader;
		MovementReader = nullptr;
	}

	MovementReader = new MouseMovementReader(MouseAName, MouseBName);
}

void UBallInput::Initialize()
{
	if (MovementReader != nullptr)
	{
		delete MovementReader;
		MovementReader = nullptr;
	}

	MovementReader = new MouseMovementReader();
}

void UBallInput::Start()
{
	if (MovementReader != nullptr) {
		MovementReader->StartReader();
	}
	else {
		Debug(10.0f, FColor::Red, TEXT("MovementReader null when Starting reader!"));
		UE_LOG(LogTemp, Error, TEXT("MovementReader null when Starting reader!"));
	}
}

void UBallInput::Stop()
{
	if (MovementReader != nullptr) {
		MovementReader->StopReader();
	}
	else {
		Debug(10.0f, FColor::Red, TEXT("MovementReader null when Stopping reader!"));
		UE_LOG(LogTemp, Error, TEXT("MovementReader null when Stopping reader!"));
	}
}
