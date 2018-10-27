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

const float MIN_FRONT_ANGLE = 20.0f;
void UMazeEvents::PuffAir(float puff_angle_degrees)
{

	unsigned long data;
	if (puff_angle_degrees < -MIN_FRONT_ANGLE)
	{
		Debug(0.01f, FColor::Red, TEXT("Right"));
		data = 0xFFFFFFFF;
		NIDAQWriteDigital("Dev1/port1/line0", data);
	}
	else if (puff_angle_degrees > MIN_FRONT_ANGLE)
	{
		Debug(0.01f, FColor::Red, TEXT("Left"));
		data = 0xFFFFFFFF;
		NIDAQWriteDigital("Dev1/port1/line1", data);
	}
	else
	{
		Debug(0.01f, FColor::Red, TEXT("Front"));
		data = 0xFFFFFFFF;
		NIDAQWriteDigital("Dev1/port1/line0:1", data);
	}

		data = 0x00000000;
		NIDAQWriteDigital("Dev1/port1/line0:1", data);

	Debug(0.01f, FColor::Red, FString::Printf(TEXT("Puff! %f"), puff_angle_degrees));
} 