#include "AcqManagerBase.h"

AAcqManagerBase::AAcqManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AAcqManagerBase::UpdateManager_Implementation(float DeltaSeconds) {
}

void AAcqManagerBase::StartManager() {
}

bool AAcqManagerBase::ResetManagerFromTitle_Implementation() {
    return false;
}

bool AAcqManagerBase::ResetManager_Implementation() {
    return false;
}

bool AAcqManagerBase::PrepareManager_Implementation() {
    return false;
}

void AAcqManagerBase::PostInitManager_Implementation() {
}

void AAcqManagerBase::OnBeginPlay_Implementation() {
}

bool AAcqManagerBase::IsAvailable() const {
    return false;
}

bool AAcqManagerBase::DestroyManager_Implementation() {
    return false;
}


