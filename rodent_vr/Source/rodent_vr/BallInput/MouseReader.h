// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <mutex>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "Window.h"
#include "Windows/WindowsApplication.h"

/**
 * 
 */
class RODENT_VR_API MouseReader : public IWindowsMessageHandler
{
private:
	std::mutex reader_mutex;
	bool is_reading = false;
	void accept_raw_mouse_input(HWND hwnd);
	FWindowsApplication* get_application();

protected:
	RAWINPUT* get_raw_input(LPARAM lparam);
	virtual bool ProcessMessage(HWND Hwnd, uint32 Message, WPARAM WParam, LPARAM LParam, int32& OutResult) = 0;

public:
	MouseReader();
	virtual ~MouseReader();
	void lock_mouse_reader();
	void unlock_mouse_reader();
	void start_reader();
	void stop_reader();
};
