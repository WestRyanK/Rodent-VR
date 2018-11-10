#pragma once
#include "IInputDevice.h"

class FGenericInputDevice : public IInputDevice
{
public:
	FGenericInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler);
	~FGenericInputDevice();

	virtual void Tick(float DeltaTime) override;

	virtual void SendControllerEvents() override;

	virtual void SetMessageHandler(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler) override;

	virtual bool Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;

	virtual void SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value) override;

	virtual void SetChannelValues(int32 ControllerId, const FForceFeedbackValues &values) override;

private:
	TSharedRef<FGenericApplicationMessageHandler> MessageHandler;

};

