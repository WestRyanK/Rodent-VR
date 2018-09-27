#pragma once

#include <mutex>
#include <Windows.h>
#include "Window.h"

class MouseReader
{
private:
	HANDLE cursorA_id;
	HANDLE cursorB_id;
	float delta[2];
	std::mutex delta_mutex;
	Window* window = NULL;

	void handle_input(LPARAM lparam);


public:

	static const unsigned int AXIS_X = 0;
	static const unsigned int AXIS_Y = 1;

	MouseReader();
	~MouseReader();

	float read_delta(unsigned int axis);
	void set_cursor_ids(HANDLE cursorA_id, HANDLE cursorB_id);

	void lock_mouse_reader();
	void unlock_mouse_reader();
};