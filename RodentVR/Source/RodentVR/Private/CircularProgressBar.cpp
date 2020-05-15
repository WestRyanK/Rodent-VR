#include "SCircularProgressBar.h"
#include "CircularProgressBar.h"
#include "Slate/SlateBrushAsset.h"

#define LOCTEXT_NAMESPACE "UMG"

/////////////////////////////////////////////////////
// UProgressBar

static FProgressBarStyle* DefaultCircularProgressBarStyle = nullptr;

UCircularProgressBar::UCircularProgressBar(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	if (DefaultCircularProgressBarStyle == nullptr)
	{
		// HACK: THIS SHOULD NOT COME FROM CORESTYLE AND SHOULD INSTEAD BE DEFINED BY ENGINE TEXTURES/PROJECT SETTINGS
		DefaultCircularProgressBarStyle = new FProgressBarStyle(FCoreStyle::Get().GetWidgetStyle<FProgressBarStyle>("ProgressBar"));

		// Unlink UMG default colors from the editor settings colors.
		DefaultCircularProgressBarStyle->UnlinkColors();
	}

	WidgetStyle = *DefaultCircularProgressBarStyle;
	WidgetStyle.FillImage.TintColor = FLinearColor::White;

	Percent = 0;
	FillColorAndOpacity = FLinearColor::White;
	BorderPadding = FVector2D(0, 0);
}

void UCircularProgressBar::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	MyCircularProgressBar.Reset();
}

TSharedRef<SWidget> UCircularProgressBar::RebuildWidget()
{
	MyCircularProgressBar = SNew(SCircularProgressBar);

	return MyCircularProgressBar.ToSharedRef();
}

void UCircularProgressBar::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	TAttribute< TOptional<float> > PercentBinding = OPTIONAL_BINDING_CONVERT(float, Percent, TOptional<float>, ConvertFloatToOptionalFloat);
	TAttribute<FSlateColor> FillColorAndOpacityBinding = PROPERTY_BINDING(FSlateColor, FillColorAndOpacity);

	MyCircularProgressBar->SetStyle(&WidgetStyle);

	MyCircularProgressBar->SetPercent(PercentBinding);
	MyCircularProgressBar->SetFillColorAndOpacity(FillColorAndOpacityBinding);
	MyCircularProgressBar->SetBorderPadding(BorderPadding);
}

void UCircularProgressBar::SetFillColorAndOpacity(FLinearColor Color)
{
	FillColorAndOpacity = Color;
	if (MyCircularProgressBar.IsValid())
	{
		MyCircularProgressBar->SetFillColorAndOpacity(FillColorAndOpacity);
	}
}

void UCircularProgressBar::SetPercent(float InPercent)
{
	Percent = InPercent;
	if (MyCircularProgressBar.IsValid())
	{
		MyCircularProgressBar->SetPercent(InPercent);
	}
}

void UCircularProgressBar::PostLoad()
{
	Super::PostLoad();

	if (GetLinkerUE4Version() < VER_UE4_DEPRECATE_UMG_STYLE_ASSETS)
	{
		if (Style_DEPRECATED != nullptr)
		{
			const FProgressBarStyle* StylePtr = Style_DEPRECATED->GetStyle<FProgressBarStyle>();
			if (StylePtr != nullptr)
			{
				WidgetStyle = *StylePtr;
			}

			Style_DEPRECATED = nullptr;
		}

		if (BackgroundImage_DEPRECATED != nullptr)
		{
			WidgetStyle.BackgroundImage = BackgroundImage_DEPRECATED->Brush;
			BackgroundImage_DEPRECATED = nullptr;
		}

		if (FillImage_DEPRECATED != nullptr)
		{
			WidgetStyle.FillImage = FillImage_DEPRECATED->Brush;
			FillImage_DEPRECATED = nullptr;
		}
	}
}

#if WITH_EDITOR

const FText UCircularProgressBar::GetPaletteCategory()
{
	return LOCTEXT("Common", "Common");
}

void UCircularProgressBar::OnCreationFromPalette()
{
	FillColorAndOpacity = FLinearColor(0, 0.5f, 1.0f);
}

#endif

/////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
