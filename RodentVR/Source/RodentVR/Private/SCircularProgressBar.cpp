// Fill out your copyright notice in the Description page of Project Settings.


#include "SCircularProgressBar.h"
#include "Rendering/DrawElements.h"


void SCircularProgressBar::Construct(const FArguments& InArgs)
{
	check(InArgs._Style);

	Style = InArgs._Style;

	SetPercent(InArgs._Percent);

	BackgroundImage = InArgs._BackgroundImage;
	FillImage = InArgs._FillImage;

	FillColorAndOpacity = InArgs._FillColorAndOpacity;
	BorderPadding = InArgs._BorderPadding;

	CurrentTickRate = 0.0f;
	MinimumTickRate = InArgs._RefreshRate;

	SetCanTick(false);

}

void SCircularProgressBar::SetPercent(TAttribute< TOptional<float> > InPercent)
{
	if (!Percent.IdenticalTo(InPercent))
	{
		Percent = InPercent;
		Invalidate(EInvalidateWidget::LayoutAndVolatility);
	}
}

void SCircularProgressBar::SetStyle(const FProgressBarStyle* InStyle)
{
	Style = InStyle;

	if (Style == nullptr)
	{
		FArguments Defaults;
		Style = Defaults._Style;
	}

	check(Style);

	Invalidate(EInvalidateWidget::Layout);
}

void SCircularProgressBar::SetFillColorAndOpacity(TAttribute< FSlateColor > InFillColorAndOpacity)
{
	if (!FillColorAndOpacity.IdenticalTo(InFillColorAndOpacity))
	{
		FillColorAndOpacity = InFillColorAndOpacity;
		Invalidate(EInvalidateWidget::Paint);
	}
}

void SCircularProgressBar::SetBorderPadding(TAttribute< FVector2D > InBorderPadding)
{
	if (!BorderPadding.IdenticalTo(InBorderPadding))
	{
		BorderPadding = InBorderPadding;
		Invalidate(EInvalidateWidget::Layout);
	}
}

void SCircularProgressBar::SetBackgroundImage(const FSlateBrush* InBackgroundImage)
{
	if (BackgroundImage != InBackgroundImage)
	{
		BackgroundImage = InBackgroundImage;
		Invalidate(EInvalidateWidget::Layout);
	}
}

void SCircularProgressBar::SetFillImage(const FSlateBrush* InFillImage)
{
	if (FillImage != InFillImage)
	{
		FillImage = InFillImage;
		Invalidate(EInvalidateWidget::Layout);
	}
}

const FSlateBrush* SCircularProgressBar::GetBackgroundImage() const
{
	return BackgroundImage ? BackgroundImage : &Style->BackgroundImage;
}

const FSlateBrush* SCircularProgressBar::GetFillImage() const
{
	return FillImage ? FillImage : &Style->FillImage;
}

// Returns false if the clipping zone area is zero in which case we should skip drawing
bool PushTransformedClip(FSlateWindowElementList& OutDrawElements, const FGeometry& AllottedGeometry, FVector2D InsetPadding, FVector2D ProgressOrigin, FSlateRect Progress)
{
	const FSlateRenderTransform& Transform = AllottedGeometry.GetAccumulatedRenderTransform();

	const FVector2D MaxSize = AllottedGeometry.GetLocalSize() - (InsetPadding * 2.0f);

	const FSlateClippingZone ClippingZone(Transform.TransformPoint(InsetPadding + (ProgressOrigin - FVector2D(Progress.Left, Progress.Top)) * MaxSize),
		Transform.TransformPoint(InsetPadding + FVector2D(ProgressOrigin.X + Progress.Right, ProgressOrigin.Y - Progress.Top) * MaxSize),
		Transform.TransformPoint(InsetPadding + FVector2D(ProgressOrigin.X - Progress.Left, ProgressOrigin.Y + Progress.Bottom) * MaxSize),
		Transform.TransformPoint(InsetPadding + (ProgressOrigin + FVector2D(Progress.Right, Progress.Bottom)) * MaxSize));

	if (ClippingZone.HasZeroArea())
	{
		return false;
	}

	OutDrawElements.PushClip(ClippingZone);
	return true;
}

int32 SCircularProgressBar::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	// Used to track the layer ID we will return.
	int32 RetLayerId = LayerId;

	bool bEnabled = ShouldBeEnabled(bParentEnabled);
	const ESlateDrawEffect DrawEffects = bEnabled ? ESlateDrawEffect::None : ESlateDrawEffect::DisabledEffect;

	const FSlateBrush* CurrentFillImage = GetFillImage();

	const FLinearColor FillColorAndOpacitySRGB(InWidgetStyle.GetColorAndOpacityTint() * FillColorAndOpacity.Get().GetColor(InWidgetStyle) * CurrentFillImage->GetTint(InWidgetStyle));
	const FLinearColor ColorAndOpacitySRGB = InWidgetStyle.GetColorAndOpacityTint();

	TOptional<float> ProgressFraction = Percent.Get();
	FVector2D BorderPaddingRef = BorderPadding.Get();

	const FSlateBrush* CurrentBackgroundImage = GetBackgroundImage();

	FSlateDrawElement::MakeBox(
		OutDrawElements,
		RetLayerId++,
		AllottedGeometry.ToPaintGeometry(),
		CurrentBackgroundImage,
		DrawEffects,
		InWidgetStyle.GetColorAndOpacityTint() * CurrentBackgroundImage->GetTint(InWidgetStyle)
	);

	if (ProgressFraction.IsSet())
	{
		const float ClampedFraction = FMath::Clamp(ProgressFraction.GetValue(), 0.0f, 1.0f);
		FSlateDrawElement::MakeCustom(
			OutDrawElements,
			RetLayerId++,
			CustomDrawer);

		if (PushTransformedClip(OutDrawElements, AllottedGeometry, BorderPaddingRef, FVector2D(0, 0), FSlateRect(0, 0, ClampedFraction, 1)))
		{
			// Draw Fill
			FSlateDrawElement::MakeBox(
				OutDrawElements,
				RetLayerId++,
				AllottedGeometry.ToPaintGeometry(
					FVector2D::ZeroVector,
					FVector2D(AllottedGeometry.GetLocalSize().X, AllottedGeometry.GetLocalSize().Y)),
				CurrentFillImage,
				DrawEffects,
				FillColorAndOpacitySRGB
			);

			OutDrawElements.PopClip();
		}
	}

	return RetLayerId - 1;
}

FVector2D SCircularProgressBar::ComputeDesiredSize(float) const
{
	if (GetFillImage() != nullptr)
	{
		return GetFillImage()->ImageSize;
	}
	else
	{
		return FVector2D(50, 50);
	}
}

bool SCircularProgressBar::ComputeVolatility() const
{
	return SLeafWidget::ComputeVolatility() || Percent.IsBound() || FillColorAndOpacity.IsBound() || BorderPadding.IsBound();
}
