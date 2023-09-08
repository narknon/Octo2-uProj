#include "PlacementRefreshTrigger.h"

APlacementRefreshTrigger::APlacementRefreshTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_eTargetTimeZone = ETIMEZONE_TRIGGER_TYPE::None;
    this->m_bPlacementRefresh = false;
}


