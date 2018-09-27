#include "Window.h"

Window::Window(handle_input_t handle_input)
{
	this->handle_input = handle_input;

	WNDCLASSEX wc;
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = 0;
	wc.lpfnWndProc = this->wnd_proc;
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
		"Title",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT, 240, 120,
		NULL, NULL, GetModuleHandle(NULL), NULL);

	this->hwnd = hwnd;
}

LRESULT CALLBACK Window::wnd_proc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
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
		this->handle_input(lparam);
	default:
		return DefWindowProc(hwnd, msg, wparam, lparam);
	}
	return 0;
}
