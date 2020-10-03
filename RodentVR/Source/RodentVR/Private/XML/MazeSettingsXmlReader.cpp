// Fill out your copyright notice in the Description page of Project Settings.


#include "XML/MazeSettingsXmlReader.h"
#include "XML/XmlFileReader.h"
#include "StopConditions/TimeLimitStopCondition.h"
#include "StopConditions/EnterRegionStopCondition.h"
#include "Settings/ActorSettings.h"
#include "Settings/StartPositionSettings.h"
#include "Settings/RegionSettings.h"
#include "Settings/RodentVRSettings.h"
#include "Settings/MazeObjectType.h"
#include "Settings/MazeObjectTypeHelper.h"
#include "Settings/MazeObjectSettings.h"



UMazeSettings* UMazeSettingsXmlReader::LoadMazeFromFile(FString MazeSettingsFileName, URodentVRSettings* RodentVRSettings)
{
	rapidxml::xml_document<>* File = nullptr;

	File = UXmlFileReader::OpenFile(TCHAR_TO_UTF8(*MazeSettingsFileName));

	UMazeSettings* MazeSettings = NewObject<UMazeSettings>();

	if (File != nullptr)
	{
		rapidxml::xml_node<>* MazeNode = File->first_node("Maze");
		if (MazeNode != nullptr)
		{
			MazeSettings->SetMazeSettingsFileName(MazeSettingsFileName);
			UMazeSettingsXmlReader::LoadMazeName(MazeSettings, MazeNode);
			UMazeSettingsXmlReader::LoadPlayerStart(MazeSettings, MazeNode);
			UMazeSettingsXmlReader::LoadBehaviorRecordingFileName(MazeSettings, MazeNode);
			UMazeSettingsXmlReader::LoadTextures(MazeSettings, MazeNode);
			UMazeSettingsXmlReader::LoadRegions(MazeSettings, MazeNode, RodentVRSettings);
			UMazeSettingsXmlReader::LoadMazeObjects(MazeSettings, MazeNode);
			UMazeSettingsXmlReader::LoadStopConditions(MazeSettings, MazeNode);
		}
	}

	return MazeSettings;
}

void UMazeSettingsXmlReader::LoadMazeName(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode)
{
	FString MazeName = UXmlFileReader::GetStringFromAttribute(MazeNode, "Name", "");
	MazeSettings->SetMazeName(MazeName);
}

void UMazeSettingsXmlReader::LoadPlayerStart(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode)
{
	rapidxml::xml_node<>* PlayerStartNode = MazeNode->first_node("PlayerStart");

	UStartPositionSettings* StartPosition = NewObject<UStartPositionSettings>();
	if (PlayerStartNode != nullptr)
	{
		UXmlFileReader::GetActorSettingsFromNode(PlayerStartNode, StartPosition);
	}

	MazeSettings->SetPlayerStart(StartPosition);
}


void UMazeSettingsXmlReader::LoadBehaviorRecordingFileName(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode)
{
	rapidxml::xml_node<>* BehaviorRecordingNode = MazeNode->first_node("BehaviorRecording");

	if (BehaviorRecordingNode != nullptr)
	{
		FString FileName = UXmlFileReader::GetStringFromAttribute(BehaviorRecordingNode, "FileName", "");
		MazeSettings->SetBehaviorRecordingFileName(FileName);
	}

}

void UMazeSettingsXmlReader::LoadTextures(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode)
{
	rapidxml::xml_node<>* TexturesNode = MazeNode->first_node("Textures");
	if (TexturesNode != nullptr)
	{
		for (rapidxml::xml_node<>* TextureNode = TexturesNode->first_node(); TextureNode; TextureNode = TextureNode->next_sibling())
		{
			FString SlotName = UXmlFileReader::GetStringFromAttribute(TextureNode, "SlotName", "");
			UTextureSettings* TextureSettings = UXmlFileReader::GetTextureSettingsFromNode(TextureNode);
			MazeSettings->AddTexture(SlotName, TextureSettings);
		}
	}
}

void UMazeSettingsXmlReader::LoadMazeObjects(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode)
{
	rapidxml::xml_node<>* MazeObjectsNode = MazeNode->first_node("MazeObjects");
	if (MazeObjectsNode != nullptr)
	{
		for (rapidxml::xml_node<>* MazeObjectNode = MazeObjectsNode->first_node(); MazeObjectNode; MazeObjectNode = MazeObjectNode->next_sibling())
		{
			FString MazeObjectTypeString = UXmlFileReader::GetStringFromAttribute(MazeObjectNode, "MazeObjectType", "");
			MazeObjectType MazeObjectType = UMazeObjectTypeHelper::StringToObjectType(MazeObjectTypeString);
			UTextureSettings* TextureSettings = UXmlFileReader::GetTextureSettingsFromNode(MazeObjectNode->first_node("Texture"));
			bool CanCollide = UXmlFileReader::GetBoolFromAttribute(MazeObjectNode, "CanCollide", false);

			UMazeObjectSettings* MazeObject = NewObject<UMazeObjectSettings>();
			MazeObject->SetObjectType(MazeObjectType);
			MazeObject->SetTexture(TextureSettings);
			MazeObject->SetCanCollide(CanCollide);

			UXmlFileReader::GetActorSettingsFromNode(MazeObjectNode, MazeObject);

			MazeSettings->AddMazeObject(MazeObject);
		}
	}
}

