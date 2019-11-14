// Fill out your copyright notice in the Description page of Project Settings.


#include "ToneGenerator.h"
#include "Engine.h"

bool UToneGenerator::Init(int32& SampleRate)
{
	NumChannels = 1;

	// Initialize the DSP objects
	Osc.Init(SampleRate);
	Osc.SetFrequency(440.0f);
	Osc.Start();

	return true;
}

int32 UToneGenerator::OnGenerateAudio(float* OutAudio, int32 NumSamples)
{
	// Perform DSP operations here
	for (int32 Sample = 0; Sample < NumSamples; ++Sample)
	{
		OutAudio[Sample] = Osc.Generate();
	}

	return NumSamples;
}

void UToneGenerator::SetFrequency(const float InFrequencyHz)
{
	// Use this protected base class method to push a lambda function which will safely execute in the audio render thread.
	SynthCommand([this, InFrequencyHz]()
	{
		Osc.SetFrequency(InFrequencyHz);
		Osc.Update();
	});
}

void UToneGenerator::EndTone()
{
	this->Stop();
}

void UToneGenerator::StartTimedSynth(float DurationSec, float PitchHz, float VolumeMultiplier)
{
	this->SetVolumeMultiplier(VolumeMultiplier);
	this->SetFrequency(PitchHz);
	this->Start();

	if (DurationSec > 0.0f)
	{
		GetWorld()->GetTimerManager().SetTimer(this->ToneTimerHandle, this, &UToneGenerator::EndTone, 1.0f, false, DurationSec);
	}
}
