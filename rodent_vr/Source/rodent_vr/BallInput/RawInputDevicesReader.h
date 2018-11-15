// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

/**
*	Provides utilities for reading all of the RawInput devices on a system.
*/
class RODENT_VR_API RawInputDevicesReader
{
public:
	// Gets a list of all the RawInput devices on the system.
	static unsigned int get_device_list(PRAWINPUTDEVICELIST* rawInputDeviceList);
	// Retrieves the name of a RawInput device in the same format as
	// can be found by opening Windows' Device Manager > Selecting a device > Details > Device instance path.
	static wchar_t* get_device_name(HANDLE device_handle);
	// Prints a list of all the RawInput devices connected on the system.
	static void print_devices(unsigned int device_types);

	static const unsigned int DEVICE_MOUSE		= 1;
	static const unsigned int DEVICE_KEYBOARD	= 2;
	static const unsigned int DEVICE_OTHER		= 4;
};
