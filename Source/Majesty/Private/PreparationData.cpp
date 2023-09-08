#include "PreparationData.h"

FPreparationData::FPreparationData() {
    this->ID = 0;
    this->PreparationID = 0;
    this->Attribute = EATTRIBUTE_TYPE::eNONE;
    this->BaseCount = 0;
    this->EstimateOrderType = EBATTLE_ACTION_ORDER_ESTIMATE_TYPE::eNONE;
    this->BuildUpEstimateOrderType = EBATTLE_ACTION_ORDER_ESTIMATE_TYPE::eNONE;
    this->EstimateOrderCount = 0;
    this->IsBuildUp = false;
    this->IsSpread = false;
    this->IsRandom = false;
    this->TimeZoneTrigger = ETIMEZONE_TRIGGER_TYPE::None;
}

