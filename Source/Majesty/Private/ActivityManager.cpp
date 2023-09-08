#include "ActivityManager.h"

AActivityManager::AActivityManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CacheSaveDataForMerge = NULL;
}

void AActivityManager::SetSystemSaveDataForMerge(UKSSaveSystem* saveDataOther) {
}

void AActivityManager::MergeActivitySaveDataOnPostLoadSlot() {
}

void AActivityManager::MergeActivitySaveData(const UKSSaveSystem* saveDataOther) {
}

void AActivityManager::ClearSystemSaveDataForMerge() {
}


