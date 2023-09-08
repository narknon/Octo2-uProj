#include "DarkAreaParticleComponent.h"

UDarkAreaParticleComponent::UDarkAreaParticleComponent() {
}

void UDarkAreaParticleComponent::SetTransformOffset(const FVector& LocationOffset, const FRotator& RotationOffset, const FVector& ScaleOffset) {
}

void UDarkAreaParticleComponent::SetEnableEffect(bool Enable) {
}

void UDarkAreaParticleComponent::SetDarkAreaEffectParam(const FWorldMapDarkAreaEffectParam& newParam) {
}

void UDarkAreaParticleComponent::SetBaseLocation(const FVector& baseLocation) {
}

FName UDarkAreaParticleComponent::GetWorldMapLabel() const {
    return NAME_None;
}

FName UDarkAreaParticleComponent::GetDarkAreaLabel() const {
    return NAME_None;
}

FWorldMapDarkAreaEffectParam UDarkAreaParticleComponent::GetDarkAreaEffectParam() const {
    return FWorldMapDarkAreaEffectParam{};
}

void UDarkAreaParticleComponent::ApplyTransform_Implementation() {
}


