// Fill out your copyright notice in the Description page of Project Settings.

#include "MouseReader.h"

MouseReader::MouseReader()
{
	this->window = Window::get_instance();
	this->window->set_message_handler([&](unsigned int msg, WPARAM wparam, LPARAM lparam) { this->handle_message(msg, wparam, lparam); });
	this->window->set_post_init([&](HWND hwnd) { this->accept_raw_mouse_input(hwnd); });
}

MouseReader::~MouseReader()
{
	delete window;
}
void MouseReader::lock_mouse_reader()
{
	this->reader_mutex.lock();
}

void MouseReader::unlock_mouse_reader()
{
	this->reader_mutex.unlock();
}

void MouseReader::start_reader()
{
	if (!this->is_reading)
	{
		this->window->start_message_pump_async();
		this->is_reading = this->window->get_is_running();
	}
}

void MouseReader::accept_raw_mouse_input(HWND hwnd)
{
	RAWINPUTDEVICE devices[1];
	devices[0].usUsagePage = 1;
	devices[0].usUsage = 2;
	devices[0].dwFlags = RIDEV_INPUTSINK;
	devices[0].hwndTarget = hwnd;

	RegisterRawInputDevices(devices, 1, sizeof(devices[0]));

}

void MouseReader::stop_reader()
{
	this->window->stop_message_pump();
	this->is_reading = this->window->get_is_running();
}

RAWINPUT* MouseReader::get_raw_input(LPARAM lparam)
{
	unsigned int dw_size;

	GetRawInputData((HRAWINPUT)lparam, RID_INPUT, NULL, &dw_size, sizeof(RAWINPUTHEADER));
	LPBYTE lparam_buffer = new BYTE[dw_size];

	if (GetRawInputData((HRAWINPUT)lparam, RID_INPUT, lparam_buffer, &dw_size, sizeof(RAWINPUTHEADER)) != dw_size)
	{
		OutputDebugString(TEXT("GetRawInputData does not return correct size!\n"));
	}

	RAWINPUT* raw = (RAWINPUT*)lparam_buffer;

	return raw;
}
