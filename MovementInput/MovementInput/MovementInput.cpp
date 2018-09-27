// MovementInput.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "MovementInput.h"
#include "MouseReader.h"
#include <mutex>
#include <thread>

MouseReader* mouseReader = NULL;

void get_movement_delta(float* out_x, float* out_y)
{
	if (out_x != NULL && out_y != NULL)
	{
		mouseReader->lock_mouse_reader();

		// Copy the current movement velocities to output
		*out_x = mouseReader->read_delta(MouseReader::AXIS_X);
		*out_y = mouseReader->read_delta(MouseReader::AXIS_Y);

		mouseReader->unlock_mouse_reader();
	}
}

void configure();

void initialize()
{

}

void stop();

