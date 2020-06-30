// Fill out your copyright notice in the Description page of Project Settings.


#include "TextureSettings.h"



//FCustomTextureChangedDelegate UTextureSettings::GetCustomTextureChangedDelegate()
//{
//	return UTextureSettings::OnCustomTextureChangedDelegate;
//}

UTextureSettings::UTextureSettings()
{
	this->SetTexture(TextureEnum::GRAY);
	this->SetCustomTexturePath(TEXT(""));
}

TextureEnum UTextureSettings::GetTexture()
{
	return this->Texture;
}

void UTextureSettings::SetTexture(TextureEnum TextureValue)
{
	this->Texture = TextureValue;
}

FString UTextureSettings::GetCustomTexturePath()
{
	return this->CustomTexturePath;
}

void UTextureSettings::SetCustomTexturePath(FString CustomTexturePathValue)
{
	this->CustomTexturePath = CustomTexturePathValue;
	//UTextureSettings::OnCustomTextureChangedDelegate.
}

FString UTextureSettings::GetTextureEnumString(TextureEnum TextureValue)
{
	switch (TextureValue)
	{
	case TextureEnum::CHECKERS_LARGE:
		return  "Checkers Large";
	case TextureEnum::CHECKERS_MEDIUM:
		return  "Checkers Medium";
	case TextureEnum::CHECKERS_SMALL:
		return  "Checkers Small";
	case TextureEnum::STRIPES_LARGE:
		return  "Stripes Large";
	case TextureEnum::STRIPES_SMALL:
		return  "Stripes Small";
	case TextureEnum::DOTS_1:
		return  "Dots 1";
	case TextureEnum::DOTS_2:
		return  "Dots 2";
	case TextureEnum::BLACK:
		return  "Black";
	case TextureEnum::WHITE:
		return  "White";
	case TextureEnum::GRAY:
		return  "Gray";
	case TextureEnum::GREEN:
		return  "Green";
	case TextureEnum::BLUE:
		return  "Blue";
	case TextureEnum::CYAN:
		return  "Cyan";
	case TextureEnum::CUSTOM:
		return  "Custom...";
	default:
		return "Gray";
	}
}

TextureEnum UTextureSettings::GetTextureEnumFromString(FString TextureEnumString)
{
	if (TextureEnumString == "Checkers Large")
	{
		return TextureEnum::CHECKERS_LARGE;
	}
	else if (TextureEnumString == "Checkers Medium")
	{
		return TextureEnum::CHECKERS_MEDIUM;
	}
	else if (TextureEnumString == "Checkers Small")
	{
		return TextureEnum::CHECKERS_SMALL;
	}
	else if (TextureEnumString == "Stripes Large")
	{
		return TextureEnum::STRIPES_LARGE;
	}
	else if (TextureEnumString == "Stripes Small")
	{
		return TextureEnum::STRIPES_SMALL;
	}
	else if (TextureEnumString == "Dots 1")
	{
		return TextureEnum::DOTS_1;
	}
	else if (TextureEnumString == "Dots 2")
	{
		return TextureEnum::DOTS_2;
	}
	else if (TextureEnumString == "Black")
	{
		return TextureEnum::BLACK;
	}
	else if (TextureEnumString == "White")
	{
		return TextureEnum::WHITE;
	}
	else if (TextureEnumString == "Gray")
	{
		return TextureEnum::GRAY;
	}
	else if (TextureEnumString == "Green")
	{
		return TextureEnum::GREEN;
	}
	else if (TextureEnumString == "Blue")
	{
		return TextureEnum::BLUE;
	}
	else if (TextureEnumString == "Cyan")
	{
		return TextureEnum::CYAN;
	}
	else if (TextureEnumString == "Custom...")
	{
		return TextureEnum::CUSTOM;
	}
	else
	{
		return TextureEnum::GRAY;
	}
}

