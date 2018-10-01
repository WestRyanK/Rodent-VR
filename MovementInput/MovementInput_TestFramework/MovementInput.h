#pragma once

#include <Windows.h>
#include <map>
#include <string>

class MovementInput
{
private:
	typedef void (_cdecl* get_movement_delta_func)(float* out_x, float* out_y);
	typedef void (_cdecl* initialize_func)(std::map<std::wstring, std::wstring> config_params);
	typedef void (_cdecl* start_func)();
	typedef void (_cdecl* stop_func)();
	typedef void (_cdecl* print_devices_func)(UINT device_types);

	get_movement_delta_func get_movement_delta_f;
	initialize_func initialize_f;
	start_func start_f;
	stop_func stop_f;
	print_devices_func print_devices_f;

	HINSTANCE dll_handle;
	LPWSTR dll_name;

public:
	MovementInput(LPWSTR dllName);
	void get_movement_delta(float* out_x, float* out_y);
	void initialize(std::map<std::wstring, std::wstring> config_params);
	void start();
	void stop();
	void print_devices();
};
