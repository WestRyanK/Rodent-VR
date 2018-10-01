// MovementInput_TestFramework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include "MovementInput.h"
#include <map>
#include <string>
#include <iostream>


const std::wstring CONFIG_MOUSE_A_KEY = L"mouse_a_name";
const std::wstring CONFIG_MOUSE_B_KEY = L"mouse_b_name";

int main()
{
	std::map<std::wstring, std::wstring> config_params;
	config_params[CONFIG_MOUSE_A_KEY] = L"HID\\VID_046D&PID_C016\\6&d2a8b0a&0&0000";
	config_params[CONFIG_MOUSE_B_KEY] = L"HID\\VID_0461&PID_4D15\\6&31d2d65f&0&0000";

	MovementInput movement_input(TEXT("MovementInput.dll"));
	movement_input.initialize(config_params);

	printf("Mouse devices currently connected:\n\n");
	movement_input.print_devices();

	printf("Press Enter to begin reading mouse input.");
	std::cin.get();
	movement_input.start();
	float x = 0;
	float y = 0;
	while (true)
	{
		movement_input.get_movement_delta(&x, &y);
		if (x != 0 || y != 0)
			printf("x: %f\ty: %f\n", x, y);
	}

    return 0;
}

