// Fill out your copyright notice in the Description page of Project Settings.

#include "NIDAQ.h"
#include "Engine/GameEngine.h"
//extern "C"
//{
#include <NIDAQmx.h>
//}

bool UNIDAQ::IsNidaqEnabled = false;

void UNIDAQ::NIDAQ_write_digital(const char* deviceName, unsigned long data)
{
	if (UNIDAQ::IsNidaqEnabled)
	{
		int         error = 0;
		TaskHandle	taskHandle = 0;
		char        errBuff[2048] = { '\0' };
		int32		written;

		//*********************************************
		// DAQmx Configure Code
		//*********************************************
		DAQmxErrChk(DAQmxCreateTask("", &taskHandle));
		DAQmxErrChk(DAQmxCreateDOChan(taskHandle, deviceName, "", DAQmx_Val_ChanForAllLines));

		//*********************************************
		// DAQmx Start Code
		//*********************************************
		DAQmxErrChk(DAQmxStartTask(taskHandle));

		//*********************************************
		// DAQmx Write Code
		//*********************************************
		DAQmxErrChk(DAQmxWriteDigitalU32(taskHandle, 1, 1, 10.0, DAQmx_Val_GroupByChannel, &data, &written, NULL));

	Error:
		if (DAQmxFailed(error))
			DAQmxGetExtendedErrorInfo(errBuff, 2048);
		if (taskHandle != 0) {
			/*********************************************/
			// DAQmx Stop Code
			/*********************************************/
			DAQmxStopTask(taskHandle);
			DAQmxClearTask(taskHandle);
		}
		//if( DAQmxFailed(error) )
			//printf("DAQmx Error: %s\n",errBuff);
	}
}

/**
* This method "initializes" the NIDAQ device.
* The device doesn't really need initializing, but it seems like the first time the
* method is called, the game lags for a second as the DLLs are loading. So, we can just
* call the init_NIDAQ() method right at start up so it doesn't lag in the middle of game play.
*/
void UNIDAQ::init_NIDAQ(bool IsNidaqEnabledValue)
{
	UNIDAQ::IsNidaqEnabled = IsNidaqEnabledValue;

	if (UNIDAQ::IsNidaqEnabled)
	{
		TaskHandle	taskHandle = 0;
		DAQmxCreateTask("", &taskHandle);
		DAQmxStartTask(taskHandle);
		DAQmxStopTask(taskHandle);
		DAQmxClearTask(taskHandle);
	}
}

void UNIDAQ::control_NIDAQ(bool isOn, FString deviceName)
{
	if (UNIDAQ::IsNidaqEnabled)
	{
		unsigned long data;
		if (isOn)
			data = 0xFFFFFFFF;
		else
			data = 0x00000000;
		NIDAQ_write_digital(TCHAR_TO_ANSI(*deviceName), data);
	}
}