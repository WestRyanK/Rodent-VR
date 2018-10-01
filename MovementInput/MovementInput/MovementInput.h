#pragma once

#include <string>
#include <map>

#ifdef MOVEMENTINPUT_EXPORTS
#define MOVEMENTINPUT_API __declspec(dllexport)
#else
#define MOVEMENTINPUT_API __declspec(dllimport)
#endif

/**
	Returns the amount of movement that has been detected since the last
	call to get_movement_delta()
*/
extern "C" MOVEMENTINPUT_API void get_movement_delta(float* out_x, float* out_y);

/**
	Initializes module for reading movement input.
	This component reads movement input by measuring the changes in position measured by
	two optical computer mice placed 90 degrees from each other on the equator of a 
	ball. The mice should be placed such that the Y axis of the device points upward.
	Mouse B should be placed directly behind the rodent, and Mouse A should be placed on the side.

	The component works by reading the Y axis deltas of the two optical mice simultaneously.
	Mouse A's Y delta represents movement in X, while Mouse B's Y delta represents movement in Y.

	The method takes as input a map of configuration parameters. The confiuration parameters that
	are accepted by this module are: "mouse_a_name" and "mouse_b_name".
	The names of the computer mice can be found on Windows by:
	Opening Windows' Device Manager > Selecting a device > Details > Device instance path.
*/
extern "C" MOVEMENTINPUT_API void initialize(std::map<std::wstring, std::wstring> config_params);

/**
	Starts reading from input devices to determine movement.
	Input devices are read on a separate thread and accumulated.
	Call get_movement_delta() to determine how much movement
	has occurred since the last call.
*/
extern "C" MOVEMENTINPUT_API void start();

/**
	Stops reading from input devices and terminates reading thread.
*/
extern "C" MOVEMENTINPUT_API void stop();

/**
	Prints a list of all the RawInput devices connected on the system.
*/
extern "C" MOVEMENTINPUT_API void print_devices(UINT device_types);