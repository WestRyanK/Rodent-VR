// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "UObject/NoExportTypes.h"
#include "TextureLoader.generated.h"

/**
 * 
 */
UCLASS()
class UTextureLoader : public UObject
{
	GENERATED_BODY()

public:
	static EImageFormat GetFormatFromFileName(const FString& FileName);
	static UTexture2D* LoadTextureFromFile(const FString& FileName, bool& IsValid, int32& Width, int32& Height);
	
};
