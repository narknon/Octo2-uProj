#include "FlipbookPlayParam.h"

FFlipbookPlayParam::FFlipbookPlayParam() {
    this->ActionType = EKSCharacterAction::F_IDLE;
    this->Dir = EKSCharacterDir::FRONT;
    this->IsLoop = false;
}

