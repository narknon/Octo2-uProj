#include "DBAccessManager.h"

ADBAccessManager::ADBAccessManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


bool ADBAccessManager::PrepareDBAccess_Implementation(int32 Index) {
    return false;
}


bool ADBAccessManager::GetNpcLabelBySupporterLabel(FName& outLabel, FName SupporterLabel) {
    return false;
}

bool ADBAccessManager::GetNpcLabelByEnemyLabel(FName& outLabel, FName EnemyLabel) {
    return false;
}

bool ADBAccessManager::GetNpcDataBySupporterLabel(FNPCData& OutData, FName SupporterLabel) {
    return false;
}

bool ADBAccessManager::GetNpcDataByEnemyLabel(FNPCData& OutData, FName EnemyLabel) {
    return false;
}




ADBAccessManager* ADBAccessManager::GetInstance() {
    return NULL;
}





