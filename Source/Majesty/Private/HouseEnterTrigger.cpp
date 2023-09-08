#include "HouseEnterTrigger.h"

AHouseEnterTrigger::AHouseEnterTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_nInFloor = 0;
    this->m_nOutFloor = 0;
    this->m_fManualFocusDistance_Room = 2000.00f;
}

void AHouseEnterTrigger::SetupFocalLength(bool bIsHouseIn) {
}

int32 AHouseEnterTrigger::GetOutFloor() {
    return 0;
}

int32 AHouseEnterTrigger::GetInFloor() {
    return 0;
}


