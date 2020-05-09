// Fill out your copyright notice in the Description page of Project Settings.


#include "RodentVRSettingsXmlReader.h"


URodentVRSettings* URodentVRSettingsXmlReader::LoadRodentVRSettingsFromFile(FText RodentVRSettingsFileName)
{
	rapidxml::xml_document<>* File = nullptr;

	try
	{
		File = UXmlFileReader::OpenFile(TCHAR_TO_UTF8(*RodentVRSettingsFileName.ToString()));
	}
	catch (rapidxml::parse_error ex)
	{
	}

	URodentVRSettings* Settings = NewObject<URodentVRSettings>();

	if (File != nullptr)
	{
		rapidxml::xml_node<>* SettingsNode = File->first_node("Settings");
		if (SettingsNode != nullptr)
		{
			Settings->SetSettingsFileName(RodentVRSettingsFileName);
			URodentVRSettingsXmlReader::SetBallInput(Settings, SettingsNode);
		}
	}

	return Settings;
}

void URodentVRSettingsXmlReader::SetBallInput(URodentVRSettings* Settings, rapidxml::xml_node<>* SettingsNode)
{
	rapidxml::xml_node<>* BallInputNode = SettingsNode->first_node("BallInput");
	if (BallInputNode != nullptr)
	{
		rapidxml::xml_node<>* MouseANode = BallInputNode->first_node("MouseADevice");
		rapidxml::xml_node<>* MouseBNode = BallInputNode->first_node("MouseBDevice");
		if (MouseANode != nullptr && MouseBNode != nullptr)
		{
			FText MouseADevice = UXmlFileReader::GetTextFromAttribute(MouseANode, "DeviceName", "");
			FText MouseBDevice = UXmlFileReader::GetTextFromAttribute(MouseBNode, "DeviceName", "");
			Settings->SetBallInputMouseADevice(MouseADevice);
			Settings->SetBallInputMouseBDevice(MouseBDevice);

			float MouseAMultiplier = UXmlFileReader::GetFloatFromAttribute(MouseANode, "Multiplier", 0.0);
			float MouseBMultiplier = UXmlFileReader::GetFloatFromAttribute(MouseBNode, "Multiplier", 0.0);
			Settings->SetBallInputMouseAMultiplier(MouseAMultiplier);
			Settings->SetBallInputMouseBMultiplier(MouseBMultiplier);
		}
	}
}

