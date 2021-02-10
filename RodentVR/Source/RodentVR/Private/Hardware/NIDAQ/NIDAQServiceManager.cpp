// Fill out your copyright notice in the Description page of Project Settings.


#include "NIDAQServiceManager.h"

TArray<FString> UNIDAQServiceManager::NidaqServices = { TEXT("NIApplicationWebServer64"), TEXT("niauth"), TEXT("mxssvr"), TEXT("nidevldu"), TEXT("NIDomainService"), TEXT("nimDNSResponder"), TEXT("NINetworkDiscovery"), TEXT("lkClassAds"), TEXT("nipxicmsvc"), TEXT("nipxirmu"), TEXT("niroco"), TEXT("NiSvcLoc"), TEXT("nisds"), TEXT("NISystemWebServer"), TEXT("NITaggerService") };


bool UNIDAQServiceManager::GetAreAllNidaqServicesRunning()
{
	for (FString service : UNIDAQServiceManager::NidaqServices)
	{
		ServiceStatus result = UNIDAQServiceManager::GetServiceStatus(service);
		if (result != ServiceStatus::STATUS_RUNNING)
		{
			return false;
		}
	}
	return true;
}

bool UNIDAQServiceManager::StartAllNidaqServices()
{
	for (FString service : UNIDAQServiceManager::NidaqServices)
	{
		ServiceStatus result = UNIDAQServiceManager::StartWindowsService(service);
		if (result != ServiceStatus::STATUS_RUNNING && result != ServiceStatus::STATUS_ALREADY_RUNNING)
		{
			return false;
		}
	}
	return true;
}

LPCWSTR UNIDAQServiceManager::ConvertString(FString stringValue)
{
	std::string stringValueTemp1 = std::string(TCHAR_TO_UTF8(*stringValue));
	std::wstring stringValueTemp2 = std::wstring(stringValueTemp1.begin(), stringValueTemp1.end());
	wchar_t* stringValueConverted = new wchar_t[stringValueTemp1.length() + 1];
	wcsncpy_s(stringValueConverted, stringValueTemp1.length() + 1, stringValueTemp2.c_str(), stringValueTemp1.length() + 1);
	return stringValueConverted;
}

ServiceStatus UNIDAQServiceManager::StartWindowsService(FString serviceName)
{
	SC_HANDLE serviceManager = OpenSCManager(nullptr, nullptr, SC_MANAGER_ALL_ACCESS);
	if (serviceManager == nullptr) 
	{
		int error = GetLastError();
		//printf("OpenSCManager failed (%d)\n", error);

		if (error == 6)
		{
			return ServiceStatus::STATUS_PERMISSIONS_ERROR;
		}
		return ServiceStatus::STATUS_FAILED;
	}

	LPCWSTR serviceNameConverted = ConvertString(serviceName);
	SC_HANDLE service = OpenService(serviceManager, serviceNameConverted, SERVICE_ALL_ACCESS);
	delete serviceNameConverted;
	int result = StartService(service, 0, NULL);
	if (!result)
	{
		int error = GetLastError();
        //printf("StartService failed (%d)\n", GetLastError());
        CloseServiceHandle(service); 
        CloseServiceHandle(serviceManager);
		if (error == 1056)
		{
			return ServiceStatus::STATUS_ALREADY_RUNNING;
		}

        return ServiceStatus::STATUS_FAILED; 
	}

	return ServiceStatus::STATUS_RUNNING;
}

ServiceStatus UNIDAQServiceManager::GetServiceStatus(FString serviceName)
{
	SC_HANDLE serviceManager = OpenSCManager(nullptr, nullptr, SC_MANAGER_ENUMERATE_SERVICE);
	if (serviceManager == nullptr) 
	{
		//printf("OpenSCManager failed (%d)\n", GetLastError());
		return ServiceStatus::STATUS_FAILED;
	}

	LPCWSTR serviceNameConverted = ConvertString(serviceName);
	SC_HANDLE service = OpenService(serviceManager, serviceNameConverted, SERVICE_QUERY_STATUS);
	delete serviceNameConverted;
	if (service == nullptr)
	{
		CloseServiceHandle(serviceManager);
		return ServiceStatus::STATUS_NONEXISTENT;
	}

	SERVICE_STATUS serviceStatus;
	bool result = QueryServiceStatus(service, &serviceStatus);
	CloseServiceHandle(service);
	CloseServiceHandle(serviceManager);
	if (result == 0)
	{
		return ServiceStatus::STATUS_FAILED;
	}

	// https://docs.microsoft.com/en-us/windows/win32/api/winsvc/ns-winsvc-service_status_process
	if (serviceStatus.dwCurrentState == SERVICE_RUNNING)
	{
		return ServiceStatus::STATUS_RUNNING;
	}
	else
	{
		return ServiceStatus::STATUS_NOT_RUNNING;
	}
}
