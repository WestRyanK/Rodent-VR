// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MouseReader.h"
#include <map>
#include <string>

/**
 * 
 */
class RODENTVR_API MouseMovementReader : public MouseReader
{
private:
	HANDLE MouseAId = {};
	HANDLE MouseBId = {};
	float Delta[2];
	void SetCursorHandles(const wchar_t* MouseAName, const wchar_t* MouseBName);

protected:
	void HandleMessage(unsigned int Msg, WPARAM Wparam, LPARAM Lparam);
	bool ProcessMessage(HWND Hwnd, uint32 Message, WPARAM WParam, LPARAM LParam, int32& OutResult);

public:
	MouseMovementReader(std::wstring MouseAName, std::wstring MouseBName);
	~MouseMovementReader();
	static const unsigned int AXIS_X = 0;
	static const unsigned int AXIS_Y = 1;

	float read_delta(unsigned int Axis);
};
