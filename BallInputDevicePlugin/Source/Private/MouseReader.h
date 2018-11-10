#pragma once

#include <mutex>
#include <windows.h>
#include "Window.h"

class MouseReader
{
private:
	std::mutex reader_mutex;
	Window* window = NULL;
	bool is_reading = false;
	void accept_raw_mouse_input(HWND hwnd);

protected:
	RAWINPUT* get_raw_input(LPARAM lparam);

public:
	MouseReader();
	virtual ~MouseReader();

	virtual void handle_message(unsigned int msg, WPARAM wparam, LPARAM lparam) = 0;
	void lock_mouse_reader();
	void unlock_mouse_reader();
	void start_reader();
	void stop_reader();
};