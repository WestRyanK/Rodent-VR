#pragma once
#include "ModuleManager.h"

class IBallInputDevicePlugin : public IModuleInterface
{
public:
	static inline IBallInputDevicePlugin& Get()
	{
		return FModuleManager::LoadModuleChecked<IBallInputDevicePlugin>("BallInputDevicePlugin");
	}

	static inline bool IsAvailable() 
	{
		return FModuleManager::Get().IsModuleLoaded("BallInputDevicePlugin");
	}
};
