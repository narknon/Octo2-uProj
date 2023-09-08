#include "FieldPathInfoData.h"

FFieldPathInfoData::FFieldPathInfoData() {
    this->nID = 0;
    this->UniqueId = EPATH_TYPE::eNone;
    this->StartIndex = 0;
    this->FinishIndex = 0;
    this->LoopFlg = false;
    this->TurnFlg = false;
    this->MoveStartFlg = false;
    this->StartLoopIndex = 0;
    this->StartWaitTime = 0.00f;
    this->StartTimeZoneType = ETIMEZONE_TRIGGER_TYPE::None;
    this->WaitTime1 = 0.00f;
    this->WaitDir1 = EKSCharacterDir::FRONT;
    this->WaitMotion1 = EKSCharacterAction::F_IDLE;
    this->WaitTime2 = 0.00f;
    this->WaitDir2 = EKSCharacterDir::FRONT;
    this->WaitMotion2 = EKSCharacterAction::F_IDLE;
    this->WaitTime3 = 0.00f;
    this->WaitDir3 = EKSCharacterDir::FRONT;
    this->WaitMotion3 = EKSCharacterAction::F_IDLE;
    this->WaitTime4 = 0.00f;
    this->WaitDir4 = EKSCharacterDir::FRONT;
    this->WaitMotion4 = EKSCharacterAction::F_IDLE;
    this->WaitTime5 = 0.00f;
    this->WaitDir5 = EKSCharacterDir::FRONT;
    this->WaitMotion5 = EKSCharacterAction::F_IDLE;
    this->WaitTime6 = 0.00f;
    this->WaitDir6 = EKSCharacterDir::FRONT;
    this->WaitMotion6 = EKSCharacterAction::F_IDLE;
    this->WaitTime7 = 0.00f;
    this->WaitDir7 = EKSCharacterDir::FRONT;
    this->WaitMotion7 = EKSCharacterAction::F_IDLE;
    this->MoveMotion1 = EKSCharacterMoveMode::WALK;
    this->MoveSpeed1 = 0.00f;
    this->MoveMotion2 = EKSCharacterMoveMode::WALK;
    this->MoveSpeed2 = 0.00f;
    this->MoveMotion3 = EKSCharacterMoveMode::WALK;
    this->MoveSpeed3 = 0.00f;
    this->MoveMotion4 = EKSCharacterMoveMode::WALK;
    this->MoveSpeed4 = 0.00f;
    this->MoveMotion5 = EKSCharacterMoveMode::WALK;
    this->MoveSpeed5 = 0.00f;
    this->MoveMotion6 = EKSCharacterMoveMode::WALK;
    this->MoveSpeed6 = 0.00f;
}

