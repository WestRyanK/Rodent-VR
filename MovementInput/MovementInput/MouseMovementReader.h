#pragma once

#include "MouseReader.h"
#include <map>
#include <string>

class MouseMovementReader : public MouseReader
{
private:
	HANDLE mouse_a_id = {};
	HANDLE mouse_b_id = {};
	float delta[2];
	void set_cursor_handles(const wchar_t* mouse_a_name, const wchar_t* mouse_b_name);

protected:
	void handle_input(LPARAM lparam);

public:
	MouseMovementReader(std::wstring mouse_a_name, std::wstring mouse_b_name);
	static const unsigned int AXIS_X = 0;
	static const unsigned int AXIS_Y = 1;

	float read_delta(unsigned int axis);
};
