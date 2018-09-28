#include "stdafx.h"
#include "Window.h"

Window* Window::instance = NULL;

Window* Window::getInstance()
{
	if (Window::instance == NULL)
	{
		Window::instance = new Window();
	}
	return Window::instance;
}

Window::Window()
{
	WNDCLASSEX wc;
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = 0;
	wc.lpfnWndProc = Window::WndProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = GetModuleHandle(NULL);
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.lpszMenuName = NULL;
	wc.lpszClassName = g_szClassName;
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	//if (!RegisterClassEx(&wc)) Error();

	HWND hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,
		Window::g_szClassName,
		L"Title",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT, 240, 120,
		NULL, NULL, GetModuleHandle(NULL), NULL);

	this->hwnd = hwnd;
	this->is_running = false;
}

LRESULT CALLBACK Window::WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
	switch (msg)
	{
	case WM_CLOSE:
		DestroyWindow(hwnd);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	case WM_INPUT:
		Window::getInstance()->handle_input(lparam);
	default:
		return DefWindowProc(hwnd, msg, wparam, lparam);
	}
	return 0;
}

void Window::stop_message_pump()
{
	this->is_running_mutex.lock();
	this->is_running = false;
	this->is_running_mutex.unlock();
}

void Window::pump_messages()
{
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
		std::thread message_pump_thread([&]() { this->pump_messages(); });
	}
}

bool Window::get_is_running()
{
	return this->is_running;
}


void Window::set_handle_input(std::function<void(LPARAM)> handle_input)
{
	this->handle_input = handle_input;
}
