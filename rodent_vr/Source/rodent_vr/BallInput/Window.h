// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <thread>
#include <mutex>

//HMODULE module_handle = 0;
LRESULT CALLBACK WndProc(HWND hwnd, unsigned int msg, WPARAM wparam, LPARAM lparam);

/**
	Represents a Window that runs a message pump for handling Windows Messages.
	The Window defaults to being invisible and is used only for handling messages.
*/
class RODENT_VR_API Window
{
private:
	Window();
	static Window* instance;
	std::function<void(unsigned int, WPARAM, LPARAM)> message_handler_func;
	std::function<void(HWND)> post_init_func;
	HWND hwnd = NULL;
	const LPCWSTR g_szClassName = L"myOwnWindowClass";
	bool is_running = false;
	std::mutex is_running_mutex;
	HMODULE module_handle;
	std::thread* message_pump_thread;

	void init();
	void pump_messages();

public:
	// Get the singleton instance of the Window.
	static Window* get_instance();
	// Begins the Window's message pump on another thread.
	// It will call post_init() after the Window has been created.
	void start_message_pump_async();
	// Begins the Window's message pump.
	void start_message_pump();
	// Stops the message pump for the Window.
	void stop_message_pump();
	// Returns whether the message pump is running or not.
	bool get_is_running();
	// Returns the handle to the currently running Window.
	HWND get_window_handle();
	// Sets a custom handler that is run each time a Windows Message is received.
	void set_message_handler(std::function<void(unsigned int, WPARAM, LPARAM)> message_handler);
	// Sets a callback that is run once the Window has been created.
	void set_post_init(std::function<void(HWND)> post_init);
	// Runs the custom handler for Windows Messages.
	void handle_message(unsigned int msg, WPARAM wparam, LPARAM lparam);
};
