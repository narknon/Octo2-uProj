#include "EventTriggerBox.h"

AEventTriggerBox::AEventTriggerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RequiredNPCIndex = 0;
    this->m_IsSubStory = false;
    this->m_RadarMapIconType = ERADARMAP_ICON_TYPE::ePLAYER;
}

void AEventTriggerBox::SetupTriggerAfterSpawn(FName PlacementLabel) {
}



bool AEventTriggerBox::IsSubStoryTrigger() const {
    return false;
}

bool AEventTriggerBox::GetTriggerEnable() const {
    return false;
}

ERADARMAP_ICON_TYPE AEventTriggerBox::GetRadarMapIconType() const {
    return ERADARMAP_ICON_TYPE::ePLAYER;
}

FName AEventTriggerBox::GetPlacementLabel() const {
    return NAME_None;
}


