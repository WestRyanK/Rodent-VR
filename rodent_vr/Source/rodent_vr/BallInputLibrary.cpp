// Fill out your copyright notice in the Description page of Project Settings.

#include "BallInputLibrary.h"
#include "BallInput/BallInput.h"

FVector2D UBallInputLibrary::get_movement_delta()
{
	float x = 0;
	float y = 0;
	BallInput::get_movement_delta(&x, &y);
	return FVector2D(x, y);
}

void InitializeBallInput(std::wstring mouse_a_name, std::wstring mouse_b_name)
{
	BallInput::initialize(mouse_a_name, mouse_b_name);
	BallInput::start();
}
