// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <mutex>
#define WIN32_LEAN_AND_MEAN
#include "MinWindows.h"
#include <windows.h>
#include "Window.h"
#include "Windows/WindowsApplication.h"

/**
 * 
 */
class RODENTVR_API MouseReader : public IWindowsMessageHandler
{
private:
	std::mutex ReaderMutex;
	bool IsReading = false;
	void AcceptRawMouseInput(HWND Hwnd);
	FWindowsApplication* GetApplication();

protected:
	RAWINPUT* GetRawInput(LPARAM Lparam);
	virtual bool ProcessMessage(HWND Hwnd, uint32 Message, WPARAM WParam, LPARAM LParam, int32& OutResult) = 0;

public:
	MouseReader();
	virtual ~MouseReader();
	void LockMouseReader();
	void UnlockMouseReader();
	void StartReader();
	void StopReader();
};
