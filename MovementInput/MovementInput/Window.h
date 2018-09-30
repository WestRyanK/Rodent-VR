#pragma once

#include <windows.h>
#include <thread>
#include <mutex>

extern HMODULE module_handle;
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam);

class Window
{
private:
	Window();
	static Window* instance;
	std::function<void(LPARAM)> handle_input_func;
	std::function<void(HWND)> post_init_func;
	HWND hwnd;
	const LPCWSTR g_szClassName = L"myWindowClass";
	bool is_running = false;
	std::mutex is_running_mutex;
	HMODULE module_handle;
	std::thread* message_pump_thread;

	void init();
	void pump_messages();

public:
	static Window* get_instance();
	void start_message_pump_async();
	void stop_message_pump();
	bool get_is_running();
	HWND get_window_handle();
	void set_input_handler(std::function<void(LPARAM)> handle_input);
	void set_post_init(std::function<void(HWND)> post_init);
	void handle_input(LPARAM lparam);
};
