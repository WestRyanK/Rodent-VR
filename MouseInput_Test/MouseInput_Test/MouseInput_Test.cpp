// MouseInput_Test.cpp : Defines the entry point for the console application.
//
//
#include "stdafx.h"
#include <iostream>
#include <thread>
#include <Windows.h>

const char g_szClassName[] = "myWindowClass";

void Error() {
	auto error = GetLastError();
	OutputDebugStringW(L"An error occured:");
	std::cin.get();
	exit(error);
}

RID_DEVICE_INFO GetRawInputDevices() {

	UINT deviceCount;
	PRAWINPUTDEVICELIST rawInputDeviceList;
	if (GetRawInputDeviceList(NULL, &deviceCount, sizeof(RAWINPUTDEVICELIST)) != 0) Error();
	UINT size = sizeof(RAWINPUTDEVICELIST) * deviceCount;
	if ((rawInputDeviceList = (PRAWINPUTDEVICELIST)malloc(size)) == NULL) Error();
	if (GetRawInputDeviceList(rawInputDeviceList, &deviceCount, sizeof(RAWINPUTDEVICELIST)) == -1) Error();

	RID_DEVICE_INFO rid;
	RID_DEVICE_INFO mouse;
	bool foundMouse = false;
	rid.cbSize = sizeof(RID_DEVICE_INFO);

	for (int i = 0; i < deviceCount; i++)
	{
		UINT size = 256;
		TCHAR buffer[256] = { 0 };

		if (GetRawInputDeviceInfo(rawInputDeviceList[i].hDevice, RIDI_DEVICENAME, buffer, &size) < 0) Error();

		printf("Device Name: ");
		fwrite(buffer, 1, 255, stdout);
		printf("\n");

		UINT cbSize = rid.cbSize;
		if (GetRawInputDeviceInfo(rawInputDeviceList[i].hDevice, RIDI_DEVICEINFO, &rid, &cbSize) < 0) Error();

		if (rid.dwType == RIM_TYPEMOUSE)
		{
			printf("ID for mouse: %d\n", rid.mouse.dwId);
			printf("Button Count: %d\n", rid.mouse.dwNumberOfButtons);
			printf("Sample Rate: %d\n", rid.mouse.dwSampleRate);

			//if (!foundMouse) {
				mouse = rid;
				//foundMouse = true;
			//}
		}
		if (rid.dwType == RIM_TYPEKEYBOARD)
		{
			printf("Keyboard Mode: %d\n", rid.keyboard.dwKeyboardMode);
			printf("Number of function keys: %d\n", rid.keyboard.dwNumberOfFunctionKeys);
			printf("Number of indicators: %d\n", rid.keyboard.dwNumberOfIndicators);
			printf("Number of keys total: %d\n", rid.keyboard.dwNumberOfKeysTotal);
			printf("Type of the keyboard: %d\n", rid.keyboard.dwType);
			printf("Subtype of the keyboard: %d\n", rid.keyboard.dwSubType);
		}

		if (rid.dwType == RIM_TYPEHID)
		{
			printf("Vendor Id: %d\n", rid.hid.dwVendorId);
			printf("Product Id: %d\n", rid.hid.dwProductId);
			printf("Version No: %d\n", rid.hid.dwVersionNumber);
			printf("Usage for the device: %d\n", rid.hid.usUsage);
			printf("Usage Page for the device: %d\n", rid.hid.usUsagePage);
		}
		printf("\n***********\n");
	}

	free(rawInputDeviceList);


	return mouse;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	wchar_t buffer[255];
	//swprintf(buffer, L"Msg: %d\n", msg);
	//OutputDebugStringW(buffer);

	//swprintf(buffer, L"WParam: %d\n", wParam);
	//OutputDebugStringW(buffer);


	//swprintf(buffer, L"LParam: %d\n\n", lParam);
	//OutputDebugStringW(buffer);

	switch (msg)
	{
	case WM_CLOSE:
		DestroyWindow(hWnd);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	case WM_INPUT:
	{
		UINT dwSize;

		GetRawInputData((HRAWINPUT)lParam, RID_INPUT, NULL, &dwSize,
			sizeof(RAWINPUTHEADER));
		LPBYTE lpb = new BYTE[dwSize];
		if (lpb == NULL)
		{
			return 0;
		}

		if (GetRawInputData((HRAWINPUT)lParam, RID_INPUT, lpb, &dwSize,
			sizeof(RAWINPUTHEADER)) != dwSize)
			OutputDebugString(TEXT("GetRawInputData does not return correct size !\n"));

		RAWINPUT* raw = (RAWINPUT*)lpb;

		if (raw->header.dwType == RIM_TYPEKEYBOARD)
		{
			swprintf(buffer, L" Kbd: make=%04x Flags:%04x Reserved:%04x ExtraInformation:%08x, msg=%04x VK=%04x \n",
				raw->data.keyboard.MakeCode,
				raw->data.keyboard.Flags,
				raw->data.keyboard.Reserved,
				raw->data.keyboard.ExtraInformation,
				raw->data.keyboard.Message,
				raw->data.keyboard.VKey);
			OutputDebugStringW(buffer);
		}
		else if (raw->header.dwType == RIM_TYPEMOUSE)
		{
			swprintf(buffer, L"Device: %d\n", raw->header.hDevice);
			OutputDebugStringW(buffer);
			swprintf(buffer, L"Mouse: usFlags=%04x ulButtons=%04x usButtonFlags=%04x usButtonData=%04x ulRawButtons=%04x lLastX=%d lLastY=%d ulExtraInformation=%04x\r\n",
				raw->data.mouse.usFlags,
				raw->data.mouse.ulButtons,
				raw->data.mouse.usButtonFlags,
				raw->data.mouse.usButtonData,
				raw->data.mouse.ulRawButtons,
				raw->data.mouse.lLastX,
				raw->data.mouse.lLastY,
				raw->data.mouse.ulExtraInformation);
			OutputDebugStringW(buffer);
		}

		delete[] lpb;
		break;
	}
	default:
		return DefWindowProc(hWnd, msg, wParam, lParam);
	}
	return 0;
}

