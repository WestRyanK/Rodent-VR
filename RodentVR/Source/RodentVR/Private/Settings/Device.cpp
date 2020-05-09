// Fill out your copyright notice in the Description page of Project Settings.


#include "Device.h"

FString UDevice::GetDeviceId()
{
	return this->DeviceId;
}

void UDevice::SetDeviceId(FString DeviceIdValue)
{
	this->DeviceId = DeviceIdValue;
}

FString UDevice::GetDeviceName()
{
	return this->DeviceName;
}

void UDevice::SetDeviceName(FString DeviceNameValue)
{
	this->DeviceName = DeviceNameValue;
}

FString UDevice::GetDevicePort()
{
	return this->DevicePort;
}

void UDevice::SetDevicePort(FString DevicePortValue)
{
	this->DevicePort = DevicePortValue;
}

FString UDevice::GetDeviceLine()
{
	return this->DeviceLine;
}

void UDevice::SetDeviceLine(FString DeviceLineValue)
{
	this->DeviceLine = DeviceLineValue;
}

FString UDevice::GetDevicePath()
{
	return this->DeviceName + "/" + this->DevicePort + "/" + this->DeviceLine;
}
