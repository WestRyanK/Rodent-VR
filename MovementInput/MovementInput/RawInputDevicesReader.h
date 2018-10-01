#pragma once

#include <Windows.h>

/**
	Provides utilities for reading all of the RawInput devices on a system.
*/
class RawInputDevicesReader
{
public:
	// Gets a list of all the RawInput devices on the system.
	static UINT get_device_list(PRAWINPUTDEVICELIST* rawInputDeviceList);
	// Retrieves the name of a RawInput device in the same format as
	// can be found by opening Windows' Device Manager > Selecting a device > Details > Device instance path.
	static wchar_t* get_device_name(HANDLE device_handle);
	// Prints a list of all the RawInput devices connected on the system.
	static void RawInputDevicesReader::print_devices(UINT device_types);

	static const UINT DEVICE_MOUSE		= 1;
	static const UINT DEVICE_KEYBOARD	= 2;
	static const UINT DEVICE_OTHER		= 4;
};
