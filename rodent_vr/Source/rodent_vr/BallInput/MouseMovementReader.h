// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MouseReader.h"
#include <map>
#include <string>

/**
 * 
 */
class RODENT_VR_API MouseMovementReader : public MouseReader
{
private:
	HANDLE mouse_a_id = {};
	HANDLE mouse_b_id = {};
	float delta[2];
	void set_cursor_handles(const wchar_t* mouse_a_name, const wchar_t* mouse_b_name);

protected:
	void handle_message(unsigned int msg, WPARAM wparam, LPARAM lparam);

public:
	MouseMovementReader(std::wstring mouse_a_name, std::wstring mouse_b_name);
	~MouseMovementReader();
	static const unsigned int AXIS_X = 0;
	static const unsigned int AXIS_Y = 1;

	float read_delta(unsigned int axis);
};
