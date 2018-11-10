#include "BallInputDevicePluginPrivatePCH.h"
//#include "stdafx.h"
#include "RawInputDevicesReader.h"
#include <string>
#include <algorithm>


wchar_t* RawInputDevicesReader::get_device_name(HANDLE device_handle)
{
	unsigned int size = 256;
	wchar_t device_name_buffer[256] = { 0 };
	GetRawInputDeviceInfo( device_handle, RIDI_DEVICENAME, device_name_buffer, &size);
	std::wstring source(device_name_buffer);

	// Crop out leading slashes and the trailing {guid}.
	unsigned int len = wcschr(device_name_buffer, '{') - device_name_buffer - 5;
	std::wstring device_name_string = source.substr(4, len);

	// Replace all #s with \s.
	std::replace(device_name_string.begin(), device_name_string.end(), '#', '\\');
	
	wchar_t* device_name = new wchar_t[256];
	wcscpy(device_name, device_name_string.c_str());
	return device_name;
}

unsigned int RawInputDevicesReader::get_device_list(PRAWINPUTDEVICELIST* rawInputDeviceList)
{
	unsigned int deviceCount;
	GetRawInputDeviceList(NULL, &deviceCount, sizeof(RAWINPUTDEVICELIST));
	unsigned int size = sizeof(RAWINPUTDEVICELIST) * deviceCount;
	*rawInputDeviceList = (PRAWINPUTDEVICELIST)malloc(size);
	GetRawInputDeviceList(*rawInputDeviceList, &deviceCount, sizeof(RAWINPUTDEVICELIST));

	return deviceCount;
}

void RawInputDevicesReader::print_devices(unsigned int device_types)
{
	PRAWINPUTDEVICELIST rawInputDeviceList;
	unsigned int deviceCount = RawInputDevicesReader::get_device_list(&rawInputDeviceList);

	RID_DEVICE_INFO rid;
	rid.cbSize = sizeof(RID_DEVICE_INFO);

	for (size_t i = 0; i < deviceCount; i++)
	{
		unsigned int size = 256;

		unsigned int cbSize = rid.cbSize;
		GetRawInputDeviceInfo(rawInputDeviceList[i].hDevice, RIDI_DEVICEINFO, &rid, &cbSize);

		if (rid.dwType == RIM_TYPEMOUSE && device_types & DEVICE_MOUSE)
		{
			wchar_t* device_name = RawInputDevicesReader::get_device_name(rawInputDeviceList[i].hDevice);
			printf("Device Name: ");
			printf("%ls\n", device_name);

			printf("ID for mouse: %d\n", (int)rid.mouse.dwId);
			printf("Button Count: %d\n", (int)rid.mouse.dwNumberOfButtons);
			printf("Sample Rate: %d\n", (int)rid.mouse.dwSampleRate);

			printf("\n***********\n");
		}
		if (rid.dwType == RIM_TYPEKEYBOARD && device_types & DEVICE_KEYBOARD)
		{
			printf("Keyboard Mode: %d\n", (int)rid.keyboard.dwKeyboardMode);
			printf("Number of function keys: %d\n", (int)rid.keyboard.dwNumberOfFunctionKeys);
			printf("Number of indicators: %d\n", (int)rid.keyboard.dwNumberOfIndicators);
			printf("Number of keys total: %d\n", (int)rid.keyboard.dwNumberOfKeysTotal);
			printf("Type of the keyboard: %d\n", (int)rid.keyboard.dwType);
			printf("Subtype of the keyboard: %d\n", (int)rid.keyboard.dwSubType);

			printf("\n***********\n");
		}

		if (rid.dwType == RIM_TYPEHID && device_types & DEVICE_OTHER)
		{
			printf("Vendor Id: %d\n", (int)rid.hid.dwVendorId);
			printf("Product Id: %d\n", (int)rid.hid.dwProductId);
			printf("Version No: %d\n", (int)rid.hid.dwVersionNumber);
			printf("Usage for the device: %d\n", (int)rid.hid.usUsage);
			printf("Usage Page for the device: %d\n", (int)rid.hid.usUsagePage);

			printf("\n***********\n");
		}
	}

	free(rawInputDeviceList);
}
