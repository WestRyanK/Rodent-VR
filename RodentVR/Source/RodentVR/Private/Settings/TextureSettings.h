// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TextureSettings.generated.h"


//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCustomTextureChangedDelegate, FString, CustomTexturePath);

UENUM(BlueprintType)
enum class TextureEnum : uint8
{
	CHECKERS_LARGE UMETA(DisplayName = "Checkers Large"),
	CHECKERS_MEDIUM UMETA(DisplayName = "Checkers Medium"),
	CHECKERS_SMALL UMETA(DisplayName = "Checkers Small"),
	STRIPES_LARGE UMETA(DisplayName = "Stripes Large"),
	STRIPES_SMALL UMETA(DisplayName = "Stripes Small"),
	DOTS_1 UMETA(DisplayName = "Dots 1"),
	DOTS_2 UMETA(DisplayName = "Dots 2"),
	BLACK UMETA(DisplayName = "Black"),
	GRAY UMETA(DisplayName = "Gray"),
	WHITE UMETA(DisplayName = "White"),
	GREEN UMETA(DisplayName = "Green"),
	BLUE UMETA(DisplayName = "Blue"),
	CYAN UMETA(DisplayName = "Cyan"),
	CUSTOM UMETA(DisplayName = "Custom...")
};


UCLASS(Blueprintable)
class UTextureSettings : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintGetter = GetTexture, BlueprintSetter = SetTexture)
		TextureEnum Texture;
	UPROPERTY(BlueprintGetter = GetCustomTexturePath, BlueprintSetter = SetCustomTexturePath)
		FString CustomTexturePath;

public:
	UTextureSettings();

	UFUNCTION(BlueprintGetter)
		TextureEnum GetTexture();
	UFUNCTION(BlueprintSetter)
		void SetTexture(TextureEnum TextureValue);
	UFUNCTION(BlueprintGetter)
		FString GetCustomTexturePath();
	UFUNCTION(BlueprintSetter)
		void SetCustomTexturePath(FString CustomTexturePathValue);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		static TextureEnum GetTextureEnumFromString(FString TextureEnumString);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		static FString GetTextureEnumString(TextureEnum TextureValue);

	//UFUNCTION(BlueprintCallable, BlueprintPure)
	//	FCustomTextureChangedDelegate GetCustomTextureChangedDelegate();

	//UPROPERTY(BlueprintAssignable)
	//static FCustomTextureChangedDelegate OnCustomTextureChangedDelegate;
};
