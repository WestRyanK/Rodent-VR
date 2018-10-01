#include "stdafx.h"
#include "MovementInput.h"

MovementInput::MovementInput(LPWSTR dll_name)
{
	this->dll_name = dll_name;
	this->dll_handle = LoadLibrary(this->dll_name);

	if (this->dll_handle == NULL)
	{
		printf("Couldn't find DLL for MovementInput!");
		exit(0);
	}

	this->get_movement_delta_f = (get_movement_delta_func)GetProcAddress(this->dll_handle, "get_movement_delta");
	this->initialize_f = (initialize_func)GetProcAddress(this->dll_handle, "initialize");
	this->start_f = (start_func)GetProcAddress(this->dll_handle, "start");
	this->stop_f = (stop_func)GetProcAddress(this->dll_handle, "stop");
	this->print_devices_f = (print_devices_func)GetProcAddress(this->dll_handle, "print_devices");
	
	if (this->get_movement_delta_f == NULL) 
	{
		printf("Couldn't find method 'get_movement_delta' in DLL!");
		exit(0);
	}

	if (this->initialize_f == NULL) 
	{
		printf("Couldn't find method 'initialize' in DLL!");
		exit(0);
	}

	if (this->start_f == NULL) 
	{
		printf("Couldn't find method 'start' in DLL!");
		exit(0);
	}

	if (this->stop_f == NULL) 
	{
		printf("Couldn't find method 'stop' in DLL!");
		exit(0);
	}

	if (this->print_devices_f == NULL) 
	{
		printf("Couldn't find method 'print_devices' in DLL!");
		// print_devices isn't necessary so we won't exit if missing.
	}
}


void MovementInput::get_movement_delta(float* out_x, float* out_y)
{
	this->get_movement_delta_f(out_x, out_y);
}

void MovementInput::initialize(std::map<std::wstring, std::wstring> config_params)
{
	this->initialize_f(config_params);
}

void MovementInput::start()
{
	this->start_f();
}

void MovementInput::stop()
{
	this->stop_f();
}

void MovementInput::print_devices()
{
	const UINT DEVICE_MOUSE = 1;
	this->print_devices_f(DEVICE_MOUSE);
}
