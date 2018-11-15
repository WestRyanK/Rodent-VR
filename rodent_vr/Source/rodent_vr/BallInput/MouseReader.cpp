// Fill out your copyright notice in the Description page of Project Settings.

#include "MouseReader.h"
#include "Framework/Application/SlateApplication.h"

MouseReader::MouseReader()
{
}

MouseReader::~MouseReader()
{
}
void MouseReader::lock_mouse_reader()
{
	this->reader_mutex.lock();
}


void MouseReader::unlock_mouse_reader()
{
	this->reader_mutex.unlock();
}

void MouseReader::start_reader()
{
	if (!this->is_reading)
	{
		FWindowsApplication* application = this->get_application();
		if (application != NULL)
		{
			application->AddMessageHandler(*((IWindowsMessageHandler*)this));
		}
		this->is_reading = true;
	}
}

void MouseReader::accept_raw_mouse_input(HWND hwnd)
{
	RAWINPUTDEVICE devices[1];
	devices[0].usUsagePage = 1;
	devices[0].usUsage = 2;
	devices[0].dwFlags = RIDEV_INPUTSINK;
	devices[0].hwndTarget = hwnd;

	RegisterRawInputDevices(devices, 1, sizeof(devices[0]));

}

FWindowsApplication* MouseReader::get_application()
{
	if (!FSlateApplication::IsInitialized())
	{
		return NULL;
	}
	return (FWindowsApplication*)FSlateApplication::Get().GetPlatformApplication().Get();
}

void MouseReader::stop_reader()
{
	FWindowsApplication* application = this->get_application();

	if (application != nullptr)
	{
		application->RemoveMessageHandler(*((IWindowsMessageHandler*)this));
	}
	this->is_reading = false;
}

RAWINPUT* MouseReader::get_raw_input(LPARAM lparam)
{
	unsigned int dw_size;

	GetRawInputData((HRAWINPUT)lparam, RID_INPUT, NULL, &dw_size, sizeof(RAWINPUTHEADER));
	LPBYTE lparam_buffer = new BYTE[dw_size];

	if (GetRawInputData((HRAWINPUT)lparam, RID_INPUT, lparam_buffer, &dw_size, sizeof(RAWINPUTHEADER)) != dw_size)
	{
		OutputDebugString(TEXT("GetRawInputData does not return correct size!\n"));
	}

	RAWINPUT* raw = (RAWINPUT*)lparam_buffer;

	return raw;
}
