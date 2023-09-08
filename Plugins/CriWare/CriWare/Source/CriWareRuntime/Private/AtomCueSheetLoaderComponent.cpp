#include "AtomCueSheetLoaderComponent.h"

UAtomCueSheetLoaderComponent::UAtomCueSheetLoaderComponent() {
    this->BinderComponent = NULL;
    this->CueSheet = NULL;
    this->bAutoActivate = true;
}

void UAtomCueSheetLoaderComponent::LoadAtomCueSheet(UObject* WorldContextObject, TSoftObjectPtr<USoundAtomCueSheet> Asset, UAtomCueSheetLoaderComponent::FOnAtomCueSheetLoaded OnLoaded, FLatentActionInfo LatentInfo) {
}

void UAtomCueSheetLoaderComponent::Load() {
}

EAtomCueSheetLoaderComponentStatus UAtomCueSheetLoaderComponent::GetStatus() {
    return EAtomCueSheetLoaderComponentStatus::Stop;
}

USoundAtomCueSheet* UAtomCueSheetLoaderComponent::GetAtomCueSheet() {
    return NULL;
}


