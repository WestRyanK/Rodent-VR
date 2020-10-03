// Fill out your copyright notice in the Description page of Project Settings.


#include "ColorGradient.h"

FLinearColor UColorGradient::GetColorAtValue(float Value)
{
	if (this->ColorStops.Num() > 0)
	{
		TArray<float> Keys;
		this->ColorStops.GetKeys(Keys);
		Keys.Sort();
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
		
		float BlendAlpha = FMath::Clamp((Value - LowerKey) / (HigherKey - LowerKey), 0.0f, 1.0f);
		FLinearColor BlendedColor = FLinearColor::LerpUsingHSV(this->ColorStops[LowerKey], this->ColorStops[HigherKey], BlendAlpha);
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
}
