#include "AddBalloonParam.h"

FAddBalloonParam::FAddBalloonParam() {
    this->TargetActor = NULL;
    this->EnableTail = false;
    this->BalloonDir = EEventBalloonDir::DEFAULT;
    this->BalloonOffsetScale = 0.00f;
    this->TextPosition = EBALLOON_TEXT_POS::eTOP;
    this->EnableCustomFadeTime = false;
    this->FadeOutTime = 0.00f;
}

