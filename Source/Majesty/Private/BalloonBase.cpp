#include "BalloonBase.h"

UBalloonBase::UBalloonBase() {
    this->BalloonType = EBalloonType::NORMAL;
    this->EndFlag = false;
    this->DrawTextEnd = false;
    this->m_bIsReady = false;
    this->m_bPause = false;
    this->BalloonIndex = 0;
}




bool UBalloonBase::IsReady() const {
    return false;
}

bool UBalloonBase::IsPauseBalloon() {
    return false;
}

bool UBalloonBase::IsEnd() const {
    return false;
}

bool UBalloonBase::IsDrawTextEnd() const {
    return false;
}

bool UBalloonBase::Init_Implementation(const FAddBalloonParam& InParam, bool bAutoTalk) {
    return false;
}

EBalloonType UBalloonBase::GetType() const {
    return EBalloonType::NORMAL;
}


FAddBalloonParam UBalloonBase::GetBalloonParam() const {
    return FAddBalloonParam{};
}

bool UBalloonBase::GetAutoBalloon() {
    return false;
}



bool UBalloonBase::CallBalloonEvent(EBalloonEventType EventType) {
    return false;
}


