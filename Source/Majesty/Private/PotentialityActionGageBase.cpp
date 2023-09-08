#include "PotentialityActionGageBase.h"

UPotentialityActionGageBase::UPotentialityActionGageBase() {
    this->m_CurrentValue = 0.00f;
    this->m_MaxValue = 0.00f;
    this->m_PlayableCharacterId = EPlayableCharacterID::eNONE;
    this->m_IsDead = false;
}

void UPotentialityActionGageBase::SetValue_Implementation(float CurrentValue, float MaxValue, bool isSkipAnim) {
}

void UPotentialityActionGageBase::Setup_Implementation(EPlayableCharacterID PlayableCharacterId) {
}

void UPotentialityActionGageBase::PlayOpenAnimation_Implementation() {
}

void UPotentialityActionGageBase::PlayCloseAnimation_Implementation() {
}

void UPotentialityActionGageBase::OnRevival_Implementation() {
}

void UPotentialityActionGageBase::OnDead_Implementation() {
}


