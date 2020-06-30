// Fill out your copyright notice in the Description page of Project Settings.


#include "XML/XmlFileWriter.h"
#include "XML/RapidXML/rapidxml_print.hpp"
#include "fstream"

rapidxml::xml_document<>* UXmlFileWriter::CreateDocument(std::string RootNodeName)
{
	rapidxml::xml_document<>* Document = new rapidxml::xml_document<>();
	//rapidxml::xml_node<>* Declaration = Document->allocate_node(rapidxml::node_declaration);
	//Declaration->append_attribute(Document->allocate_attribute("version", "1.0"));
	//Declaration->append_attribute(Document->allocate_attribute("encoding", "utf-8"));
	//Document->append_node(Declaration);

	char* RootName = Document->allocate_string(RootNodeName.c_str());
	rapidxml::xml_node<>* Root = Document->allocate_node(rapidxml::node_element, RootName);
	Document->append_node(Root);

	return Document;
}

rapidxml::xml_node<>* UXmlFileWriter::AddNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName)
{
	char* NodeNameString = Document->allocate_string(NodeName.c_str());
	rapidxml::xml_node<>* Node = Document->allocate_node(rapidxml::node_element, NodeNameString);
	ParentNode->append_node(Node);
	return Node;
}

void UXmlFileWriter::AddAttribute(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, std::string AttributeName, std::string AttributeValue)
{
	char* AttributeNameString = Document->allocate_string(AttributeName.c_str());
	char* AttributeValueString = Document->allocate_string(AttributeValue.c_str());
	Node->append_attribute(Document->allocate_attribute(AttributeNameString, AttributeValueString));
}

void UXmlFileWriter::AddFloatAttribute(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, std::string AttributeName, float AttributeValue)
{
	UXmlFileWriter::AddAttribute(Document, Node, AttributeName, std::to_string(AttributeValue));
}

void UXmlFileWriter::AddIntAttribute(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, std::string AttributeName, int AttributeValue)
{
	UXmlFileWriter::AddAttribute(Document, Node, AttributeName, std::to_string(AttributeValue));
}

void UXmlFileWriter::AddBoolAttribute(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, std::string AttributeName, bool AttributeValue)
{
	std::string BoolString = "false";
	if (AttributeValue)
	{
		BoolString = "true";
	}
	UXmlFileWriter::AddAttribute(Document, Node, AttributeName, BoolString);
}

void UXmlFileWriter::AddStringAttribute(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, std::string AttributeName, FString AttributeValue)
{
	UXmlFileWriter::AddAttribute(Document, Node, AttributeName, std::string(TCHAR_TO_UTF8(*AttributeValue)));
}

void UXmlFileWriter::AddToneGenerationSettingsNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName, UToneGenerationSettings* ToneGenerationSettings)
{
	rapidxml::xml_node<>* Node = UXmlFileWriter::AddNode(Document, ParentNode, NodeName);
	bool IsToneGenerationEnabled = false;
	float ToneDurationSec = 1.0f;
	float TonePitchHz = 440.0f;
	float ToneVolumePercent = 1.0f;
	if (IsValid(ToneGenerationSettings))
	{
		IsToneGenerationEnabled = ToneGenerationSettings->GetIsToneGenerationEnabled();
		ToneDurationSec = ToneGenerationSettings->GetToneDurationSec();
		TonePitchHz = ToneGenerationSettings->GetTonePitchHz();
		ToneVolumePercent = ToneGenerationSettings->GetToneVolumePercent();
	}
	UXmlFileWriter::AddBoolAttribute(Document, Node, "IsToneGenerationEnabled", IsToneGenerationEnabled);
	UXmlFileWriter::AddFloatAttribute(Document, Node, "ToneDurationSec", ToneDurationSec);
	UXmlFileWriter::AddFloatAttribute(Document, Node, "TonePitchHz", TonePitchHz);
	UXmlFileWriter::AddFloatAttribute(Document, Node, "ToneVolumePercent", ToneVolumePercent);
}

