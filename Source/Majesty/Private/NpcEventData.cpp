#include "NpcEventData.h"

FNpcEventData::FNpcEventData() {
    this->IsSwoon = false;
    this->SwoonType = ENpcSwoonType::eNone;
    this->PurchaseRestock = 0;
    this->HearFlag = false;
    this->SwoonTimeZone = ETimeZoneType::NONE;
}

