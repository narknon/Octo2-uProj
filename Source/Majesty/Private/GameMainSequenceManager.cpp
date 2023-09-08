#include "GameMainSequenceManager.h"

AGameMainSequenceManager::AGameMainSequenceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CurrentState = EMAINSEQ_TYPE::eOUT_GAME;
    this->m_BeforeState = EMAINSEQ_TYPE::eNONE;
    this->m_RequestFlowIndex = 0;
}

bool AGameMainSequenceManager::RequestCheck(EMAINSEQ_TYPE& Type, EREQUEST_TYPE& PassingRequest) {
    return false;
}

bool AGameMainSequenceManager::IsBattleMode() {
    return false;
}

TArray<FMainSequneceRequestParam> AGameMainSequenceManager::GetHoldingRequestList() {
    return TArray<FMainSequneceRequestParam>();
}

void AGameMainSequenceManager::Debug_ShowMainSequenceInfo(bool bEnable) {
}

void AGameMainSequenceManager::Debug_ChangeState(EMAINSEQ_TYPE Type) {
}

bool AGameMainSequenceManager::CheckNextFlow(EMAINSEQ_TYPE& Type) {
    return false;
}

void AGameMainSequenceManager::CheckHoldingRequest() {
}

bool AGameMainSequenceManager::CheckCurrentState(EMAINSEQ_TYPE CheckType) {
    return false;
}

void AGameMainSequenceManager::AddRequest(EREQUEST_TYPE Type, FMainSequneceRequestParam Param) {
}


