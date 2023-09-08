#include "WorldMapWidgetBase.h"

UWorldMapWidgetBase::UWorldMapWidgetBase() {
    this->WorldMapMode = EWorldMapMode::WorldMap;
    this->m_WorldMapState = EWorldMapState::None;
    this->m_InitZoomType = EWorldMapZoomType::ZOOM_NEAR;
    this->m_WorldMapActor = NULL;
    this->m_WorldMapFastTraveler = NULL;
    this->m_IsBackGroundMode = false;
    this->m_ElapsedTime = 0.00f;
    this->m_CursorWidget = NULL;
    this->m_AreaLabelWidget = NULL;
    this->m_SelectedIcon = NULL;
    this->m_LastActiveSelectedIcon = NULL;
    this->m_CursorMoveTime = 0.00f;
    this->m_CursorStartMovingEaseDuration = 0.00f;
    this->m_CursorStartMovingEaseCurve = NULL;
    this->m_CursorStopTime = 0.00f;
    this->m_CursorStopMovingEaseDuration = 0.00f;
    this->m_CursorStopMovingEaseCurve = NULL;
    this->m_FastRotateTime = 0.00f;
    this->m_StartFastRotationEaseDuration = 0.00f;
    this->m_StartFastRotationEaseCurve = NULL;
    this->m_NonFastRotateTime = 0.00f;
    this->m_StartNonFastRotationEaseDuration = 0.00f;
    this->m_StartNonFastRotationEaseCurve = NULL;
    this->m_AutoRotateEaseCurve = NULL;
}

void UWorldMapWidgetBase::UpdateVectorsToIcon() {
}

void UWorldMapWidgetBase::UpdateOverlapWidgetVisibility() {
}

void UWorldMapWidgetBase::UpdateMapIcon() {
}

void UWorldMapWidgetBase::UpdateAnimation() {
}

void UWorldMapWidgetBase::SetWorldMapState(EWorldMapState NewState) {
}

void UWorldMapWidgetBase::SetupMapIconStoryInfo() {
}

void UWorldMapWidgetBase::OutFocusWorldMap_Implementation(bool isFast) {
}

void UWorldMapWidgetBase::OpenWorldMapInternal_Implementation() {
}


void UWorldMapWidgetBase::OnOpened_Implementation() {
}

void UWorldMapWidgetBase::OnClosed_Implementation() {
}

bool UWorldMapWidgetBase::IsOpening_Implementation() {
    return false;
}

bool UWorldMapWidgetBase::IsClosing_Implementation() {
    return false;
}



void UWorldMapWidgetBase::FocusWorldMap_Implementation(bool isFast) {
}

bool UWorldMapWidgetBase::FindNearestIcon(UWorldMapIconBase*& outIcon, float& outLength) const {
    return false;
}

bool UWorldMapWidgetBase::FindCurrentLocationWorldMapLabel(FName& WorldMapLabel) const {
    return false;
}


void UWorldMapWidgetBase::CloseWorldMapInternal_Implementation() {
}


void UWorldMapWidgetBase::CheckOpenTutorial() {
}


