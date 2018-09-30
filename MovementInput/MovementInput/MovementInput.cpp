// MovementInput.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "MovementInput.h"
#include "MouseMovementReader.h"
#include <iostream>
#include <mutex>
#include <thread>

MouseMovementReader* movement_reader = NULL;

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

// TODO: Add ability to configure input.
void configure()
{
}

void initialize()
{
	movement_reader = new MouseMovementReader();
	movement_reader->set_cursor_handles(
		L"HID\\VID_046D&PID_C016\\6&d2a8b0a&0&0000",
		L"HID\\VID_0461&PID_4D15\\6&31d2d65f&0&0000");
}

void start()
{
	movement_reader->start_reader();
}

void stop()
{
	movement_reader->stop_reader();
}

