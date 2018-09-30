#pragma once

#include <Windows.h>

class MovementInput
{
private:
	typedef void (_cdecl* get_movement_delta_func)(float* out_x, float* out_y);
	typedef void (_cdecl* configure_func)();
	typedef void (_cdecl* initialize_func)();
	typedef void (_cdecl* start_func)();
	typedef void (_cdecl* stop_func)();

	get_movement_delta_func get_movement_delta_f;
	configure_func configure_f;
	initialize_func initialize_f;
	start_func start_f;
	stop_func stop_f;

	HINSTANCE dll_handle;
	LPWSTR dll_name;


public:
	MovementInput(LPWSTR dllName);
	void get_movement_delta(float* out_x, float* out_y);
	void configure();
	void initialize();
	void start();
	void stop();

};
