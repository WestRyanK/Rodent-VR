// Fill out your copyright notice in the Description page of Project Settings.


#include "XmlFileWriter.h"
#include "RapidXML/rapidxml_print.hpp"
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

void UXmlFileWriter::AddDeviceNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName, UDevice* Device)
{
	rapidxml::xml_node<>* Node = UXmlFileWriter::AddNode(Document, ParentNode, NodeName);
	UXmlFileWriter::AddStringAttribute(Document, Node, "DeviceId", Device->GetDeviceId());
	UXmlFileWriter::AddStringAttribute(Document, Node, "DeviceName", Device->GetDeviceName());
	UXmlFileWriter::AddStringAttribute(Document, Node, "DevicePort", Device->GetDevicePort());
	UXmlFileWriter::AddStringAttribute(Document, Node, "DeviceLine", Device->GetDeviceLine());
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
