#include "GameSpeedManager.h"

AGameSpeedManager::AGameSpeedManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->b_mBattleSpeedChange = false;
    this->b_mEventSpeedChange = false;
    this->m_eEventMode = EEVENT_MODE::eNORMAL;
}

void AGameSpeedManager::ResetEventSpeedUp(UObject* WorldContextObject) {
}

EEVENT_MODE AGameSpeedManager::GetEventMode() {
    return EEVENT_MODE::eNORMAL;
}

ECHANGE_TIME_DILATION AGameSpeedManager::GetEventDilation() {
    return ECHANGE_TIME_DILATION::eNONE;
}

void AGameSpeedManager::EventSpeedUpInit(UObject* WorldContextObject) {
}

void AGameSpeedManager::EventSpeedUpFinish(UObject* WorldContextObject) {
}

void AGameSpeedManager::EventSpeedUp_Implementation(UObject* WorldContextObject, bool Enable) {
}

void AGameSpeedManager::ChangeEventMode(bool bIsUp) {
}

void AGameSpeedManager::BattleSpeedUpInit(UObject* WorldContextObject) {
}

void AGameSpeedManager::BattleSpeedUpFinish(UObject* WorldContextObject) {
}

void AGameSpeedManager::BattleSpeedUp_Implementation() {
}


