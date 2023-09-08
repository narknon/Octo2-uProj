#include "PlacementEventParamSet.h"

FPlacementEventParamSet::FPlacementEventParamSet() {
    this->ParamSetIndex = 0;
    this->EventStartFlag = 0;
    this->EventEndFlag = 0;
    this->TimeZoneTriggerType = ETIMEZONE_TRIGGER_TYPE::None;
}

