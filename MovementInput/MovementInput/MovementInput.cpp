// MovementInput.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "MovementInput.h"
#include "MouseReader.h"
#include <mutex>
#include <thread>

MouseReader* mouse_reader = NULL;

void get_movement_delta(float* out_x, float* out_y)
{
	if (out_x != NULL && out_y != NULL)
	{
		mouse_reader->lock_mouse_reader();

		// Copy the current movement velocities to output
		*out_x = mouse_reader->read_delta(MouseReader::AXIS_X);
		*out_y = mouse_reader->read_delta(MouseReader::AXIS_Y);

		mouse_reader->unlock_mouse_reader();
	}
}

// TODO: Add ability to configure input.
void configure()
{

}

void initialize()
{
	mouse_reader = new MouseReader();
}

void start()
{
	mouse_reader->start_reader();
}

void stop()
{
	mouse_reader->stop_reader();
}

