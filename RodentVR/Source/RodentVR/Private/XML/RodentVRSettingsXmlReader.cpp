// Fill out your copyright notice in the Description page of Project Settings.


#include "XML/RodentVRSettingsXmlReader.h"
#include "Settings/GraphicsQualityLevels.h"
#include "Math/IntPoint.h"
#include "XML/MazeSettingsXmlReader.h"


URodentVRSettings* URodentVRSettingsXmlReader::LoadRodentVRSettingsFromFile(FString RodentVRSettingsFileName)
{
	rapidxml::xml_document<>* File = nullptr;

	File = UXmlFileReader::OpenFile(TCHAR_TO_UTF8(*RodentVRSettingsFileName));

	URodentVRSettings* Settings = NewObject<URodentVRSettings>();

	if (File != nullptr)
	{
		rapidxml::xml_node<>* SettingsNode = File->first_node("Settings");
		if (SettingsNode != nullptr)
		{
			Settings->SetSettingsFileName(RodentVRSettingsFileName);
			URodentVRSettingsXmlReader::LoadBallInput(Settings, SettingsNode);
			URodentVRSettingsXmlReader::LoadAirPuffers(Settings, SettingsNode);
			URodentVRSettingsXmlReader::LoadRewardDevices(Settings, SettingsNode);
			URodentVRSettingsXmlReader::LoadPlaylist(Settings, SettingsNode);
			URodentVRSettingsXmlReader::LoadGraphics(Settings, SettingsNode);


			bool IsNidaqEnabled = UXmlFileReader::GetBoolFromAttribute(SettingsNode, "IsNidaqEnabled", true);
			Settings->SetIsNidaqEnabled(IsNidaqEnabled);
		}
	}

	return Settings;
}

void URodentVRSettingsXmlReader::LoadBallInput(URodentVRSettings* Settings, rapidxml::xml_node<>* SettingsNode)
{
	rapidxml::xml_node<>* BallInputNode = SettingsNode->first_node("BallInput");
	if (BallInputNode != nullptr)
	{
		rapidxml::xml_node<>* MouseANode = BallInputNode->first_node("MouseADevice");
		rapidxml::xml_node<>* MouseBNode = BallInputNode->first_node("MouseBDevice");
		if (MouseANode != nullptr && MouseBNode != nullptr)
		{
			FString MouseADevice = UXmlFileReader::GetStringFromAttribute(MouseANode, "DeviceName", "");
			FString MouseBDevice = UXmlFileReader::GetStringFromAttribute(MouseBNode, "DeviceName", "");
			Settings->SetBallInputMouseADevice(MouseADevice);
			Settings->SetBallInputMouseBDevice(MouseBDevice);

			float MouseAMultiplier = UXmlFileReader::GetFloatFromAttribute(MouseANode, "Multiplier", 0.0);
			float MouseBMultiplier = UXmlFileReader::GetFloatFromAttribute(MouseBNode, "Multiplier", 0.0);
			Settings->SetBallInputMouseAMultiplier(MouseAMultiplier);
			Settings->SetBallInputMouseBMultiplier(MouseBMultiplier);

			bool MouseAIsOnBack = UXmlFileReader::GetBoolFromAttribute(MouseANode, "IsOnBack", true);
			bool MouseBIsOnRight = UXmlFileReader::GetBoolFromAttribute(MouseBNode, "IsOnRight", true);
			Settings->SetBallInputMouseAIsOnBack(MouseAIsOnBack);
			Settings->SetBallInputMouseBIsOnRight(MouseBIsOnRight);
		}
	}
}

void URodentVRSettingsXmlReader::LoadAirPuffers(URodentVRSettings* Settings, rapidxml::xml_node<>* SettingsNode)
{
	rapidxml::xml_node<>* AirPuffersNode = SettingsNode->first_node("AirPuffers");
	if (AirPuffersNode != nullptr)
	{
		UDevice* LeftAirPuffer = UXmlFileReader::GetDeviceFromNode(AirPuffersNode->first_node("LeftDevice"));
		UDevice* RightAirPuffer = UXmlFileReader::GetDeviceFromNode(AirPuffersNode->first_node("RightDevice"));
		float FrontToleranceAngle = UXmlFileReader::GetFloatFromAttribute(AirPuffersNode, "FrontToleranceAngle", 0.0);
		Settings->SetAirPufferLeftDevice(LeftAirPuffer);
		Settings->SetAirPufferRightDevice(RightAirPuffer);
		Settings->SetAirPufferFrontAngle(FrontToleranceAngle);
	}
}

