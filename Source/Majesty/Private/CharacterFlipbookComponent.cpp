#include "CharacterFlipbookComponent.h"

UCharacterFlipbookComponent::UCharacterFlipbookComponent() {
}

void UCharacterFlipbookComponent::SetFlipbookVisibility(bool bVisibility) {
}

void UCharacterFlipbookComponent::SetFlipbookOffset(const FVector& Offset) {
}

void UCharacterFlipbookComponent::SetCharacterDir(EKSCharacterDir Dir) {
}

void UCharacterFlipbookComponent::SetCharacterActionLabel(FName CharaActionLabel) {
}

void UCharacterFlipbookComponent::PlayCurrentAnimation() {
}

void UCharacterFlipbookComponent::PlayAnimation(EKSCharacterAction eAction) {
}

bool UCharacterFlipbookComponent::IsFlipbookVisibile() {
    return false;
}

UMaterialInstanceDynamic* UCharacterFlipbookComponent::GetCurrentFlipbookMaterial() {
    return NULL;
}

UMaterialInstanceDynamic* UCharacterFlipbookComponent::GetCachedFlipbookMaterial(FName FlipbookName) {
    return NULL;
}


