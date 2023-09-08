#include "NextMapInfo.h"

FNextMapInfo::FNextMapInfo() {
    this->ReqTrigger = ELevelTriggerID::Start;
    this->MapIndex = 0;
    this->UseFadeUI = false;
    this->levelType = ELEVEL_TYPE::FIELD;
    this->ChangeBGM = false;
    this->IsSwichActive = false;
}

