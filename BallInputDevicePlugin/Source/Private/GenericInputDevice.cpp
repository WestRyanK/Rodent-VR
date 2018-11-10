#include "BallInputDevicePluginPrivatePCH.h"
#include "GenericInputDevice.h"
#include "MovementInput.h"
#include "IInputInterface.h"

FGenericInputDevice::FGenericInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler): MessageHandler(InMessageHandler)
{
	start();
	// Init device here!
}

FGenericInputDevice::~FGenericInputDevice()
{
	stop();
	// Close device here!
}

void FGenericInputDevice::Tick(float DeltaTime)
{
	// Boilerplate
}

void FGenericInputDevice::SendControllerEvents() 
{
	//float x = 0;
	//float y = 0;
	//get_movement_delta(&x, &y);
	//MessageHandler->OnControllerAnalog(FGamepadKeyNames::LeftAnalogX, 0, 1.0);
	// Poll device here and fire events related to state.
	//MessageHandler->OnControllerAnalog(EControllerButtons::LeftTriggerAnalog, 0, 0.0f);
}
	

void FGenericInputDevice::SetMessageHandler(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler)
{
	MessageHandler = InMessageHandler;
}

bool FGenericInputDevice::Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar)
{
	// Boilerplate
	return true;
}

void FGenericInputDevice::SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value)
{
	// Boilerplate
}

void FGenericInputDevice::SetChannelValues(int32 ControllerId, const FForceFeedbackValues &values)
{
	// Boilerplate
}
