#include "TimeManager.h"

ATimeManager::ATimeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_nGamePlayTime = 0;
    this->m_bGamePlayCountPause = false;
    this->m_fMillisecond = 0.00f;
}

void ATimeManager::StartGamePlayTime(float fStartTime) {
}

void ATimeManager::PauseGamePlayTime(bool bPause) {
}

float ATimeManager::GetGamePlayTime() {
    return 0.0f;
}


