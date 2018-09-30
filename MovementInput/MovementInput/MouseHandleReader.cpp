#include "stdafx.h"
#include "MouseHandleReader.h"

MouseHandleReader::MouseHandleReader()
{

}

void MouseHandleReader::handle_input(LPARAM lparam) {
	RAWINPUT* raw = this->get_raw_input(lparam);

	this->current_handle = raw->header.hDevice;
	printf("%d\n", this->current_handle);

	delete raw;
}