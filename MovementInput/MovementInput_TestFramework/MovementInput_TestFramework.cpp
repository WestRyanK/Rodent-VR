// MovementInput_TestFramework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include "MovementInput.h"



int main()
{
	MovementInput movement_input(TEXT("MovementInput.dll"));
	movement_input.initialize();
	movement_input.start();
	float x = 0;
	float y = 0;
	while (true)
	{
		movement_input.get_movement_delta(&x, &y);
		if (x != 0 || y != 0)
			printf("x: %f\ty: %f\n", x, y);
	}

    return 0;
}

