#include "WorldMapAreaLabelBase.h"

UWorldMapAreaLabelBase::UWorldMapAreaLabelBase() {
    this->IsOpenning = false;
}

FVector2D UWorldMapAreaLabelBase::GetPosition() const {
    return FVector2D{};
}


bool UWorldMapAreaLabelBase::GetIsOpenning() const {
    return false;
}


