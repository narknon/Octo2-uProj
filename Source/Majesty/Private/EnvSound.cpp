#include "EnvSound.h"

AEnvSound::AEnvSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_FirstWaitTime = 0.00f;
    this->m_NightEnvSound = NULL;
    this->m_DayTimeEnvSound = NULL;
}

void AEnvSound::UpdateFade(float DeltaSeconds) {
}

void AEnvSound::StopEnvSound(int32 nFadeOutTime) {
}

void AEnvSound::PlayEnvSound(ETimeZoneType ETimeZoneType, int32 nFadeInTime) {
}

void AEnvSound::PauseSE(bool bPause) {
}

bool AEnvSound::IsFade() {
    return false;
}

void AEnvSound::Init() {
}

UAtomComponent* AEnvSound::GetAtomComponent() {
    return NULL;
}

bool AEnvSound::ChangeEnvSound(ETimeZoneType eTimeZone) {
    return false;
}

void AEnvSound::BattleChange_SavePlayingState() {
}

void AEnvSound::BattleChange_RestorePlayingState() {
}

bool AEnvSound::ApplyOptionVolume() {
    return false;
}


