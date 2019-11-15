// Fill out your copyright notice in the Description page of Project Settings.

#include "Window.h"
#include "Engine/GameEngine.h"
#define Debug(time, color, x) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, time, color, x);}

Window* Window::Instance = NULL;
//HMODULE module_handle = NULL;

Window* Window::GetInstance()
{
	if (Window::Instance == NULL)
	{
		Window::Instance = new Window();
	}
	return Window::Instance;
}

HMODULE GetCurrentModule()
{
  HMODULE hModule = NULL;
  GetModuleHandleEx(
    GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS,
    (LPCTSTR)GetCurrentModule,
    &hModule);

  return hModule;
}

Window::Window()
{
	this->ModuleHandle = GetCurrentModule();

	this->IsRunning = false;
}

LRESULT CALLBACK WndProc(HWND Hwnd, unsigned int Msg, WPARAM Wparam, LPARAM Lparam)
{
	Debug(1.0f, FColor::Green, TEXT("WndProc"));
	switch (Msg)
	{
	case WM_CLOSE:
		DestroyWindow(Hwnd);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		Window::GetInstance()->HandleMessage(Msg, Wparam, Lparam);
		return DefWindowProc(Hwnd, Msg, Wparam, Lparam);
	}
	return 0;
}

void Window::Init()
{
	WNDCLASSEX wc = { };
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = 0;
	wc.lpfnWndProc = WndProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = this->ModuleHandle;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.lpszMenuName = NULL;
	wc.lpszClassName = this->G_szClassName;
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

	if (!RegisterClassEx(&wc))
		printf("Unable to register class!");

	this->Hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,
		this->G_szClassName,
		L"Title",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT, 640, 640,
		NULL, NULL, this->ModuleHandle, NULL);
}

void Window::StopMessagePump()
{
	this->IsRunningMutex.lock();
	this->IsRunning = false;
	this->IsRunningMutex.unlock();
}

void Window::PumpMessages()
{
	if (this->Hwnd != NULL)
		SendMessage(this->Hwnd, WM_DESTROY, NULL, NULL);

	this->Init();
	if (this->PostInitFunc != NULL)
		this->PostInitFunc(this->Hwnd);

	// We want to lock around the while loop's condition checking...
	this->IsRunningMutex.lock();
	this->IsRunning = true;

	//MSG msg;
	// TODO: GetMessage stops working when you click on the window?...
	while (this->IsRunning)// && GetMessage(&msg, this->hwnd, 0, 0))
	{
		Sleep(500);
		this->IsRunningMutex.unlock();

		Debug(1.0f, FColor::Green, TEXT("Pump Messages"));
		//TranslateMessage(&msg);
		//DispatchMessage(&msg);

		this->IsRunningMutex.lock();
	}

	this->IsRunningMutex.unlock();
}

void Window::StartMessagePumpAsync()
{
	if (!this->IsRunning)
	{
		//this->pump_messages();
		MessagePumpThread = new std::thread([&]() { this->PumpMessages(); });
	}
}

void Window::StartMessagePump()
{
	if (!this->IsRunning)
	{
		 this->PumpMessages(); 
	}
}

bool Window::GetIsRunning()
{
	return this->IsRunning;
}

void Window::HandleMessage(unsigned int msg, WPARAM wparam, LPARAM lparam)
{
	if (this->MessageHandlerFunc != NULL)
		this->MessageHandlerFunc(msg, wparam, lparam);
}

void Window::SetMessageHandler(std::function<void(unsigned int, WPARAM, LPARAM)> message_handler)
{
	this->MessageHandlerFunc = message_handler;
}

void Window::SetPostInit(std::function<void(HWND)> post_init)
{
	this->PostInitFunc = post_init;
}

HWND Window::GetWindowHandle()
{
	return this->Hwnd;
}
