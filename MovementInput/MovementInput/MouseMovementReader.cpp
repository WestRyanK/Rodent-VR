#include "stdafx.h"
#include <String.h>
#include <string>
#include <algorithm>
#include "MouseMovementReader.h"

MouseMovementReader::MouseMovementReader()
{
	this->delta[AXIS_X] = 0;
	this->delta[AXIS_Y] = 0;
}

float MouseMovementReader::read_delta(unsigned int axis)
{
	float out = this->delta[axis];
	this->delta[axis] = 0;
	return out;
}

wchar_t* MouseMovementReader::get_device_name(HANDLE device_handle)
{
	UINT size = 256;
	wchar_t device_name_buffer[256] = { 0 };
	GetRawInputDeviceInfo( device_handle, RIDI_DEVICENAME, device_name_buffer, &size);
	std::wstring source(device_name_buffer);
	// Crop out leading slashes and the trailing {guid}.
	UINT len = wcschr(device_name_buffer, '{') - device_name_buffer - 5;
	std::wstring device_name_string = source.substr(4, len);

	// Replace all #s with \s.
	std::replace(device_name_string.begin(), device_name_string.end(), '#', '\\');
	
	wchar_t device_name[256] = { 0 };
	wcscpy(device_name, device_name_string.c_str());
	return device_name;
}

void MouseMovementReader::set_cursor_handles(const wchar_t* mouse_a_name, const wchar_t* mouse_b_name)
{
	UINT deviceCount;
	PRAWINPUTDEVICELIST rawInputDeviceList;
	GetRawInputDeviceList(NULL, &deviceCount, sizeof(RAWINPUTDEVICELIST));
	UINT size = sizeof(RAWINPUTDEVICELIST) * deviceCount;
	rawInputDeviceList = (PRAWINPUTDEVICELIST)malloc(size);
	GetRawInputDeviceList(rawInputDeviceList, &deviceCount, sizeof(RAWINPUTDEVICELIST));


	for (size_t i = 0; i < deviceCount; i++)
	{
		const wchar_t* device_name = this->get_device_name(rawInputDeviceList[i].hDevice);

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

void MouseMovementReader::handle_input(LPARAM lparam)
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

