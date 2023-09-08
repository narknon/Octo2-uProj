#include "WorldMapPivotComponentBase.h"

UWorldMapPivotComponentBase::UWorldMapPivotComponentBase() {
    this->PivotLength = 105.00f;
    this->PivotRadius = 0.15f;
    this->WorldMapMode = EWorldMapMode::WorldMap;
}

void UWorldMapPivotComponentBase::SetWorldMapMode(EWorldMapMode Mode) {
}

void UWorldMapPivotComponentBase::OnOpenWorldMap() {
}

FName UWorldMapPivotComponentBase::GetWorldMapLabel() const {
    return NAME_None;
}

FVector UWorldMapPivotComponentBase::CalcWorldPositionOnGlobe() const {
    return FVector{};
}

bool UWorldMapPivotComponentBase::CalcScreenPositionOnMap(FVector2D& outScreenPos) const {
    return false;
}


