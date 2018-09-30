#pragma once

#include "MouseReader.h"

class MouseHandleReader : public MouseReader
{
private:
	HANDLE current_handle;

protected:
	void handle_input(LPARAM lparam);

public:
	MouseHandleReader();
};