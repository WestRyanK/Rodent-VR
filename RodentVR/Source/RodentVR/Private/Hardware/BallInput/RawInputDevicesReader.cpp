// Fill out your copyright notice in the Description page of Project Settings.

#include "RawInputDevicesReader.h"
#include <string>
#include <algorithm>

wchar_t* RawInputDevicesReader::GetDeviceName(HANDLE DeviceHandle)
{
	unsigned int Size = 256;
	wchar_t DeviceNameBuffer[256] = { 0 };
	GetRawInputDeviceInfo( DeviceHandle, RIDI_DEVICENAME, DeviceNameBuffer, &Size);
	std::wstring Source(DeviceNameBuffer);

	// Crop out leading slashes and the trailing {guid}.
	unsigned int Len = wcschr(DeviceNameBuffer, '{') - DeviceNameBuffer - 5;
	std::wstring DeviceNameString = Source.substr(4, Len);

	// Replace all #s with \s.
	std::replace(DeviceNameString.begin(), DeviceNameString.end(), '#', '\\');
	
	wchar_t* DeviceName = new wchar_t[256];
	wcscpy(DeviceName, DeviceNameString.c_str());
	return DeviceName;
}

unsigned int RawInputDevicesReader::GetDeviceList(PRAWINPUTDEVICELIST* RawInputDeviceList)
{
	unsigned int DeviceCount;
	GetRawInputDeviceList(NULL, &DeviceCount, sizeof(RAWINPUTDEVICELIST));
	unsigned int Size = sizeof(RAWINPUTDEVICELIST) * DeviceCount;
	*RawInputDeviceList = (PRAWINPUTDEVICELIST)malloc(Size);
	GetRawInputDeviceList(*RawInputDeviceList, &DeviceCount, sizeof(RAWINPUTDEVICELIST));

	return DeviceCount;
}

void RawInputDevicesReader::PrintDevices(unsigned int DeviceTypes)
{
	PRAWINPUTDEVICELIST RawInputDeviceList;
	unsigned int DeviceCount = RawInputDevicesReader::GetDeviceList(&RawInputDeviceList);

	RID_DEVICE_INFO Rid;
	Rid.cbSize = sizeof(RID_DEVICE_INFO);

	for (size_t i = 0; i < DeviceCount; i++)
	{
		unsigned int Size = 256;

		unsigned int CbSize = Rid.cbSize;
		GetRawInputDeviceInfo(RawInputDeviceList[i].hDevice, RIDI_DEVICEINFO, &Rid, &CbSize);

		if (Rid.dwType == RIM_TYPEMOUSE && DeviceTypes & DEVICE_MOUSE)
		{
			wchar_t* DeviceName = RawInputDevicesReader::GetDeviceName(RawInputDeviceList[i].hDevice);
			printf("Device Name: ");
			printf("%ls\n", DeviceName);

			printf("ID for mouse: %d\n", (int)Rid.mouse.dwId);
			printf("Button Count: %d\n", (int)Rid.mouse.dwNumberOfButtons);
			printf("Sample Rate: %d\n", (int)Rid.mouse.dwSampleRate);

			printf("\n***********\n");
		}
		if (Rid.dwType == RIM_TYPEKEYBOARD && DeviceTypes & DEVICE_KEYBOARD)
		{
			printf("Keyboard Mode: %d\n", (int)Rid.keyboard.dwKeyboardMode);
			printf("Number of function keys: %d\n", (int)Rid.keyboard.dwNumberOfFunctionKeys);
			printf("Number of indicators: %d\n", (int)Rid.keyboard.dwNumberOfIndicators);
			printf("Number of keys total: %d\n", (int)Rid.keyboard.dwNumberOfKeysTotal);
			printf("Type of the keyboard: %d\n", (int)Rid.keyboard.dwType);
			printf("Subtype of the keyboard: %d\n", (int)Rid.keyboard.dwSubType);

			printf("\n***********\n");
		}

		if (Rid.dwType == RIM_TYPEHID && DeviceTypes & DEVICE_OTHER)
		{
			printf("Vendor Id: %d\n", (int)Rid.hid.dwVendorId);
			printf("Product Id: %d\n", (int)Rid.hid.dwProductId);
			printf("Version No: %d\n", (int)Rid.hid.dwVersionNumber);
			printf("Usage for the device: %d\n", (int)Rid.hid.usUsage);
			printf("Usage Page for the device: %d\n", (int)Rid.hid.usUsagePage);

			printf("\n***********\n");
		}
	}

	free(RawInputDeviceList);
}
