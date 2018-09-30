#pragma once

#include "MouseReader.h"

class MouseMovementReader : public MouseReader
{
private:
	HANDLE mouse_a_id = {};
	HANDLE mouse_b_id = {};
	float delta[2];

protected:
	void handle_input(LPARAM lparam);

public:
	MouseMovementReader();
	static const unsigned int AXIS_X = 0;
	static const unsigned int AXIS_Y = 1;

	float read_delta(unsigned int axis);
	void set_cursor_handles(const wchar_t* mouse_a_name, const wchar_t* mouse_b_name);
	wchar_t* MouseMovementReader::get_device_name(HANDLE device_handle);
};
