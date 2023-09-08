#include "TriggerManager.h"

ATriggerManager::ATriggerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bReserveUpdateEnableSwitchIndoorTrigger = false;
}

void ATriggerManager::SortTriggerList(TArray<AKSTriggerBase*>& TriggerList) {
}

bool ATriggerManager::SetUpEncountTriggerByName(FName TriggerName) {
    return false;
}

bool ATriggerManager::SetUpCameraLockTriggerByName(FName TriggerName) {
    return false;
}

void ATriggerManager::SetReserveUpdateEnableSwitchIndoorTrigger(bool Val) {
}

void ATriggerManager::SetHolyTorchItemTrigger(AHolyTorchItemTriggerBase* holyTorchItemTrigger) {
}

void ATriggerManager::SetEnableSwitchIndoorTriggerList(TArray<int32> NewList) {
}

void ATriggerManager::SetEnableSwitchIndoorTrigger(bool bEnable) {
}

void ATriggerManager::RemoveEnableSwitchIndoorTriggerList(int32 nID) {
}

void ATriggerManager::OnFinishChangeLevel(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args) {
}

AHolyTorchItemTriggerBase* ATriggerManager::GetHolyTorchItemTrigger() {
    return NULL;
}

void ATriggerManager::Debug_SetShowLadderTrigger(bool bShow) {
}

void ATriggerManager::Debug_SetShowCanoeDockTrigger(bool bShow) {
}

void ATriggerManager::Debug_OutputTriggerInfo() {
}

bool ATriggerManager::Debug_GetShowLadderTrigger() {
    return false;
}

bool ATriggerManager::Debug_GetShowCanoeDockTrigger() {
    return false;
}

void ATriggerManager::ClearHolyTorchItemTrigger() {
}

void ATriggerManager::ClearEnableSwitchIndoorTriggerList() {
}

bool ATriggerManager::ApplyCameraLockTrigger(ACameraLockTrigger* Trigger) {
    return false;
}

void ATriggerManager::AddEnableSwitchIndoorTriggerList(int32 nID) {
}


