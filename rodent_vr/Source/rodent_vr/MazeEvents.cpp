// Fill out your copyright notice in the Description page of Project Settings.

#include "MazeEvents.h"
#include "Engine/GameEngine.h"
//extern "C"
//{
#include <NIDAQmx.h>
//}

void UMazeEvents::NIDAQWriteDigital(const char* deviceName, unsigned long data)
{
	int         error=0;
	TaskHandle	taskHandle=0;
	char        errBuff[2048]={'\0'};
	int32		written;


	/*********************************************/
	// DAQmx Configure Code
	/*********************************************/
	DAQmxErrChk (DAQmxCreateTask("",&taskHandle));
	DAQmxErrChk (DAQmxCreateDOChan(taskHandle, deviceName,"",DAQmx_Val_ChanForAllLines));

	/*********************************************/
	// DAQmx Start Code
	/*********************************************/
	DAQmxErrChk (DAQmxStartTask(taskHandle));

	/*********************************************/
	// DAQmx Write Code
	/*********************************************/
	DAQmxErrChk (DAQmxWriteDigitalU32(taskHandle,1,1,10.0,DAQmx_Val_GroupByChannel,&data,&written,NULL));
	
Error:
	if( DAQmxFailed(error) )
		DAQmxGetExtendedErrorInfo(errBuff,2048);
	if( taskHandle!=0 ) {
		/*********************************************/
		// DAQmx Stop Code
		/*********************************************/
		DAQmxStopTask(taskHandle);
		DAQmxClearTask(taskHandle);
	}
	if( DAQmxFailed(error) )
		Debug(5.0f, FColor::Red, FString::Printf(TEXT("DAQmx Error: %S\n"),errBuff));
		//printf("DAQmx Error: %s\n",errBuff);
}

void UMazeEvents::ControlNIDAQ(bool isOn, FString deviceName)
{
	unsigned long data;
	if (isOn)
		data = 0xFFFFFFFF;
	else
		data = 0x00000000;
	NIDAQWriteDigital(TCHAR_TO_ANSI(*deviceName), data);
}