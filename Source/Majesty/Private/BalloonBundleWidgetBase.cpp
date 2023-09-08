#include "BalloonBundleWidgetBase.h"

UBalloonBundleWidgetBase::UBalloonBundleWidgetBase() {
    this->RefDeepThink = NULL;
    this->RefDeepThinkFixedText = NULL;
    this->m_cBalloonActive = NULL;
}

bool UBalloonBundleWidgetBase::UnPausedAutoTalkBalloonAll() {
    return false;
}

void UBalloonBundleWidgetBase::SetAutoTimer(float fTimer) {
}


bool UBalloonBundleWidgetBase::PauseAutoTalkBalloonAll() {
    return false;
}



void UBalloonBundleWidgetBase::Next(bool AutoNext) {
}

bool UBalloonBundleWidgetBase::IsReady() {
    return false;
}

bool UBalloonBundleWidgetBase::IsEnd() const {
    return false;
}

bool UBalloonBundleWidgetBase::IsAllEnd() {
    return false;
}


float UBalloonBundleWidgetBase::GetAutoTimer() {
    return 0.0f;
}



UBalloonBase* UBalloonBundleWidgetBase::GetActive() const {
    return NULL;
}

bool UBalloonBundleWidgetBase::DeleteBalloonAll() {
    return false;
}

bool UBalloonBundleWidgetBase::DeleteBalloon(UBalloonBase* pcDelete) {
    return false;
}

bool UBalloonBundleWidgetBase::DeleteAutoBalloonAll() {
    return false;
}

bool UBalloonBundleWidgetBase::DeleteAutoBalloon(UBalloonBase* pcDelete) {
    return false;
}


bool UBalloonBundleWidgetBase::CloseAll() {
    return false;
}



UBalloonBase* UBalloonBundleWidgetBase::AddBalloon(const FAddBalloonParam& InAddParam) {
    return NULL;
}

UBalloonBase* UBalloonBundleWidgetBase::AddAutoTalkBalloon(const FAddBalloonParam& InAddParam, float fDispTime) {
    return NULL;
}


