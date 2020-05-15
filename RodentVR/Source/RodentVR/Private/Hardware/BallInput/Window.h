// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#define WIN32_LEAN_AND_MEAN
#include "MinWindows.h"
#include <windows.h>
#include <thread>
#include <functional>
#include <mutex>

//HMODULE module_handle = 0;
LRESULT CALLBACK WndProc(HWND hwnd, unsigned int msg, WPARAM wparam, LPARAM lparam);

/**
	Represents a Window that runs a message pump for handling Windows Messages.
	The Window defaults to being invisible and is used only for handling messages.
*/
class RODENTVR_API Window
{
private:
	Window();
	static Window* Instance;
	std::function<void(unsigned int, WPARAM, LPARAM)> MessageHandlerFunc;
	std::function<void(HWND)> PostInitFunc;
	HWND Hwnd = NULL;
	const LPCWSTR G_szClassName = L"myOwnWindowClass";
	bool IsRunning = false;
	std::mutex IsRunningMutex;
	HMODULE ModuleHandle;
	std::thread* MessagePumpThread;

	void Init();
	void PumpMessages();

public:
	// Get the singleton instance of the Window.
	static Window* GetInstance();
	// Begins the Window's message pump on another thread.
	// It will call post_init() after the Window has been created.
	void StartMessagePumpAsync();
	// Begins the Window's message pump.
	void StartMessagePump();
	// Stops the message pump for the Window.
	void StopMessagePump();
	// Returns whether the message pump is running or not.
	bool GetIsRunning();
	// Returns the handle to the currently running Window.
	HWND GetWindowHandle();
	// Sets a custom handler that is run each time a Windows Message is received.
	void SetMessageHandler(std::function<void(unsigned int, WPARAM, LPARAM)> MessageHandler);
	// Sets a callback that is run once the Window has been created.
	void SetPostInit(std::function<void(HWND)> PostInit);
	// Runs the custom handler for Windows Messages.
	void HandleMessage(unsigned int Msg, WPARAM Wparam, LPARAM Lparam);
};
