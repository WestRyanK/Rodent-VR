// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeSettingsXmlWriter.h"
#include "MazeObjectSettings.h"
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
	UXmlFileWriter::AddVectorNode(Document, PlayerStartNode, "Position", MazeSettings->GetPlayerStart().GetLocation(), true);
	UXmlFileWriter::AddRotatorNode(Document, PlayerStartNode, "Rotation", MazeSettings->GetPlayerStart().Rotator(), true);
}

void UMazeSettingsXmlWriter::SaveTextures(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings)
{
	rapidxml::xml_node<>* TexturesNode = UXmlFileWriter::AddNode(Document, Root, "Textures");
	for (auto Pair : MazeSettings->GetTextures())
	{
		rapidxml::xml_node<>* TextureNode = UXmlFileWriter::AddNode(Document, TexturesNode, "Texture");
		UXmlFileWriter::AddStringAttribute(Document, TextureNode, "SlotName", Pair.Key);
		UXmlFileWriter::AddStringAttribute(Document, TextureNode, "TextureName", Pair.Value);
	}
}

void UMazeSettingsXmlWriter::SaveRegions(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings)
{
	rapidxml::xml_node<>* RegionsNode = UXmlFileWriter::AddNode(Document, Root, "Regions");
	UXmlFileWriter::AddBoolAttribute(Document, RegionsNode, "AreRegionsVisible", MazeSettings->GetAreRegionsVisible());
	//for (URegion* Region : MazeSettings->GetRegions())
	//{
	//}
}

void UMazeSettingsXmlWriter::SaveMazeObjects(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings)
{
	rapidxml::xml_node<>* MazeObjectsNode = UXmlFileWriter::AddNode(Document, Root, "MazeObjects");
	for (UMazeObjectSettings* MazeObject : MazeSettings->GetMazeObjects())
	{
		rapidxml::xml_node<>* MazeObjectNode = UXmlFileWriter::AddNode(Document, MazeObjectsNode, "MazeObject");
		UXmlFileWriter::AddStringAttribute(Document, MazeObjectNode, "MazeObjectType", MazeObject->GetObjectTypeString());
		if (MazeObject->GetTextureFileName() != TEXT(""))
		{
			UXmlFileWriter::AddStringAttribute(Document, MazeObjectNode, "TextureName", MazeObject->GetTextureFileName());
		}
		UXmlFileWriter::AddBoolAttribute(Document, MazeObjectNode, "CanCollide", MazeObject->GetCanCollide());
		UXmlFileWriter::AddVectorNode(Document, MazeObjectNode, "Position", MazeObject->GetPosition(), true);
		UXmlFileWriter::AddRotatorNode(Document, MazeObjectNode, "Rotation", MazeObject->GetRotation(), false);
		UXmlFileWriter::AddVectorNode(Document, MazeObjectNode, "Scale", MazeObject->GetScale(), true);
	}
}

void UMazeSettingsXmlWriter::SaveStopConditions(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Root, UMazeSettings* MazeSettings)
{
	rapidxml::xml_node<>* StopConditionsNode = UXmlFileWriter::AddNode(Document, Root, "MazeObjects");
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

			for (auto Pair : EnterRegionStopCondition->GetEnterRegionCounts())
			{
				rapidxml::xml_node<>* RegionNode = UXmlFileWriter::AddNode(Document, StopConditionNode, "Region");
				UXmlFileWriter::AddIntAttribute(Document, RegionNode, "RegionId", Pair.Key);
				UXmlFileWriter::AddIntAttribute(Document, RegionNode, "EnterRegionCount", Pair.Value);
			}
		}
	}
}
