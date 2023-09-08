#include "SwitchIndoorTriggerParam.h"

FSwitchIndoorTriggerParam::FSwitchIndoorTriggerParam() {
    this->fCameraDistanceIndoor = 0.00f;
    this->fManualFocusDistanceIndoor = 0.00f;
    this->fManualFocusDistanceOutdoor = 0.00f;
    this->fCharacterScaleIndoor = 0.00f;
    this->fCharacterScaleOutdoor = 0.00f;
    this->fCharacterHeightIndoor = 0.00f;
    this->fCharacterHeightOutdoor = 0.00f;
    this->nIndoorFloorNum = 0;
    this->nOutdoorFloorNum = 0;
    this->bForceOutdoor = false;
    this->nProcessOrder = 0;
}

