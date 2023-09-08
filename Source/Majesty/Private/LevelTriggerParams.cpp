#include "LevelTriggerParams.h"

FLevelTriggerParams::FLevelTriggerParams() {
    this->ID = 0;
    this->NextLevelTriggerID = ELevelTriggerID::Start;
    this->MapInCharaDir = EKSCharacterDir::FRONT;
    this->MapInCharaMoveMode = ECharacterMoveModeForDB::DEFAULT;
    this->EnableAutoSave = false;
}

