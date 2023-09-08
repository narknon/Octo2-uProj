#include "RadarMapIconParam.h"

FRadarMapIconParam::FRadarMapIconParam() {
    this->IconType = 0;
    this->ObjType = ERADARMAP_ICON_OBJ_TYPE::NONE;
    this->LevelTriggerID = 0;
    this->GameColorType = EGameColor::eNONE;
    this->RippleColorType = EGameColor::eNONE;
    this->TargetFrameIndex = 0;
    this->TreasureBoxIndex = 0;
    this->IsVisibility = false;
    this->TargetCharaID = 0;
}

