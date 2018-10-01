// MovementInput.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "MovementInput.h"
#include "MouseMovementReader.h"
#include "RawInputDevicesReader.h"
#include <iostream>
#include <mutex>
#include <thread>

MouseMovementReader* movement_reader = NULL;
const std::wstring CONFIG_MOUSE_A_KEY = L"mouse_a_name";
const std::wstring CONFIG_MOUSE_B_KEY = L"mouse_b_name";

void get_movement_delta(float* out_x, float* out_y)
{
	if (out_x != NULL && out_y != NULL)
	{
		movement_reader->lock_mouse_reader();

		// Copy the current movement velocities to output
		*out_x = movement_reader->read_delta(MouseMovementReader::AXIS_X);
		*out_y = movement_reader->read_delta(MouseMovementReader::AXIS_Y);

		movement_reader->unlock_mouse_reader();
	}
}

void initialize(std::map<std::wstring, std::wstring> config_params)
{
	std::wstring mouse_a_name = config_params[CONFIG_MOUSE_A_KEY];
	std::wstring mouse_b_name = config_params[CONFIG_MOUSE_B_KEY];
	movement_reader = new MouseMovementReader(mouse_a_name, mouse_b_name);
}

void start()
{
	movement_reader->start_reader();
}

void stop()
{
	movement_reader->stop_reader();
}

void print_devices(UINT device_types)
{
	RawInputDevicesReader::print_devices(device_types);
}