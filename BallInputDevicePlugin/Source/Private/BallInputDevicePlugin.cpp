#include "BallInputDevicePluginPrivatePCH.h"
#include "GenericInputDevice.h"
#include "IBallInputDevicePlugin.h"

class FBallInputDevicePlugin : public IBallInputDevicePlugin
{
	virtual TSharedPtr<class IInputDevice> CreateInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler);

	virtual void StartupModule() override;

	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE(FBallInputDevicePlugin, BallInputDevicePlugin )

TSharedPtr<class IInputDevice> FBallInputDevicePlugin::CreateInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler)
{
	UE_LOG(LogTemp, Warning, TEXT("Created BallInput device!"));
	return MakeShareable(new FGenericInputDevice(InMessageHandler));
}

void FBallInputDevicePlugin::StartupModule()
{
	// Custom init logic goes here!

	UE_LOG(LogTemp, Warning, TEXT("BallInputDevicePlugin initiated!"));
	IModularFeatures::Get().RegisterModularFeature(IInputDeviceModule::GetModularFeatureName(), this);
}

void FBallInputDevicePlugin::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("BallInputDevicePlugin shut down!"));
	IModularFeatures::Get().UnregisterModularFeature(IInputDeviceModule::GetModularFeatureName(), this);
}
