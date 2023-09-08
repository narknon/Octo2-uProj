#include "PotentialityActionDetailBase.h"

UPotentialityActionDetailBase::UPotentialityActionDetailBase() {
    this->m_pTitleText = NULL;
    this->m_pDetailText = NULL;
    this->m_pOpenAnimation = NULL;
    this->m_pCloseAnimation = NULL;
    this->m_pForceCloseAnimation = NULL;
    this->m_pForceOpenAnimation = NULL;
    this->m_fCloseTime = 3.00f;
}

void UPotentialityActionDetailBase::SetText(FName TitleLabel, FName DetailLabel) {
}

void UPotentialityActionDetailBase::Open() {
}

void UPotentialityActionDetailBase::ForceOpen() {
}

void UPotentialityActionDetailBase::ForceClose() {
}

void UPotentialityActionDetailBase::Close() {
}


