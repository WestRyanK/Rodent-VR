#pragma once

#ifdef MOVEMENTINPUT_EXPORTS
#define MOVEMENTINPUT_API __declspec(dllexport)
#else
#define MOVEMENTINPUT_API __declspec(dllimport)
#endif

extern "C" MOVEMENTINPUT_API void get_movement_delta(float* out_x, float* out_y);

extern "C" MOVEMENTINPUT_API void configure();

extern "C" MOVEMENTINPUT_API void initialize();

extern "C" MOVEMENTINPUT_API void start();

extern "C" MOVEMENTINPUT_API void stop();
