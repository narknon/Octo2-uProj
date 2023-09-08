#include "KSTriggerBase.h"

AKSTriggerBase::AKSTriggerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_eTriggerType = EKSTriggerType::NONE;
    this->m_nProcessOrder = 1000;
    this->SetHidden(true);
}

void AKSTriggerBase::Update_Implementation(float DeltaSeconds) {
}

void AKSTriggerBase::SetDebugTextColor(FLinearColor Color) {
}

void AKSTriggerBase::SetDebugText(const FString& debugStr) {
}

void AKSTriggerBase::Reset_Implementation() {
}

void AKSTriggerBase::Initialize_Implementation() {
}

EKSTriggerType AKSTriggerBase::GetTriggerType() {
    return EKSTriggerType::NONE;
}

bool AKSTriggerBase::CanActivateTrigger_Implementation() {
    return false;
}


