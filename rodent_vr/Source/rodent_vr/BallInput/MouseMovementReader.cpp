// Fill out your copyright notice in the Description page of Project Settings.

#include "MouseMovementReader.h"
#include "Engine/GameEngine.h"
#include <String.h>
#include <string>
#include "RawInputDevicesReader.h"

#define Debug(time, color, x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, time, color, x);}

MouseMovementReader::MouseMovementReader(std::wstring mouse_a_name, std::wstring mouse_b_name)
{
	this->delta[AXIS_X] = 0;
	this->delta[AXIS_Y] = 0;

	this->set_cursor_handles(mouse_a_name.c_str(), mouse_b_name.c_str());
}

MouseMovementReader::~MouseMovementReader()
{
	
}

float MouseMovementReader::read_delta(unsigned int axis)
{
	float out = this->delta[axis];
	this->delta[axis] = 0;
	return out;
}

void MouseMovementReader::set_cursor_handles(const wchar_t* mouse_a_name, const wchar_t* mouse_b_name)
{
	PRAWINPUTDEVICELIST rawInputDeviceList;
	unsigned int deviceCount = RawInputDevicesReader::get_device_list(&rawInputDeviceList);

	for (size_t i = 0; i < deviceCount; i++)
	{
		const wchar_t* device_name = RawInputDevicesReader::get_device_name(rawInputDeviceList[i].hDevice);

		if (_wcsicmp(mouse_a_name, device_name) == 0)
		{
			this->mouse_a_id = rawInputDeviceList[i].hDevice;
		}
		if (_wcsicmp(mouse_b_name, device_name) == 0)
		{
			this->mouse_b_id = rawInputDeviceList[i].hDevice;
		}
	}

	free(rawInputDeviceList);
}

void MouseMovementReader::handle_message(unsigned int msg, WPARAM wparam, LPARAM lparam)
{
	if (msg == WM_INPUT)
	{
		RAWINPUT* raw = this->get_raw_input(lparam);

		if (raw->header.dwType == RIM_TYPEMOUSE)
		{
			this->lock_mouse_reader();

			// TODO: I could imagine that some devices have a faster 
			// refresh rate than other devices. Could that make it 
			// appear that some devices are moving faster than others?

			if (raw->header.hDevice == this->mouse_a_id)
			{
				this->delta[AXIS_X] += raw->data.mouse.lLastY;
			}
			else if (raw->header.hDevice == this->mouse_b_id)
			{
				this->delta[AXIS_Y] += raw->data.mouse.lLastY;
			}

			this->unlock_mouse_reader();
		}

		delete raw;
	}
}

