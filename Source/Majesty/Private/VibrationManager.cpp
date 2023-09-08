#include "VibrationManager.h"

AVibrationManager::AVibrationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Ps5VibratonComp = NULL;
    this->m_SoundSubmixForPS5Vibration = NULL;
}

bool AVibrationManager::PlayVibrationByLabel_Implementation(FName vibLabel, float Power, bool Loop, int32 LoopInterval) {
    return false;
}

bool AVibrationManager::PlayVibration2ByLabel_Implementation(FName vibLabel, EVibrationPower Power, bool Loop, int32 LoopInterval) {
    return false;
}

bool AVibrationManager::PlayVibration(FName VibrationLabel, int32 PlayIndex, float Power, bool Loop, int32 LoopInterval) {
    return false;
}

bool AVibrationManager::ForcePlayVibrationByLabel_Implementation(FName vibLabel, float Power, bool Loop, int32 LoopInterval) {
    return false;
}


