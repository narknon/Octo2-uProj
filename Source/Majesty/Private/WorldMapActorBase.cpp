#include "WorldMapActorBase.h"

AWorldMapActorBase::AWorldMapActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CurrentNormalizedTime = 0.00f;
    this->m_WorldMapGlobeState = EWorldMapGlobeState::eNone;
    this->m_BlurStrength = 0.00f;
    this->m_WidgetOpacity = 1.00f;
    this->m_WidgetScale = 1.00f;
    this->m_FrameWidgetScale = 1.00f;
    this->m_DarkEffectParticleTemplate = NULL;
    this->m_SacredFireParticleTemplate = NULL;
    this->m_SacredFireLineParticleTemplate = NULL;
    this->m_AutoRotateCurrentTime = 0.00f;
    this->m_AutoRotateDurationTime = 0.00f;
    this->m_AutoRotateAnimCurve = NULL;
}

bool AWorldMapActorBase::UpdateZoom_Implementation(float DeltaTime, bool IsMovedCursor, FVector2D& rotationDelta) {
    return false;
}

bool AWorldMapActorBase::StartCameraZoomIfPossible_Implementation(EWorldMapZoomType NewZoomType, FVector2D GazePoint) {
    return false;
}

void AWorldMapActorBase::SetWorldMapGlobeState(EWorldMapGlobeState NewState) {
}

void AWorldMapActorBase::SetupDarkAreaEffect_Implementation() {
}

void AWorldMapActorBase::SetSelectingPivotLable(const FName& WorldMapLabel) {
}

void AWorldMapActorBase::SetGlobeRotation_Implementation(const FRotator& NewRotation, FRotator& outClanpedNewRotation) {
}

void AWorldMapActorBase::SetGlobeLocation_Implementation(const FVector& NewLocation, FVector& outClanpedNewLocation) {
}

void AWorldMapActorBase::SetCurrentNormalizedTime(float NewCurrentNormalizedTime) {
}

void AWorldMapActorBase::RotateToCenterByLebelWithAnim_Implementation(FName WorldMapLabel, UCurveFloat* AnimCurve, float Speed) {
}

void AWorldMapActorBase::RotateToCenterByLebel_Implementation(FName WorldMapLabel) {
}

void AWorldMapActorBase::RotateGlobe_Implementation(FVector2D RotateDelta, FVector2D& outClampedRotateDelta) {
}

void AWorldMapActorBase::RequestStartCameraZoom_Implementation(EWorldMapZoomType NewZoomType, FVector2D GazePoint) {
}

void AWorldMapActorBase::RefreshWorldMapMaskInPlayerSelect_Implementation() {
}

void AWorldMapActorBase::RefreshWorldMapMask_Implementation() {
}





void AWorldMapActorBase::OverrideGazePoint_Implementation(FVector2D GazePoint) {
}

void AWorldMapActorBase::OpenWorldMapActor_Implementation(EWorldMapZoomType initZoomType) {
}

void AWorldMapActorBase::IsReachedGlobeInRotationLimit_Implementation(bool& isReachedX, bool& isReachedY) {
}








void AWorldMapActorBase::HideAllDarkAreaEffect_Implementation() {
}


EWorldMapGlobeState AWorldMapActorBase::GetWorldMapGlobeState() {
    return EWorldMapGlobeState::eNone;
}

float AWorldMapActorBase::GetWidgetScale() const {
    return 0.0f;
}

float AWorldMapActorBase::GetWidgetOpacity() const {
    return 0.0f;
}

TArray<UWorldMapPivotComponentBase*> AWorldMapActorBase::GetSortedPivotComponentsByYaw() {
    return TArray<UWorldMapPivotComponentBase*>();
}


TArray<UWorldMapPivotComponentBase*> AWorldMapActorBase::GetPivotComponents() const {
    return TArray<UWorldMapPivotComponentBase*>();
}

UDarkAreaParticleComponent* AWorldMapActorBase::GetOrCreateDarkAreaEffectComponent_Implementation(const FName& RowName, const FWorldMapDarkAreaEffectParam& EffectParam) {
    return NULL;
}


bool AWorldMapActorBase::GetIsZooming_Implementation() {
    return false;
}

FVector AWorldMapActorBase::GetGlobeWorldPosition_Implementation() {
    return FVector{};
}

FRotator AWorldMapActorBase::GetGlobeRotation_Implementation() {
    return FRotator{};
}

FVector AWorldMapActorBase::GetGlobeLocation_Implementation() {
    return FVector{};
}



float AWorldMapActorBase::GetFrameWidgetScale() const {
    return 0.0f;
}

EWorldMapZoomType AWorldMapActorBase::GetCurrentZoomState_Implementation() {
    return EWorldMapZoomType::ZOOM_NEAR;
}


float AWorldMapActorBase::GetBlurStrength() const {
    return 0.0f;
}

UWorldMapPivotComponentBase* AWorldMapActorBase::FindPivotComponent(const FName& WorldMapLabel) const {
    return NULL;
}

void AWorldMapActorBase::CloseWorldMapActor_Implementation() {
}


