#include "AtomSound.h"
#include "AtomComponent.h"

AAtomSound::AAtomSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AtomComponent = CreateDefaultSubobject<UAtomComponent>(TEXT("AtomComponent0"));
    this->RootComponent = AtomComponent;
}


