// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeObjectTypeHelper.h"


FString UMazeObjectTypeHelper::ObjectTypeToString(MazeObjectType ObjectType)
{
	switch (ObjectType)
	{
	case MazeObjectType::CUBE:
		return "Cube";
	case MazeObjectType::CYLINDER:
		return "Cylinder";
	case MazeObjectType::SPHERE:
		return "Sphere";
	case MazeObjectType::CONE:
		return "Cone";
	case MazeObjectType::FIGURINE:
		return "Figurine";
	case MazeObjectType::PLANE:
		return "Plane";
	default:
		return "";
	}
}

MazeObjectType UMazeObjectTypeHelper::StringToObjectType(FString TypeString)
{
	if (TypeString == "Cube")
	{
		return MazeObjectType::CUBE;
	}
	else if (TypeString == "Cylinder")
	{
		return MazeObjectType::CYLINDER;
	}
	else if (TypeString == "Sphere")
	{
		return MazeObjectType::SPHERE;
	}
	else if (TypeString == "Cone")
	{
		return MazeObjectType::CONE;
	}
	else if (TypeString == "Figurine")
	{
		return MazeObjectType::FIGURINE;
	}
	else if (TypeString == "Plane")
	{
		return MazeObjectType::PLANE;
	}
	return MazeObjectType::INVALID;
}
