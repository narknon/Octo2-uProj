#include "RadarMapDisplayData.h"

FRadarMapDisplayData::FRadarMapDisplayData() {
    this->ObjectType = EOBJ_TYPE::NORMAL_OBJ;
    this->TimezoneType = ETIMEZONE_TRIGGER_TYPE::None;
    this->IconIndex = 0;
    this->EventKind = EEventKind::EVENT_OTHER;
}

