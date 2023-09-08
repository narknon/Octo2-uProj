#include "WorldMapIconBase.h"

UWorldMapIconBase::UWorldMapIconBase() {
    this->m_IsCurrentLocation = false;
    this->m_IsDestinationLocation = false;
    this->m_IsExistsGuild = false;
    this->m_IsSelecting = false;
    this->m_IsPlayingAnimation = false;
    this->m_StartOpacity = 0.00f;
    this->m_FinishOpacity = 0.00f;
    this->m_AnimDurationTime = 0.00f;
    this->m_AnimElapseTime = 0.00f;
    this->m_StoryInfoVerticalBox = NULL;
}

bool UWorldMapIconBase::UpdateVisibility(bool IsInScreen) {
    return false;
}

void UWorldMapIconBase::UpdateAnimation(float DeltaTime) {
}

void UWorldMapIconBase::StartStoryInfoDisplayAnimIfNeeded_Implementation(EWorldMapZoomType ZoomType, bool isFast) {
}

void UWorldMapIconBase::StartIcconVisibilityTransitionByZoomType_Implementation(EWorldMapZoomType ZoomType) {
}

bool UWorldMapIconBase::StartFocus_Implementation(bool IsFocus, bool isFast) {
    return false;
}



void UWorldMapIconBase::SetWorldMapData(FName Label) {
}

void UWorldMapIconBase::SetupStoryInfoDisplays_Implementation(const TArray<FWorldMapDestinationData>& StoryList) {
}



void UWorldMapIconBase::SetupIcon() {
}

FVector2D UWorldMapIconBase::SetPosition(const FVector2D& newPos) {
    return FVector2D{};
}

void UWorldMapIconBase::SetIsSelecting(bool IsSelecting) {
}

void UWorldMapIconBase::SetIsDestinationLocation(bool IsDestinationLocation) {
}

void UWorldMapIconBase::ScrubAnimation(float ElapsedTime) {
}

bool UWorldMapIconBase::IsVisitedGuild() const {
    return false;
}

bool UWorldMapIconBase::IsVisited() {
    return false;
}

bool UWorldMapIconBase::IsDisplayableIcon(EWorldMapZoomType ZoomType) {
    return false;
}

bool UWorldMapIconBase::InitVisibility_Implementation(EWorldMapZoomType ZoomType) {
    return false;
}

void UWorldMapIconBase::InitIsFocusOfStoryInfoDisplays_Implementation(EWorldMapZoomType ZoomType) {
}

float UWorldMapIconBase::IconAnimInterpolation(const float& Start, const float& End, float Alpha) {
    return 0.0f;
}

void UWorldMapIconBase::HideAllStoryInfoWidget_Implementation() {
}

FWorldMapIconData UWorldMapIconBase::GetWorldMapIconData() const {
    return FWorldMapIconData{};
}

FName UWorldMapIconBase::GetWorldMapDataLabel() const {
    return NAME_None;
}

FWorldMapTable UWorldMapIconBase::GetWorldMapData() const {
    return FWorldMapTable{};
}

TArray<UWorldMapStoryInfoDisplayBase*> UWorldMapIconBase::GetVisibleStoryInfoWidget() const {
    return TArray<UWorldMapStoryInfoDisplayBase*>();
}

FVector2D UWorldMapIconBase::GetSnapPosition() const {
    return FVector2D{};
}

FVector2D UWorldMapIconBase::GetPosition() const {
    return FVector2D{};
}


bool UWorldMapIconBase::GetIsSelecting() const {
    return false;
}

bool UWorldMapIconBase::GetIsPlayeingAnimation() const {
    return false;
}

bool UWorldMapIconBase::GetIsOnlyOccurringMerchantSubStory() const {
    return false;
}

bool UWorldMapIconBase::GetIsOccurringStoryByCategory(EMAIN_STORY_CATEGORY StoryCategory) const {
    return false;
}

bool UWorldMapIconBase::GetIsOccurringMainStory() const {
    return false;
}

bool UWorldMapIconBase::GetIsOccurringAnyStory() const {
    return false;
}

bool UWorldMapIconBase::GetIsDestinationLocation() const {
    return false;
}

bool UWorldMapIconBase::GetIsCurrentLocation() const {
    return false;
}


