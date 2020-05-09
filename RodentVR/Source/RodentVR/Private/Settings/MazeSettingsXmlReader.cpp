// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeSettingsXmlReader.h"
#include "MazeSettingsXmlReader.h"
#include "XmlFileReader.h"
#include "StopConditions/TimeLimitStopCondition.h"
#include "StopConditions/EnterRegionStopCondition.h"
#include "MazeObject.h"
#include <stdexcept>



UMazeSettings* UMazeSettingsXmlReader::LoadMazeFromFile(FText MazeSettingsFileName)
{
	rapidxml::xml_document<>* File = nullptr;

	try
	{
		File = UXmlFileReader::OpenFile(TCHAR_TO_UTF8(*MazeSettingsFileName.ToString()));
	}
	catch (rapidxml::parse_error ex)
	{
	}

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
			UMazeSettingsXmlReader::LoadMazeObjects(MazeSettings, MazeNode);
			UMazeSettingsXmlReader::LoadStopConditions(MazeSettings, MazeNode);
		}
	}

	return MazeSettings;
}

void UMazeSettingsXmlReader::LoadMazeName(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode)
{
	FText MazeName = UXmlFileReader::GetTextFromAttribute(MazeNode, "Name", "");
	MazeSettings->SetMazeName(MazeName);
}

void UMazeSettingsXmlReader::LoadPlayerStart(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode)
{
	rapidxml::xml_node<>* PlayerStartNode = MazeNode->first_node("PlayerStart");

	FVector PlayerStartPosition;
	FRotator PlayerRotation;
	if (PlayerStartNode != nullptr)
	{
		PlayerStartPosition = UXmlFileReader::GetVectorFromNode(PlayerStartNode->first_node("Position"));
		PlayerRotation = UXmlFileReader::GetRotatorFromNode(PlayerStartNode->first_node("Rotation"));
	}

	FTransform PlayerStartTransform(PlayerRotation, PlayerStartPosition, FVector::OneVector);
	MazeSettings->SetPlayerStart(PlayerStartTransform);
}


void UMazeSettingsXmlReader::LoadBehaviorRecordingFileName(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode)
{
	rapidxml::xml_node<>* BehaviorRecordingNode = MazeNode->first_node("BehaviorRecording");

	if (BehaviorRecordingNode != nullptr)
	{
		FText FileName = UXmlFileReader::GetTextFromAttribute(BehaviorRecordingNode, "FileName", "");
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
			FString SlotName = UXmlFileReader::GetTextFromAttribute(TextureNode, "SlotName", "").ToString();
			FString TextureName = UXmlFileReader::GetTextFromAttribute(TextureNode, "TextureName", "").ToString();
			MazeSettings->AddTexture(SlotName, TextureName);
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
			FText MazeObjectTypeText = UXmlFileReader::GetTextFromAttribute(MazeObjectNode, "MazeObjectType", "");
			MazeObjectType MazeObjectType = AMazeObject::GetTypeFromString(MazeObjectTypeText.ToString());
			FVector MazeObjectLocation = UXmlFileReader::GetVectorFromNode(MazeObjectNode->first_node("Position"));
			FRotator MazeObjectRotation = UXmlFileReader::GetRotatorFromNode(MazeObjectNode->first_node("Rotation"));
			FText TextureFileName = UXmlFileReader::GetTextFromAttribute(MazeObjectNode, "TextureName", "");
			bool CanCollide = UXmlFileReader::GetBoolFromAttribute(MazeObjectNode, "CanCollide", false);

			AMazeObject* MazeObject = NewObject<AMazeObject>();
			MazeObject->SetObjectType(MazeObjectType);
			MazeObject->SetActorLocationAndRotation(MazeObjectLocation, MazeObjectRotation);
			MazeObject->SetTextureFileName(TextureFileName);
			MazeObject->SetActorEnableCollision(CanCollide);

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
				UEnterRegionStopCondition* StopCondition = NewObject<UEnterRegionStopCondition>();
				StopCondition->SetEnterRegionDelaySec(EnterRegionDelaySec);

				for (rapidxml::xml_node<>* RegionNode = ConditionNode->first_node("Region"); RegionNode; RegionNode = RegionNode->next_sibling())
				{
					int RegionId = UXmlFileReader::GetIntFromAttribute(RegionNode, "RegionId", 0);
					int EnterRegionCount = UXmlFileReader::GetIntFromAttribute(RegionNode, "EnterRegionCount", 1);

					StopCondition->AddRegionCount(RegionId, EnterRegionCount);
				}

				MazeSettings->AddStopCondition(StopCondition);
			}
		}
	}
}

void UMazeSettingsXmlReader::LoadRegions(UMazeSettings* MazeSettings, rapidxml::xml_node<>* MazeNode)
{
}
