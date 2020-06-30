// Fill out your copyright notice in the Description page of Project Settings.


#include "ToneGenerator.h"
#include "Kismet/GameplayStatics.h"

bool UToneGenerator::Init(int32& SampleRate)
{
	NumChannels = 1;

#if SYNTHCOMPONENT_EX_OSCILATOR_ENABLED
	// Initialize the DSP objects
	Osc.Init(SampleRate);
	Osc.SetFrequency(440.0f);
	Osc.Start();
#endif // SYNTHCOMPONENT_EX_OSCILATOR_ENABLED

	return true;
}

int32 UToneGenerator::OnGenerateAudio(float* OutAudio, int32 NumSamples)
{
#if SYNTHCOMPONENT_EX_OSCILATOR_ENABLED
	// Perform DSP operations here
	for (int32 Sample = 0; Sample < NumSamples; ++Sample)
	{
		OutAudio[Sample] = Osc.Generate();
	}
#endif // SYNTHCOMPONENT_EX_OSCILATOR_ENABLED

	return NumSamples;
}

void UToneGenerator::SetFrequency(const float InFrequencyHz)
{
#if SYNTHCOMPONENT_EX_OSCILATOR_ENABLED
	// Use this protected base class method to push a lambda function which will safely execute in the audio render thread.
	SynthCommand([this, InFrequencyHz]()
		{
			Osc.SetFrequency(InFrequencyHz);
			Osc.Update();
		});
#endif // SYNTHCOMPONENT_EX_OSCILATOR_ENABLED
}

void UToneGenerator::EndTone()
{
	this->Stop();
}

void UToneGenerator::StartTone(float DurationSec, float PitchHz, float VolumeMultiplier)
{
	this->Start();
	this->SetVolumeMultiplier(VolumeMultiplier);
	this->SetFrequency(PitchHz);

	if (DurationSec <= 0.0f || DurationSec > 25.0f)
	{
		DurationSec = 25.0f;
	}

	UWorld* World = GetWorld();
	if (IsValid(World))
	{
		World->GetTimerManager().SetTimer(this->ToneTimerHandle, this, &UToneGenerator::EndTone, 1.0f, false, DurationSec);
	}
}
