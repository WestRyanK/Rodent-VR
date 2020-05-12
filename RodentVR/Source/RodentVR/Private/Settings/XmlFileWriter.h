// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RapidXML/rapidxml.hpp"
#include "Device.h"
#include <string>
#include "XmlFileWriter.generated.h"

/**
 * 
 */
UCLASS()
class UXmlFileWriter : public UObject
{
	GENERATED_BODY()
	
public:
	static rapidxml::xml_document<>* CreateDocument(std::string RootNodeName);
	static rapidxml::xml_node<>* AddNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName);
	static void AddAttribute(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, std::string AttributeName, std::string AttributeValue);
	static void AddFloatAttribute(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, std::string AttributeName, float AttributeValue);
	static void AddStringAttribute(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* Node, std::string AttributeName, FString AttributeValue);
	static void AddDeviceNode(rapidxml::xml_document<>* Document, rapidxml::xml_node<>* ParentNode, std::string NodeName, UDevice* Device);
	static void SaveFile(rapidxml::xml_document<>* Document, std::string FilePath);
};
