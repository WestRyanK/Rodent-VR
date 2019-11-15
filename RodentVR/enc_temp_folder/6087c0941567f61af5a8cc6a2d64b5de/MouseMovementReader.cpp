// Fill out your copyright notice in the Description page of Project Settings.

#include "MouseMovementReader.h"
#include "Engine/GameEngine.h"
#include <String.h>
#include <string>
#include "RawInputDevicesReader.h"

#define Debug(Time, Color, x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, Time, Color, x);}

MouseMovementReader::MouseMovementReader(std::wstring MouseAName, std::wstring MouseBName)
{
	this->Delta[AXIS_X] = 0;
	this->Delta[AXIS_Y] = 0;

	this->SetCursorHandles(MouseAName.c_str(), MouseBName.c_str());
}

MouseMovementReader::~MouseMovementReader()
{
	
}

bool MouseMovementReader::ProcessMessage(HWND Hwnd, uint32 Message, WPARAM WParam, LPARAM LParam, int32& OutResult)
{
	if (Message == WM_INPUT)
	{
		RAWINPUT* Raw = this->GetRawInput(LParam);

		if (Raw->header.dwType == RIM_TYPEMOUSE)
		{
			this->LockMouseReader();

			// TODO: I could imagine that some devices have a faster 
			// refresh rate than other devices. Could that make it 
			// appear that some devices are moving faster than others?

			if (Raw->header.hDevice == this->MouseAId)
			{
				this->Delta[AXIS_X] += Raw->data.mouse.lLastY;
			}
			if (Raw->header.hDevice == this->MouseBId)
			{
				this->Delta[AXIS_Y] += Raw->data.mouse.lLastY;
			}

			this->UnlockMouseReader();
		}

		delete Raw;
	}

	return false;
}

float MouseMovementReader::read_delta(unsigned int Axis)
{
	float Out = this->Delta[Axis];
	this->Delta[Axis] = 0;
	return Out;
}

void MouseMovementReader::SetCursorHandles(const wchar_t* MouseAName, const wchar_t* MouseBName)
{
	PRAWINPUTDEVICELIST RawInputDeviceList;
	unsigned int DeviceCount = RawInputDevicesReader::GetDeviceList(&RawInputDeviceList);

	for (size_t i = 0; i < DeviceCount; i++)
	{
		const wchar_t* DeviceName = RawInputDevicesReader::GetDeviceName(RawInputDeviceList[i].hDevice);

		if (_wcsicmp(MouseAName, DeviceName) == 0)
		{
			this->MouseAId = RawInputDeviceList[i].hDevice;
		}
		if (_wcsicmp(MouseBName, DeviceName) == 0)
		{
			this->MouseBId = RawInputDeviceList[i].hDevice;
		}
	}

	free(RawInputDeviceList);
}

void MouseMovementReader::HandleMessage(unsigned int Msg, WPARAM Wparam, LPARAM Lparam)
{
}

