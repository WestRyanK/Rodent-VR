#pragma once

#include <Windows.h>
#include <mutex>


class Window
{
private:
	Window();
	static Window* instance;
	std::function<void(LPARAM)> handle_input;
	HWND hwnd;
	const LPCWSTR g_szClassName = L"myWindowClass";
	bool is_running = false;
	std::mutex is_running_mutex;
	static LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam);

	void pump_messages();

public:
	static Window* getInstance();
	void start_message_pump_async();
	void stop_message_pump();
	bool get_is_running();
	void set_handle_input(std::function<void(LPARAM)> handle_input);

};
