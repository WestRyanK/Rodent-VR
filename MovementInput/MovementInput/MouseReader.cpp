#include "MouseReader.h"

MouseReader::MouseReader()
{
	this->delta[AXIS_X] = 0;
	this->delta[AXIS_Y] = 0;

	this->window = new Window(&this->handle_input);
}

MouseReader::~MouseReader()
{
	delete window;
}

float MouseReader::read_delta(unsigned int axis)
{
	float out = this->delta[axis];
	this->delta[axis] = 0;
	return out;
}


void MouseReader::set_cursor_ids(HANDLE cursorA_id, HANDLE cursorB_id)
{
	this->cursorA_id = cursorA_id;
	this->cursorB_id = cursorB_id;
}

void MouseReader::lock_mouse_reader()
{
	this->delta_mutex.lock();
}

void MouseReader::unlock_mouse_reader()
{
	this->delta_mutex.unlock();
}

void MouseReader::handle_input(LPARAM lparam)
{
	UINT dw_size;

	GetRawInputData((HRAWINPUT)lparam, RID_INPUT, NULL, &dw_size, sizeof(RAWINPUTHEADER));
	LPBYTE lparam_buffer = new BYTE[dw_size];

	if (GetRawInputData((HRAWINPUT)lparam, RID_INPUT, lparam_buffer, &dw_size, sizeof(RAWINPUTHEADER)) != dw_size)
	{
		OutputDebugString(TEXT("GetRawInputData does not return correct size!\n"));
	}

	RAWINPUT* raw = (RAWINPUT*)lparam_buffer;

	if (raw->header.dwType == RIM_TYPEMOUSE)
	{
		this->lock_mouse_reader();

		// TODO: I could imagine that some devices have a faster 
		// refresh rate than other devices. Could that make it 
		// appear that some devices are moving faster than others?

		if (raw->header.hDevice == this->cursorA_id) 
		{
			this->delta[AXIS_X] += raw->data.mouse.lLastX;
		}
		else if (raw->header.hDevice == this->cursorB_id)
		{ 
			this->delta[AXIS_Y] += raw->data.mouse.lLastX;
		}

		this->unlock_mouse_reader();
	}

	delete[] lparam_buffer;
}