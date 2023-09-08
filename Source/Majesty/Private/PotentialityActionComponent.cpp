#include "PotentialityActionComponent.h"

UPotentialityActionComponent::UPotentialityActionComponent() {
    this->m_cOwnerPlayer = NULL;
    this->m_cPlayerStatusUI = NULL;
    this->m_cPlayerSubStatusUI = NULL;
    this->m_nResumeBoostPoint = 0;
    this->m_nResumeActionPoint = 0;
    this->m_eUniqueActionType = EPOTENTIALITY_ACTION_TYPE::eNONE;
    this->m_nActionPoint = 0;
    this->m_nActionPointMax = 0;
    this->m_bActionReady = false;
    this->m_bActionExec = false;
    this->m_bDoubleActionExec = false;
    this->m_bIsExecBreakAct = false;
}

void UPotentialityActionComponent::SetPotentialityActionPoint(int32 nNewActionPoint) {
}

void UPotentialityActionComponent::SetPlayerSubStatusUI(UUserWidget* cPlayerStatusUI) {
}

void UPotentialityActionComponent::SetPlayerStatusUI(UUserWidget* cPlayerStatusUI) {
}

void UPotentialityActionComponent::SetExecBreakAct(bool bExecBreakAct) {
}







bool UPotentialityActionComponent::IsPotentialityActionReady() {
    return false;
}

bool UPotentialityActionComponent::IsPotentialityActionPointMax() {
    return false;
}

bool UPotentialityActionComponent::IsPotentialityActionExec() {
    return false;
}

bool UPotentialityActionComponent::IsPotentialityActionAvailable() {
    return false;
}

void UPotentialityActionComponent::InitPotentialityAction(FPotentialityActionData cActionData, int32 nActionPoint) {
}

EPOTENTIALITY_ACTION_TYPE UPotentialityActionComponent::GetUniquePotentialityAction() {
    return EPOTENTIALITY_ACTION_TYPE::eNONE;
}

void UPotentialityActionComponent::GetPotentialityActionPoint(int32& outActionPoint, int32& outActionPointMax) {
}

FPotentialityActionData UPotentialityActionComponent::GetPotentialityActionData() {
    return FPotentialityActionData{};
}

void UPotentialityActionComponent::GetPotentialityActionCommandText(FName& outActionCommandName, FName& outActionCommandDetail) {
}

TArray<FName> UPotentialityActionComponent::GetPotentialityActionAbility() {
    return TArray<FName>();
}

void UPotentialityActionComponent::FullPotentialityActionPoint() {
}



void UPotentialityActionComponent::Debug_SetPotentialityActionPointMax(int32 nValue) {
}

void UPotentialityActionComponent::Debug_SetPotentialityActionPoint(int32 nValue) {
}




