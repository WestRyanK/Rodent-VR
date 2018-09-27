#pragma once

#include <Windows.h>

typedef void(*handle_input_t)(LPARAM);

class Window
{
private:
	handle_input_t handle_input;
	HWND hwnd;
	const LPCSTR g_szClassName = "myWindowClass";
	LRESULT CALLBACK wnd_proc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam);

public:
	Window(handle_input_t handle_input);
};
