// MovementInput_TestFramework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include "MovementInput.h"
#include "MovementWindow.h"
#include <map>
#include <string>
#include <iostream>


const std::wstring CONFIG_MOUSE_A_KEY = L"mouse_a_name";
const std::wstring CONFIG_MOUSE_B_KEY = L"mouse_b_name";
//int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
int main()
{
	std::map<std::wstring, std::wstring> config_params;
	config_params[CONFIG_MOUSE_A_KEY] = L"HID\\VID_046D&PID_C016\\6&d2a8b0a&0&0000";
	config_params[CONFIG_MOUSE_B_KEY] = L"HID\\VID_0461&PID_4D15\\6&31d2d65f&0&0000";

	MovementWindow window(config_params);
	printf("Mouse devices currently connected:\n\n");
	window.movement_input->print_devices();
	window.start();

    return 0;
}

