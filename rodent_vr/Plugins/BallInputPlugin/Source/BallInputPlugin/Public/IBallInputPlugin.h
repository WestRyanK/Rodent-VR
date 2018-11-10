// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModuleManager.h"


/**
 * The public interface to this module
 */
class IBallInputPlugin : public IModuleInterface
{

public:

	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline IBallInputPlugin& Get()
	{
		return FModuleManager::LoadModuleChecked< IBallInputPlugin >( "BallInputPlugin" );
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded( "BallInputPlugin" );
	}

	/**
	* Public Methods
	*/
	// TODO: Change these!
	//virtual void PressButton(int button) {};
	//virtual void ReleaseButton(int button) {};
	//virtual void SetAxisValue(int axisID, float value) {};
};
