#include "EventListData.h"

FEventListData::FEventListData() {
    this->EventIndex = 0;
    this->Kind = EEventKind::EVENT_OTHER;
    this->EventSkip = 0;
    this->LevelTriggerID = ELevelTriggerID::Start;
    this->LanthanumFlag = 0;
    this->StartFadeOutFlag = 0;
    this->TargetChara = 0;
    this->EncountReset = false;
}

