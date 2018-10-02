#include "stdafx.h"
#include <thread>
#include "MovementWindow.h"
#include "MovementInput.h"
#include <gdiplus.h>
#pragma comment (lib,"Gdiplus.lib")

MovementWindow::MovementWindow(std::map<std::wstring, std::wstring> config_params)
{
	Gdiplus::GdiplusStartupInput startInput;
	Gdiplus::GdiplusStartupOutput startOutput;
	ULONG_PTR token;
	Gdiplus::GdiplusStartup(&token, &startInput, &startOutput);
	this->indicator_brush = new Gdiplus::SolidBrush(Gdiplus::Color(0, 0, 0));

	this->window = Window::get_instance();
	this->window->set_message_handler([&](UINT msg, WPARAM wparam, LPARAM lparam) { this->handle_message(msg, wparam, lparam); });
	this->window->set_post_init([&](HWND hwnd)
	{
		ShowWindow(hwnd, 10);
		UpdateWindow(hwnd);
	});

	

	this->movement_input = new MovementInput(TEXT("MovementInput.dll"));
	movement_input->initialize(config_params);
	movement_input->start();

	this->start_reader_loop();
}


MovementWindow::~MovementWindow()
{
	//if (this->indicator_brush != NULL)
	//	free(this->indicator_brush);
	//if (this->movement_input != NULL)
	//	free(this->movement_input);
	//if (this->window != NULL)
	//	free(this->window);
	//if (this->reader_thread != NULL)
	//	free(this->reader_thread);
}

void MovementWindow::start_reader_loop()
{
	this->reader_thread = new std::thread([&]()
	{
		float x = 0;
		float y = 0;
		while (true)
		{
			Sleep(100);
			this->movement_input->get_movement_delta(&x, &y);
			if (x != 0 || y != 0)
			{
				this->indicator_x += x * scale;
				this->indicator_y += y * scale;
				InvalidateRect(this->window->get_window_handle(), NULL, FALSE);
			}
		}
	});
}

void MovementWindow::handle_message(UINT msg, WPARAM wparam, LPARAM lparam)
{
	switch (msg)
	{
	case WM_PAINT:
		this->paint();
		break;
	}
}

void MovementWindow::start()
{
	this->window->start_message_pump();
}

void MovementWindow::paint()
{
	PAINTSTRUCT ps;
	HDC hdc = BeginPaint(this->window->get_window_handle(), &ps);

	Gdiplus::Graphics graphics(hdc);
	INT x = indicator_x - indicator_size / 2;
	INT y = indicator_y - indicator_size / 2;

	graphics.Clear(Gdiplus::Color(255, 255, 255));
	graphics.FillEllipse(indicator_brush, x, y, indicator_size, indicator_size);

	EndPaint(this->window->get_window_handle(), &ps);
}