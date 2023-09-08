#include "UIEventBackgroundFadeBase.h"

UUIEventBackgroundFadeBase::UUIEventBackgroundFadeBase() {
    this->InnerSeq = EINNER_SEQUENCE::INIT;
    this->EndTime = 0.00f;
    this->UpdateTime = 0.00f;
}

bool UUIEventBackgroundFadeBase::TickInternal(float DeltaTime) {
    return false;
}

bool UUIEventBackgroundFadeBase::StartFadeOut(FName ResourceLabel, float Time, FLinearColor BaseColor) {
    return false;
}

bool UUIEventBackgroundFadeBase::StartFadeIn(float Time) {
    return false;
}


void UUIEventBackgroundFadeBase::Reset() {
}

bool UUIEventBackgroundFadeBase::IsFadeOutFinish() const {
    return false;
}

bool UUIEventBackgroundFadeBase::IsFadeInFinish() const {
    return false;
}

EINNER_SEQUENCE UUIEventBackgroundFadeBase::GetInnerSquence() {
    return EINNER_SEQUENCE::INIT;
}




