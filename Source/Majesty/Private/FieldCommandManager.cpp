#include "FieldCommandManager.h"

AFieldCommandManager::AFieldCommandManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsFieldCommandEvent = false;
    this->RequestBadConnectionInfo = false;
    this->InterruptPlay = false;
    this->bInFcOpeningPeriod = false;
}







void AFieldCommandManager::SetLastFieldCommandResults(MJFieldCommandType FCType, FieldCommandStatus FcStatus) {
}

void AFieldCommandManager::SetIsInterruptPlay(bool Val) {
}




void AFieldCommandManager::PrintToVLog(const FString& str) {
}












TMap<MJFieldCommandType, FFieldCommandResult> AFieldCommandManager::GetLastFieldCommandResults() {
    return TMap<MJFieldCommandType, FFieldCommandResult>();
}

bool AFieldCommandManager::GetIsInterruptPlay() const {
    return false;
}



AFieldCommandManager* AFieldCommandManager::GetInstance() {
    return NULL;
}



void AFieldCommandManager::Debug_SetWaitReason(const FText reason) {
}





