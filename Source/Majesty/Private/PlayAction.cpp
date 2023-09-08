#include "PlayAction.h"

FPlayAction::FPlayAction() {
    this->ActionID = EKSCharacterAction::F_IDLE;
    this->StartFrame = 0;
    this->Force = false;
    this->ManualLoop = EKSCharacterAnimationLoop::NONE;
}