void URodentVRSettingsXmlReader::LoadRewardDevices(URodentVRSettings* Settings, rapidxml::xml_node<>* SettingsNode)
{
	rapidxml::xml_node<>* RewardDevicesNode = SettingsNode->first_node("RewardDevices");
	if (RewardDevicesNode != nullptr)
	{
		for (rapidxml::xml_node<>* RewardDeviceNode = RewardDevicesNode->first_node("RewardDevice"); RewardDeviceNode; RewardDeviceNode = RewardDeviceNode->next_sibling())
		{
			UDevice* Device = UXmlFileReader::GetDeviceFromNode(RewardDeviceNode);
			Settings->AddRewardDevice(Device);
		}
	}
}

void URodentVRSettingsXmlReader::LoadPlaylist(URodentVRSettings* Settings, rapidxml::xml_node<>* SettingsNode)
{
	rapidxml::xml_node<>* PlaylistNode = SettingsNode->first_node("Playlist");
	if (PlaylistNode != nullptr)
	{
		for (rapidxml::xml_node<>* MazeNode = PlaylistNode->first_node("MazeFile"); MazeNode; MazeNode = MazeNode->next_sibling())
		{
			FString MazeFileName = UXmlFileReader::GetStringFromAttribute(MazeNode, "Path", "");

			UMazeSettings* MazeSettings = Settings->GetMazeFromPlaylistByFileName(MazeFileName);
			if (!IsValid(MazeSettings))
			{
				MazeSettings = UMazeSettingsXmlReader::LoadMazeFromFile(MazeFileName, Settings);
			}

			Settings->AddMaze(MazeSettings);
		}
	}
}

void URodentVRSettingsXmlReader::LoadGraphics(URodentVRSettings* Settings, rapidxml::xml_node<>* SettingsNode)
{
	rapidxml::xml_node<>* GraphicsNode = SettingsNode->first_node("Graphics");
	if (GraphicsNode != nullptr)
	{
		UGraphicsSettings* GraphicsSettings = Settings->GetGraphicsSettings();

		 GraphicsQualityLevels TextureQuality = static_cast<GraphicsQualityLevels>(UXmlFileReader::GetIntFromAttribute(GraphicsNode, "TextureQuality", 0));
		 GraphicsQualityLevels ShadowQuality = static_cast<GraphicsQualityLevels>(UXmlFileReader::GetIntFromAttribute(GraphicsNode, "ShadowQuality", 0));
		 GraphicsQualityLevels AntiAliasingQuality = static_cast<GraphicsQualityLevels>(UXmlFileReader::GetIntFromAttribute(GraphicsNode, "AntiAliasingQuality", 0));
		 GraphicsQualityLevels PostProcessingQuality = static_cast<GraphicsQualityLevels>(UXmlFileReader::GetIntFromAttribute(GraphicsNode, "PostProcessingQuality", 0));
		 int ScreenPercentage = UXmlFileReader::GetIntFromAttribute(GraphicsNode, "ScreenPercentage", 100);
		 int ScreenResolutionX = UXmlFileReader::GetIntFromAttribute(GraphicsNode, "ScreenResolutionX", 1280);
		 int ScreenResolutionY = UXmlFileReader::GetIntFromAttribute(GraphicsNode, "ScreenResolutionY", 720);
		 FIntPoint ScreenResolution = FIntPoint(ScreenResolutionX, ScreenResolutionY);

		 GraphicsSettings->SetTextureQuality(TextureQuality);
		 GraphicsSettings->SetShadowQuality(ShadowQuality);
		 GraphicsSettings->SetAntiAliasingQuality(AntiAliasingQuality);
		 GraphicsSettings->SetPostProcessingQuality(PostProcessingQuality);
		 GraphicsSettings->SetScreenPercentage(ScreenPercentage);
		 GraphicsSettings->SetScreenResolution(ScreenResolution);
	}
}