rapidxml::xml_node<>* UXmlFileWriter::AddTextureNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName, UTextureSettings* TextureSettings)
{
	rapidxml::xml_node<>* Node = UXmlFileWriter::AddNode(Document, ParentNode, NodeName);
	TextureEnum Texture = TextureEnum::GRAY;
	FString CustomTexturePath;
	if (IsValid(TextureSettings))
	{
		Texture = TextureSettings->GetTexture();
		CustomTexturePath = TextureSettings->GetCustomTexturePath();
	}
	UXmlFileWriter::AddStringAttribute(Document, Node, "Texture", UTextureSettings::GetTextureEnumString(Texture));
	UXmlFileWriter::AddStringAttribute(Document, Node, "CustomTexturePath", CustomTexturePath);
	return Node;
}

void UXmlFileWriter::AddDeviceNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName, UDevice* Device)
{
	rapidxml::xml_node<>* Node = UXmlFileWriter::AddNode(Document, ParentNode, NodeName);
	FString DeviceId;
	FString DeviceName;
	FString DevicePort;
	FString DeviceLine;
	if (IsValid(Device))
	{
		DeviceId = Device->GetDeviceId();
		DeviceName = Device->GetDeviceName();
		DevicePort = Device->GetDevicePort();
		DeviceLine = Device->GetDeviceLine();
	}

	UXmlFileWriter::AddStringAttribute(Document, Node, "DeviceId", DeviceId);
	UXmlFileWriter::AddStringAttribute(Document, Node, "DeviceName", DeviceName);
	UXmlFileWriter::AddStringAttribute(Document, Node, "DevicePort", DevicePort);
	UXmlFileWriter::AddStringAttribute(Document, Node, "DeviceLine", DeviceLine);
}

void UXmlFileWriter::AddVectorNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName, FVector Vector, bool IncludeZ)
{
	rapidxml::xml_node<>* Node = UXmlFileWriter::AddNode(Document, ParentNode, NodeName);
	UXmlFileWriter::AddFloatAttribute(Document, Node, "X", Vector.X);
	UXmlFileWriter::AddFloatAttribute(Document, Node, "Y", Vector.Y);
	if (IncludeZ)
	{
		UXmlFileWriter::AddFloatAttribute(Document, Node, "Z", Vector.Z);
	}
}

void UXmlFileWriter::AddRotatorNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName, FRotator Rotator, bool OnlyIncludeZ)
{
	rapidxml::xml_node<>* Node = UXmlFileWriter::AddNode(Document, ParentNode, NodeName);

	//FRotator Rotation(AngleY, AngleZ, AngleX); // Pitch, Yaw, Roll
	if (OnlyIncludeZ)
	{
		UXmlFileWriter::AddFloatAttribute(Document, Node, "Angle", Rotator.Yaw);
	}
	else
	{
		UXmlFileWriter::AddFloatAttribute(Document, Node, "AngleY", Rotator.Pitch);
		UXmlFileWriter::AddFloatAttribute(Document, Node, "AngleZ", Rotator.Yaw);
		UXmlFileWriter::AddFloatAttribute(Document, Node, "AngleX", Rotator.Roll);
	}
}

void UXmlFileWriter::SaveFile(rapidxml::xml_document<>* Document, std::string FilePath)
{
	std::ofstream File(FilePath);
	std::string XmlString;
	rapidxml::print(std::back_inserter(XmlString), *Document, 0);
	File << XmlString;

	//rapidxml::print(File, *Document);
	//rapidxml::print(std::back_inserter(XmlString), Document);
	File.close();
	Document->clear();
}

void UXmlFileWriter::AddActorSettingsToNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, UActorSettings* ActorSettings)
{
	FVector Position = FVector(0);
	FRotator Rotation = FRotator(0);
	FVector Scale = FVector(1);
	if (IsValid(ActorSettings))
	{
		Position = ActorSettings->GetPosition();
		Rotation = ActorSettings->GetRotation();
		Scale = ActorSettings->GetScale();
	}
	UXmlFileWriter::AddVectorNode(Document, Node, "Position", Position, true);
	UXmlFileWriter::AddRotatorNode(Document, Node, "Rotation", Rotation, false);
	UXmlFileWriter::AddVectorNode(Document, Node, "Scale", Scale, true);
}
