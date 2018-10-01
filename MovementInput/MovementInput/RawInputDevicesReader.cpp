#include "stdafx.h"
#include "RawInputDevicesReader.h"
#include <string>
#include <algorithm>


wchar_t* RawInputDevicesReader::get_device_name(HANDLE device_handle)
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

UINT RawInputDevicesReader::get_device_list(PRAWINPUTDEVICELIST* rawInputDeviceList)
{
	UINT deviceCount;
	GetRawInputDeviceList(NULL, &deviceCount, sizeof(RAWINPUTDEVICELIST));
	UINT size = sizeof(RAWINPUTDEVICELIST) * deviceCount;
	*rawInputDeviceList = (PRAWINPUTDEVICELIST)malloc(size);
	GetRawInputDeviceList(*rawInputDeviceList, &deviceCount, sizeof(RAWINPUTDEVICELIST));

	return deviceCount;
}

void RawInputDevicesReader::print_devices(UINT device_types)
{
	PRAWINPUTDEVICELIST rawInputDeviceList;
	UINT deviceCount = RawInputDevicesReader::get_device_list(&rawInputDeviceList);

	RID_DEVICE_INFO rid;
	rid.cbSize = sizeof(RID_DEVICE_INFO);

	for (size_t i = 0; i < deviceCount; i++)
	{
		UINT size = 256;

		UINT cbSize = rid.cbSize;
		GetRawInputDeviceInfo(rawInputDeviceList[i].hDevice, RIDI_DEVICEINFO, &rid, &cbSize);

		if (rid.dwType == RIM_TYPEMOUSE && device_types & DEVICE_MOUSE)
		{
			wchar_t* device_name = RawInputDevicesReader::get_device_name(rawInputDeviceList[i].hDevice);
			printf("Device Name: ");
			printf("%ls\n", device_name);

			printf("ID for mouse: %d\n", rid.mouse.dwId);
			printf("Button Count: %d\n", rid.mouse.dwNumberOfButtons);
			printf("Sample Rate: %d\n", rid.mouse.dwSampleRate);

			printf("\n***********\n");
		}
		if (rid.dwType == RIM_TYPEKEYBOARD && device_types & DEVICE_KEYBOARD)
		{
			printf("Keyboard Mode: %d\n", rid.keyboard.dwKeyboardMode);
			printf("Number of function keys: %d\n", rid.keyboard.dwNumberOfFunctionKeys);
			printf("Number of indicators: %d\n", rid.keyboard.dwNumberOfIndicators);
			printf("Number of keys total: %d\n", rid.keyboard.dwNumberOfKeysTotal);
			printf("Type of the keyboard: %d\n", rid.keyboard.dwType);
			printf("Subtype of the keyboard: %d\n", rid.keyboard.dwSubType);

			printf("\n***********\n");
		}

		if (rid.dwType == RIM_TYPEHID && device_types & DEVICE_OTHER)
		{
			printf("Vendor Id: %d\n", rid.hid.dwVendorId);
			printf("Product Id: %d\n", rid.hid.dwProductId);
			printf("Version No: %d\n", rid.hid.dwVersionNumber);
			printf("Usage for the device: %d\n", rid.hid.usUsage);
			printf("Usage Page for the device: %d\n", rid.hid.usUsagePage);

			printf("\n***********\n");
		}
	}

	free(rawInputDeviceList);
}
