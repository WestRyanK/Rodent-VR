#pragma once

#include "Window.h"
#include "MovementInput.h"
#include <gdiplus.h>

class MovementWindow
{
private:
	void handle_message(UINT msg, WPARAM wparam, LPARAM lparam);
	void paint();
	void start_reader_loop();

	Window* window;
	std::thread* reader_thread;
	const std::wstring CONFIG_MOUSE_A_KEY = L"mouse_a_name";
	const std::wstring CONFIG_MOUSE_B_KEY = L"mouse_b_name";
	Gdiplus::SolidBrush* indicator_brush;
	UINT indicator_size = 4;
	INT indicator_x = 320;
	INT indicator_y = 320;
	float scale = 0.25f;


public:
	MovementWindow(std::map<std::wstring, std::wstring> config_params);
	MovementInput* movement_input = NULL;
	~MovementWindow();
	void start();
};
