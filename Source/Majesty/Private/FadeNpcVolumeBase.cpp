#include "FadeNpcVolumeBase.h"

AFadeNpcVolumeBase::AFadeNpcVolumeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_NpcFadeTime = 0.50f;
    this->m_AdditionalNpcFadeTime = 0.00f;
}

float AFadeNpcVolumeBase::GetTotalFadeTime() {
    return 0.0f;
}