void UMazeSettingsXmlReader::LoadStopConditions(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode)
{
	rapidxml::xml_node<>* StopConditionsNode = MazeNode->first_node("StopConditions");
	if (StopConditionsNode != nullptr)
	{
		for (rapidxml::xml_node<>* ConditionNode = StopConditionsNode->first_node(); ConditionNode; ConditionNode = ConditionNode->next_sibling())
		{
			std::string ConditionType = ConditionNode->first_attribute("ConditionType")->value();
			if (ConditionType == "TimeLimit")
			{
				float TimeLimitSec = UXmlFileReader::GetFloatFromAttribute(ConditionNode, "TimeLimitSec", 0.0);
				UTimeLimitStopCondition* StopCondition = NewObject<UTimeLimitStopCondition>();
				StopCondition->SetTimeLimitSec(TimeLimitSec);
				MazeSettings->AddStopCondition(StopCondition);
			}
			else if (ConditionType == "EnterRegion")
			{
				float EnterRegionDelaySec = UXmlFileReader::GetFloatFromAttribute(ConditionNode, "EnterRegionDelaySec", 0.0);
				bool RequireAllConditions = UXmlFileReader::GetBoolFromAttribute(ConditionNode, "RequireAllConditions", true);
				UEnterRegionStopCondition* StopCondition = NewObject<UEnterRegionStopCondition>();
				StopCondition->SetEnterRegionDelaySec(EnterRegionDelaySec);
				StopCondition->SetRequireAllConditions(RequireAllConditions);

				for (rapidxml::xml_node<>* RegionNode = ConditionNode->first_node("Region"); RegionNode; RegionNode = RegionNode->next_sibling())
				{
					FString RegionId = UXmlFileReader::GetStringFromAttribute(RegionNode, "RegionId", "");
					URegionSettings* RegionSettings = MazeSettings->GetRegionById(RegionId);
					int EnterRegionCount = UXmlFileReader::GetIntFromAttribute(RegionNode, "EnterRegionCount", 1);

					StopCondition->AddRegionStopConditionCount(RegionSettings, EnterRegionCount);
				}

				MazeSettings->AddStopCondition(StopCondition);
			}
		}
	}
}

void UMazeSettingsXmlReader::LoadRegions(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode, URodentVRSettings* RodentVRSettings)
{
	rapidxml::xml_node<>* RegionsNode = MazeNode->first_node("Regions");
	if (RegionsNode != nullptr)
	{
		for (rapidxml::xml_node<>* RegionNode = RegionsNode->first_node(); RegionNode; RegionNode = RegionNode->next_sibling())
		{
			bool IsRewardDispensingEnabled = UXmlFileReader::GetBoolFromAttribute(RegionNode, "IsRewardDispensingEnabled", true);
			float RewardDeviceDispensingDurationSec = UXmlFileReader::GetFloatFromAttribute(RegionNode, "RewardDeviceDispensingDurationSec", 1.0f);
			UToneGenerationSettings* ToneGenerationSettings = UXmlFileReader::GetToneGenerationSettingsFromNode(RegionNode->first_node("ToneGeneration"));
			bool IsNosePoke = UXmlFileReader::GetBoolFromAttribute(RegionNode, "IsNosePoke", false);
			FString DeviceId = UXmlFileReader::GetStringFromAttribute(RegionNode, "DeviceId", "");
			FString RegionId = UXmlFileReader::GetStringFromAttribute(RegionNode, "RegionId", "");
			UDevice* Device = RodentVRSettings->GetRewardDeviceById(DeviceId);

			URegionSettings* Region = NewObject<URegionSettings>();
			Region->SetRegionId(RegionId);
			Region->SetIsRewardDispensingEnabled(IsRewardDispensingEnabled);
			Region->SetRewardDeviceDispensingDurationSec(RewardDeviceDispensingDurationSec);
			Region->SetToneGenerationSettings(ToneGenerationSettings);
			Region->SetRewardDevice(Device);
			Region->SetIsNosePoke(IsNosePoke);
			UXmlFileReader::GetActorSettingsFromNode(RegionNode, Region);


			MazeSettings->AddRegionSettings(Region);
		}
	}
}
