#include "LevelAreaCollisionBase.h"

ALevelAreaCollisionBase::ALevelAreaCollisionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaType = LEVEL_AREA_TYPE::NONE;
    this->StartEventFlag = 0;
    this->EndEventFlag = 0;
}

bool ALevelAreaCollisionBase::IsCollisionEnable() {
    return false;
}


LEVEL_AREA_TYPE ALevelAreaCollisionBase::GetAreaType() const {
    return LEVEL_AREA_TYPE::NONE;
}


