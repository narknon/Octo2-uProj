#include "StyleChangeComponent.h"

UStyleChangeComponent::UStyleChangeComponent() {
    this->m_cOwnerPlayer = NULL;
    this->m_cPlayerStatusUI = NULL;
    this->m_eUniqueStyle = EBATTLE_STYLE_TYPE::eNEUTRAL;
    this->m_eCurrentStyle = EBATTLE_STYLE_TYPE::eNEUTRAL;
    this->m_nStyleChangePoint = 0;
    this->m_nStyleChangePointMax = 0;
    this->m_nResumeBoostPoint = 0;
    this->m_bStyleChangeReady = false;
}


void UStyleChangeComponent::SetPlayerStatusUI(UUserWidget* cPlayerStatusUI) {
}








bool UStyleChangeComponent::IsStyleChangeReady() {
    return false;
}

bool UStyleChangeComponent::IsStyleChangePointMax() {
    return false;
}

bool UStyleChangeComponent::IsStyleChangeExec() {
    return false;
}

bool UStyleChangeComponent::IsStyleChangeAvailable() {
    return false;
}

void UStyleChangeComponent::InitStyleChange(EBATTLE_STYLE_TYPE eUniqueStyle, int32 nStyleChangePoint, int32 nStyleChangePointMax) {
}

EBATTLE_STYLE_TYPE UStyleChangeComponent::GetUniqueStyle() {
    return EBATTLE_STYLE_TYPE::eNEUTRAL;
}

void UStyleChangeComponent::GetStyleChangePoint(int32& outStyleChangePoint, int32& outStyleChangePointMax) {
}

EBATTLE_STYLE_TYPE UStyleChangeComponent::GetCurrentStyle() {
    return EBATTLE_STYLE_TYPE::eNEUTRAL;
}



void UStyleChangeComponent::Debug_SetStyleChangePointMax(int32 nValue) {
}

void UStyleChangeComponent::Debug_SetStyleChangePoint(int32 nValue) {
}



