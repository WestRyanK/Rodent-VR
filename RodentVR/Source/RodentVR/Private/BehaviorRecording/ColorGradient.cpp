// Fill out your copyright notice in the Description page of Project Settings.


#include "ColorGradient.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"

TArray<float> UColorGradient::GetSortedValues()
{
	TArray<float> Keys;
	this->ColorStops.GetKeys(Keys);
	Keys.Sort();
	return Keys;
}

void UColorGradient::GetMaxMinOfValues(float& MaxValue, float& MinValue)
{
	TArray<float> Keys = this->GetSortedValues();
	MinValue = 0;
	MaxValue = 0;
	if (Keys.Num() > 0) {
		MinValue = Keys[0];
		MaxValue = Keys.Last();
	}
}

TArray<float> UColorGradient::GetSortedNormalizedValues()
{
	TArray<float> Keys = this->GetSortedValues();
	TArray<float> NormalizedKeys;
	float MaxValue;
	float MinValue;
	this->GetMaxMinOfValues(MaxValue, MinValue);
	for (int i = 0; i < Keys.Num(); i++)
	{
		float Value = Keys[i];
		float NormalizedKey = UKismetMathLibrary::NormalizeToRange(Value, MinValue, MaxValue);
		NormalizedKeys.Add(NormalizedKey);
	}

	return NormalizedKeys;
}

FLinearColor UColorGradient::GetColorAtValue(float Value)
{
	if (this->ColorStops.Num() > 0)
	{
		TArray<float> Keys = this->GetSortedValues();
		float LowerKey = Keys[0];
		float HigherKey = Keys[0];
		for (int i = 1; i < Keys.Num(); i++)
		{
			LowerKey = Keys[i - 1];
			HigherKey = Keys[i];
			if (Value <= HigherKey)
			{
				break;
			}
		}

		float BlendAlpha = FMath::Clamp(UKismetMathLibrary::NormalizeToRange(Value, LowerKey, HigherKey), 0.0f, 1.0f);
		FLinearColor BlendedColor;
		if (this->UseHSVLerp) {
			BlendedColor = FLinearColor::LerpUsingHSV(this->ColorStops[LowerKey], this->ColorStops[HigherKey], BlendAlpha);
		}
		else {
			BlendedColor = FMath::Lerp(this->ColorStops[LowerKey], this->ColorStops[HigherKey], BlendAlpha);
		}

		return BlendedColor;
	}
	else
	{
		return FLinearColor(0, 0, 0, 0);
	}
}

TMap<float, FLinearColor> UColorGradient::GetColorStops()
{
	return this->ColorStops;
}

void UColorGradient::AddColorStop(float StopValue, FLinearColor StopColor)
{
	this->ColorStops.Add(StopValue, StopColor);
	this->OnColorGradientChanged();
}

void UColorGradient::RemoveColorStop(float StopValue)
{
	this->ColorStops.Remove(StopValue);
	this->OnColorGradientChanged();
}

UTexture2D* UColorGradient::CreateTextureFromGradient(int Width)
{
	UTexture2D* Texture = UTexture2D::CreateTransient(Width, 1);
	FTexture2DMipMap& Mip = Texture->PlatformData->Mips[0];
	uint8* Data = (uint8*)(Mip.BulkData.Lock(LOCK_READ_WRITE));


	UColorGradient::DrawGradientInTextureData(Width, Data, this);

	Mip.BulkData.Unlock();
	Texture->UpdateResource();
	return Texture;
}

void UColorGradient::DrawGradientInTextureData(int Width, uint8* Data, UColorGradient* Gradient)
{
	int PIXEL_SIZE = 4;
	float MaxValue;
	float MinValue;
	Gradient->GetMaxMinOfValues(MaxValue, MinValue);

	for (int i = 0; i < Width; i++) {
		float Alpha = (float)i / Width;
		float Value = Alpha * (MaxValue - MinValue) + MinValue;
		FLinearColor LinearColor = Gradient->GetColorAtValue(Value);
		FColor Color = FColor((int)(LinearColor.R * 255), (int)(LinearColor.G * 255), (int)(LinearColor.B * 255), 255);
		int Index = PIXEL_SIZE * i;

		Data[Index + 0] = Color.B;
		Data[Index + 1] = Color.G;
		Data[Index + 2] = Color.R;
		Data[Index + 3] = Color.A;
	}
}
bool UColorGradient::GetUseHSVLerp()
{
	return this->UseHSVLerp;
}

void UColorGradient::SetUseHSVLerp(bool UseHSVLerpValue)
{
	if (this->UseHSVLerp != UseHSVLerpValue) {
		this->UseHSVLerp = UseHSVLerpValue;
		this->OnColorGradientChanged();
	}
}

void UColorGradient::OnColorGradientChanged()
{
	this->OnColorGradientChangedDelegate.Broadcast();
}
