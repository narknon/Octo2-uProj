#include "AtomEntranceVolume.h"
#include "Net/UnrealNetwork.h"

AAtomEntranceVolume::AAtomEntranceVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0.00f;
    this->bEnabled = true;
    this->bColored = true;
}

void AAtomEntranceVolume::SetPriority(float NewPriority) {
}

void AAtomEntranceVolume::SetEnabled(bool bNewEnabled) {
}

void AAtomEntranceVolume::OnRep_bEnabled() {
}

float AAtomEntranceVolume::GetPriority() const {
    return 0.0f;
}

bool AAtomEntranceVolume::GetEnabled() const {
    return false;
}

void AAtomEntranceVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAtomEntranceVolume, bEnabled);
    DOREPLIFETIME(AAtomEntranceVolume, NeighbourhoodAudioVolumeArray);
}


