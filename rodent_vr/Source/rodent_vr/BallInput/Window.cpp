// Fill out your copyright notice in the Description page of Project Settings.

#include "Window.h"

Window* Window::instance = NULL;
HMODULE module_handle;

Window* Window::get_instance()
{
	if (Window::instance == NULL)
	{
		Window::instance = new Window();
	}
	return Window::instance;
}

Window::~Window()
{
}

Window::Window()
{
	this->module_handle = module_handle;

	this->is_running = false;
}

LRESULT CALLBACK WndProc(HWND hwnd, unsigned int msg, WPARAM wparam, LPARAM lparam)
{
	switch (msg)
	{
	case WM_CLOSE:
		DestroyWindow(hwnd);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		Window::get_instance()->handle_message(msg, wparam, lparam);
		return DefWindowProc(hwnd, msg, wparam, lparam);
	}
	return 0;
}

void Window::init()
{
	WNDCLASSEX wc = { };
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = 0;
	wc.lpfnWndProc = WndProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = this->module_handle;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.lpszMenuName = NULL;
	wc.lpszClassName = this->g_szClassName;
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	if (!RegisterClassEx(&wc))
		printf("Unable to register class!");

	this->hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,
		this->g_szClassName,
		L"Title",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT, 640, 640,
		NULL, NULL, this->module_handle, NULL);
}

void Window::stop_message_pump()
{
	this->is_running_mutex.lock();
	this->is_running = false;
	this->is_running_mutex.unlock();
}

void Window::pump_messages()
{
	if (this->hwnd != NULL)
		SendMessage(this->hwnd, WM_DESTROY, NULL, NULL);

	this->init();
	if (this->post_init_func != NULL)
		this->post_init_func(this->hwnd);

	// We want to lock around the while loop's condition checking...
	this->is_running_mutex.lock();
	this->is_running = true;

	MSG msg;
	while (this->is_running && GetMessage(&msg, this->hwnd, 0, 0))
	{
		this->is_running_mutex.unlock();

		TranslateMessage(&msg);
		DispatchMessage(&msg);

		this->is_running_mutex.lock();
	}

	this->is_running_mutex.unlock();
}

void Window::start_message_pump_async()
{
	if (!this->is_running)
	{
		message_pump_thread = new std::thread([&]() { this->pump_messages(); });
	}
}

void Window::start_message_pump()
{
	if (!this->is_running)
	{
		 this->pump_messages(); 
	}
}

bool Window::get_is_running()
{
	return this->is_running;
}

void Window::handle_message(unsigned int msg, WPARAM wparam, LPARAM lparam)
{
	if (this->message_handler_func != NULL)
		this->message_handler_func(msg, wparam, lparam);
}

void Window::set_message_handler(std::function<void(unsigned int, WPARAM, LPARAM)> message_handler)
{
	this->message_handler_func = message_handler;
}

void Window::set_post_init(std::function<void(HWND)> post_init)
{
	this->post_init_func = post_init;
}

HWND Window::get_window_handle()
{
	return this->hwnd;
}
