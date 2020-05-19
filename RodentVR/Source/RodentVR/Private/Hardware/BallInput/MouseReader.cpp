// Fill out your copyright notice in the Description page of Project Settings.

#include "MouseReader.h"
#include "Framework/Application/SlateApplication.h"

MouseReader::MouseReader()
{
}

MouseReader::~MouseReader()
{
	this->StopReader();
}
void MouseReader::LockMouseReader()
{
	this->ReaderMutex.lock();
}


void MouseReader::UnlockMouseReader()
{
	this->ReaderMutex.unlock();
}

void MouseReader::StartReader()
{
	if (!this->IsReading)
	{
		FWindowsApplication* Application = this->GetApplication();
		if (Application != NULL)
		{
			Application->AddMessageHandler(*((IWindowsMessageHandler*)this));
		}
		this->IsReading = true;
	}
}

void MouseReader::RegisterForRawInput()
{
	RAWINPUTDEVICE Devices[1];
	Devices[0].usUsagePage = 1;
	Devices[0].usUsage = 2;
	Devices[0].dwFlags = 0;
	Devices[0].hwndTarget = 0;

	RegisterRawInputDevices(Devices, 1, sizeof(Devices[0]));
}

FWindowsApplication* MouseReader::GetApplication()
{
	if (!FSlateApplication::IsInitialized())
	{
		return NULL;
	}
	return (FWindowsApplication*)FSlateApplication::Get().GetPlatformApplication().Get();
}

void MouseReader::StopReader()
{
	FWindowsApplication* Application = this->GetApplication();

	if (Application != nullptr)
	{
		Application->RemoveMessageHandler(*((IWindowsMessageHandler*)this));
	}
	this->IsReading = false;
}

RAWINPUT* MouseReader::GetRawInput(LPARAM Lparam)
{
	unsigned int DwSize;

	GetRawInputData((HRAWINPUT)Lparam, RID_INPUT, NULL, &DwSize, sizeof(RAWINPUTHEADER));
	LPBYTE LparamBuffer = new BYTE[DwSize];

	if (GetRawInputData((HRAWINPUT)Lparam, RID_INPUT, LparamBuffer, &DwSize, sizeof(RAWINPUTHEADER)) != DwSize)
	{
		OutputDebugString(TEXT("GetRawInputData does not return correct size!\n"));
	}

	RAWINPUT* Raw = (RAWINPUT*)LparamBuffer;

	return Raw;
}
