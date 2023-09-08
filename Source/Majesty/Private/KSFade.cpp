#include "KSFade.h"

UKSFade::UKSFade() : UUserWidget(FObjectInitializer::Get()) {
    this->FadeType = EFADE_TYPE::NONE;
    this->TickType = 0;
    this->IsEnd = false;
    this->Timer = 0.00f;
    this->EndTime = 0.00f;
    this->StartAlpha = 0.00f;
    this->EndSlateVisible = ESlateVisibility::Visible;
    this->m_bDebugFadeColorEnable = false;
}


bool UKSFade::IsFadeVisible() const {
    return false;
}

bool UKSFade::IsFadeEnd() const {
    return false;
}

EFADE_TYPE UKSFade::GetFadeType() const {
    return EFADE_TYPE::NONE;
}


bool UKSFade::FadeInit(const FLinearColor& rColor, const float inEndTime) {
    return false;
}


bool UKSFade::FadeEnd() {
    return false;
}


