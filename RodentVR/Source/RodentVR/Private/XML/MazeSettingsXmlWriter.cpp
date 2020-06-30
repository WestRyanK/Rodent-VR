// Fill out your copyright notice in the Description page of Project Settings.


#include "XML/MazeSettingsXmlWriter.h"
#include "Settings/MazeObjectSettings.h"
#include "StopConditions/EnterRegionStopCondition.h"
#include "StopConditions/TimeLimitStopCondition.h"

void UMazeSettingsXmlWriter::SaveMazeSettings(UMazeSettings* MazeSettings)
{
	rapidxml::xml_document<>* Document = UXmlFileWriter::CreateDocument("Maze");
	rapidxml::xml_node<>* Root = Document->first_node();
	UXmlFileWriter::AddStringAttribute(Document, Root, "Name", MazeSettings->GetMazeName());

	UMazeSettingsXmlWriter::SaveBehaviorRecording(Document, Root, MazeSettings);
	UMazeSettingsXmlWriter::SavePlayerStart(Document, Root, MazeSettings);
	UMazeSettingsXmlWriter::SaveTextures(Document, Root, MazeSettings);
	UMazeSettingsXmlWriter::SaveRegions(Document, Root, MazeSettings);
	UMazeSettingsXmlWriter::SaveMazeObjects(Document, Root, MazeSettings);
	UMazeSettingsXmlWriter::SaveStopConditions(Document, Root, MazeSettings);


	UXmlFileWriter::SaveFile(Document, TCHAR_TO_UTF8(*MazeSettings->GetMazeSettingsFileName()));
}

void UMazeSettingsXmlWriter::SaveBehaviorRecording(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings)
{
	rapidxml::xml_node<>* BehaviorRecordingNode = UXmlFileWriter::AddNode(Document, Root, "BehaviorRecording");
	UXmlFileWriter::AddStringAttribute(Document, BehaviorRecordingNode, "Filename", MazeSettings->GetBehaviorRecordingFileName());
}

void UMazeSettingsXmlWriter::SavePlayerStart(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings)
{
	rapidxml::xml_node<>* PlayerStartNode = UXmlFileWriter::AddNode(Document, Root, "PlayerStart");
	UXmlFileWriter::AddActorSettingsToNode(Document, PlayerStartNode, MazeSettings->GetPlayerStart());
}

void UMazeSettingsXmlWriter::SaveTextures(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings)
{
	rapidxml::xml_node<>* TexturesNode = UXmlFileWriter::AddNode(Document, Root, "Textures");
	for (auto Pair : MazeSettings->GetTextures())
	{

		rapidxml::xml_node<>* TextureNode = UXmlFileWriter::AddTextureNode(Document, TexturesNode, "Texture", Pair.Value);
		UXmlFileWriter::AddStringAttribute(Document, TextureNode, "SlotName", Pair.Key);
	}
}

void UMazeSettingsXmlWriter::SaveRegions(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings)
{
	rapidxml::xml_node<>* RegionsNode = UXmlFileWriter::AddNode(Document, Root, "Regions");
	for (URegionSettings* Region : MazeSettings->GetRegionSettings())
	{
		rapidxml::xml_node<>* RegionNode = UXmlFileWriter::AddNode(Document, RegionsNode, "Region");
		UXmlFileWriter::AddActorSettingsToNode(Document, RegionNode, Region);
		UXmlFileWriter::AddStringAttribute(Document, RegionNode, "RegionId", Region->GetRegionId());
		UXmlFileWriter::AddBoolAttribute(Document, RegionNode, "IsRewardDispensingEnabled", Region->GetIsRewardDispensingEnabled());
		UXmlFileWriter::AddFloatAttribute(Document, RegionNode, "RewardDeviceDispensingDurationSec", Region->GetRewardDeviceDispensingDurationSec());
		UXmlFileWriter::AddToneGenerationSettingsNode(Document, RegionNode, "ToneGeneration", Region->GetToneGenerationSettings());
		UXmlFileWriter::AddBoolAttribute(Document, RegionNode, "IsNosePoke", Region->GetIsNosePoke());
		FString DeviceId = TEXT("");
		UDevice* Device = Region->GetRewardDevice();
		if (IsValid(Device))
		{
			DeviceId = Device->GetDeviceId();
		}
		UXmlFileWriter::AddStringAttribute(Document, RegionNode, "DeviceId", DeviceId);
	}
}

void UMazeSettingsXmlWriter::SaveMazeObjects(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings)
{
	rapidxml::xml_node<>* MazeObjectsNode = UXmlFileWriter::AddNode(Document, Root, "MazeObjects");
	for (UMazeObjectSettings* MazeObject : MazeSettings->GetMazeObjects())
	{
		rapidxml::xml_node<>* MazeObjectNode = UXmlFileWriter::AddNode(Document, MazeObjectsNode, "MazeObject");
		UXmlFileWriter::AddStringAttribute(Document, MazeObjectNode, "MazeObjectType", MazeObject->GetObjectTypeString());
		UXmlFileWriter::AddTextureNode(Document, MazeObjectNode, "Texture", MazeObject->GetTexture());
		UXmlFileWriter::AddBoolAttribute(Document, MazeObjectNode, "CanCollide", MazeObject->GetCanCollide());
		UXmlFileWriter::AddActorSettingsToNode(Document, MazeObjectNode, MazeObject);
	}
}

void UMazeSettingsXmlWriter::SaveStopConditions(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings)
{
	rapidxml::xml_node<>* StopConditionsNode = UXmlFileWriter::AddNode(Document, Root, "StopConditions");
	for (UStopCondition* StopCondition : MazeSettings->GetStopConditions())
	{
		rapidxml::xml_node<>* StopConditionNode = UXmlFileWriter::AddNode(Document, StopConditionsNode, "Condition");
		FString ConditionType = StopCondition->GetConditionType();
		UXmlFileWriter::AddStringAttribute(Document, StopConditionNode, "ConditionType", ConditionType);

		if (ConditionType == TEXT("TimeLimit"))
		{
			UTimeLimitStopCondition* TimeLimitStopCondition = (UTimeLimitStopCondition*)StopCondition;
			UXmlFileWriter::AddFloatAttribute(Document, StopConditionNode, "TimeLimitSec", TimeLimitStopCondition->GetTimeLimitSec());
		}
		else if (ConditionType == TEXT("EnterRegion"))
		{
			UEnterRegionStopCondition* EnterRegionStopCondition = (UEnterRegionStopCondition*)StopCondition;
			UXmlFileWriter::AddFloatAttribute(Document, StopConditionNode, "EnterRegionDelaySec", EnterRegionStopCondition->GetEnterRegionDelaySec());
			UXmlFileWriter::AddBoolAttribute(Document, StopConditionNode, "RequireAllConditions", EnterRegionStopCondition->GetRequireAllConditions());

			for (auto Pair : EnterRegionStopCondition->GetEnterRegionStopConditionCounts())
			{
				rapidxml::xml_node<>* RegionNode = UXmlFileWriter::AddNode(Document, StopConditionNode, "Region");
				FString RegionId = TEXT("");
				if (IsValid(Pair.Key))
				{
					RegionId = Pair.Key->GetRegionId();
				}
				UXmlFileWriter::AddStringAttribute(Document, RegionNode, "RegionId", RegionId);
				UXmlFileWriter::AddIntAttribute(Document, RegionNode, "EnterRegionCount", Pair.Value);
			}
		}
	}
}
