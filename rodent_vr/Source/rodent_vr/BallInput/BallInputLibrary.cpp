// Fill out your copyright notice in the Description page of Project Settings.

#include "BallInputLibrary.h"
#include "BallInput/BallInput.h"
#include <string>

FVector2D UBallInputLibrary::get_movement_delta()
{
	float x = 0;
	float y = 0;
	BallInput::get_movement_delta(&x, &y);
	return FVector2D(x, y);
}


void UBallInputLibrary::initialize_ball_input(FString mouse_a_name, FString mouse_b_name)
{
	std::string mouse_a_name_str = std::string(TCHAR_TO_UTF8(*mouse_a_name));
	std::string mouse_b_name_str = std::string(TCHAR_TO_UTF8(*mouse_b_name));

	std::wstring mouse_a_name_wstr;
	std::wstring mouse_b_name_wstr;
	mouse_a_name_wstr.assign(mouse_a_name_str.begin(), mouse_a_name_str.end());
	mouse_b_name_wstr.assign(mouse_b_name_str.begin(), mouse_b_name_str.end());

	BallInput::initialize(mouse_a_name_wstr, mouse_b_name_wstr);
}

void UBallInputLibrary::start_ball_input()
{
	BallInput::start();
}

void UBallInputLibrary::stop_ball_input()
{
	BallInput::stop();
}
