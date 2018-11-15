// Fill out your copyright notice in the Description page of Project Settings.

#include "BallInput.h"
#include "MouseMovementReader.h"
#include <iostream>
#include <mutex>
#include <thread>
#include <stdexcept>
#include "Engine/GameEngine.h"
#define Debug(time, color, x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, time, color, x);}

MouseMovementReader* movement_reader = NULL;
const std::wstring CONFIG_MOUSE_A_KEY = L"mouse_a_name";
const std::wstring CONFIG_MOUSE_B_KEY = L"mouse_b_name";

void BallInput::get_movement_delta(float* out_x, float* out_y)
{
	if (movement_reader == NULL)
	{
		Debug(10.0f, FColor::Red,TEXT("BallInput must be initialized before calling get_movement_delta()!"));
	}
	else if (out_x != NULL && out_y != NULL)
	{
		movement_reader->lock_mouse_reader();

		// Copy the current movement velocities to output
		*out_x = movement_reader->read_delta(MouseMovementReader::AXIS_X);
		*out_y = movement_reader->read_delta(MouseMovementReader::AXIS_Y);

		movement_reader->unlock_mouse_reader();
	}
}

void BallInput::initialize(std::wstring mouse_a_name, std::wstring mouse_b_name)
{
	if (movement_reader == NULL)
	{
		movement_reader = new MouseMovementReader(mouse_a_name, mouse_b_name);
	}
}

void BallInput::start()
{
	movement_reader->start_reader();
}

void BallInput::stop()
{
	movement_reader->stop_reader();
}

BallInput::BallInput()
{
}

BallInput::~BallInput()
{
}
