#include "BattleAIBase.h"

UBattleAIBase::UBattleAIBase() {
    this->m_cOwnerCharacter = NULL;
    this->m_ePreState = EBATTLE_AI_STATE::eAI_STATE_01;
    this->m_eCurrentState = EBATTLE_AI_STATE::eAI_STATE_01;
    this->m_astrStateNameList.AddDefaulted(21);
}



void UBattleAIBase::SetOwnerCharacter(ABattleCharacterBase* cOwner) {
}















void UBattleAIBase::GetBattleAISubState(EBATTLE_AI_SUB_STATE& CurrentSubState) {
}

FString UBattleAIBase::GetBattleAIStateName() {
    return TEXT("");
}

void UBattleAIBase::GetBattleAIState(EBATTLE_AI_STATE& CurrentState, EBATTLE_AI_STATE& PrevState) {
}

void UBattleAIBase::ChangeBattleAISubState(EBATTLE_AI_SUB_STATE NewSubState) {
}

void UBattleAIBase::ChangeBattleAIState(EBATTLE_AI_STATE NewState, bool ResetSubState) {
}



