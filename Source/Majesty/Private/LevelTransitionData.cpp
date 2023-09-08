#include "LevelTransitionData.h"

FLevelTransitionData::FLevelTransitionData() {
    this->EnableFlag = 0;
    this->NextLevelTriggerID = ELevelTriggerID::Start;
    this->MapInCharaDir = EKSCharacterDir::FRONT;
    this->MapInCharaMoveMode = ECharacterMoveModeForDB::DEFAULT;
    this->EnableAutoSave = false;
}