const int GENERIC_DESKTOP_CONTROLS = 1;
const int GDC_KEYBOARD = 6;
const int GDC_MOUSE = 2;
void ConnectToDevice(RID_DEVICE_INFO mouse, HWND hwnd) {

	RAWINPUTDEVICE devices[1];
	devices[0].usUsagePage = 1;
	devices[0].usUsage = 2;
	devices[0].dwFlags = RIDEV_INPUTSINK;
	devices[0].hwndTarget = hwnd;

	RegisterRawInputDevices(devices, 1, sizeof(devices[0]));
}

HWND InitWindow() {
	WNDCLASSEX wc;
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = 0;
	wc.lpfnWndProc = WndProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = GetModuleHandle(NULL);
	//wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.lpszMenuName = NULL;
	wc.lpszClassName = g_szClassName;
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	if (!RegisterClassEx(&wc)) Error();

	HWND hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,
		g_szClassName,
		"Title",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT, 240, 120,
		NULL, NULL, GetModuleHandle(NULL), NULL);
		//NULL, NULL, hInstance, NULL);

	//ShowWindow(hwnd, nCmdShow);
	//UpdateWindow(hwnd);
	return hwnd;
}

void MessagePump(HWND hwnd) {
	MSG msg;
	while (GetMessage(&msg, hwnd, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}


//int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR pCmdLine, int nCmdShow)
int main()
{

	std::thread thread1([]() {

	HWND hwnd = InitWindow();
	RID_DEVICE_INFO mouse = GetRawInputDevices();
	ConnectToDevice(mouse, hwnd);

	MessagePump(hwnd);
	});
	
	std::thread thread2([]() {
		for (size_t i = 0; true; i++)
		{
		printf("testing %d\n", i);
		}
	});

	std::cin.get();
	return 0;

}
