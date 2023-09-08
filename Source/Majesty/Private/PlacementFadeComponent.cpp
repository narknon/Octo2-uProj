#include "PlacementFadeComponent.h"

UPlacementFadeComponent::UPlacementFadeComponent() {
    this->m_pOwnerAct = NULL;
    this->m_fFadeTimer = 0.00f;
    this->m_pMaterialInstance = NULL;
}

void UPlacementFadeComponent::StartFadeOutWithFadeTime(float fFadeTime) {
}

void UPlacementFadeComponent::StartFadeOut() {
}

void UPlacementFadeComponent::StartFadeInWithFadeTime(float fFadeTime) {
}

void UPlacementFadeComponent::StartFadeInWait() {
}

void UPlacementFadeComponent::StartFadeIn() {
}

void UPlacementFadeComponent::SetUpMaterialInstance(UMaterialInstanceDynamic* cMaterial) {
}

void UPlacementFadeComponent::SetExFactorFadeTime(float FadeTime) {
}

void UPlacementFadeComponent::SetExFactorFadeRate(float fadeRate) {
}

void UPlacementFadeComponent::SetCameraFactorFadeRate(float fadeRate) {
}

bool UPlacementFadeComponent::IsRunningExFactorFadeOut() {
    return false;
}

bool UPlacementFadeComponent::IsRunningCameraFactorFadeOut() {
    return false;
}

bool UPlacementFadeComponent::IsFadeOutFinish() {
    return false;
}

bool UPlacementFadeComponent::IsFadeMode() {
    return false;
}

bool UPlacementFadeComponent::IsFadeInWait() {
    return false;
}

bool UPlacementFadeComponent::IsFadeInFinish() {
    return false;
}

bool UPlacementFadeComponent::IsFadeFinish() {
    return false;
}

bool UPlacementFadeComponent::IsCompletedExFactorFadeOut() const {
    return false;
}

bool UPlacementFadeComponent::IsCompletedCameraFactorFadeOut() const {
    return false;
}

UMaterialInstanceDynamic* UPlacementFadeComponent::GetMaterialInstance() {
    return NULL;
}

void UPlacementFadeComponent::FadeInImmediately() {
}


