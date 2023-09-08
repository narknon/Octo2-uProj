#include "KSEffectManager.h"

AKSEffectManager::AKSEffectManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_IsEffectManagerReady = false;
}

void AKSEffectManager::SuspendEffect(UParticleSystemComponent* EFFECT) {
}

void AKSEffectManager::SpawnEffect(FName EffectName, AActor* TargetActor, FVector Location, FRotator Rotate, bool ForceSpawn, UParticleSystemComponent*& EFFECT, bool& success, bool& LoopEffect, FVector Scale) {
}

void AKSEffectManager::SetEffectSetupFlag(bool Flag) {
}

void AKSEffectManager::SetEffectList(TArray<FName> EffectList) {
}

void AKSEffectManager::SetDebugMode(bool isDebug) {
}

void AKSEffectManager::ResumeEffect(UParticleSystemComponent* EFFECT) {
}

bool AKSEffectManager::IsEffectManagerReady() {
    return false;
}

bool AKSEffectManager::IsDebugMode() {
    return false;
}

uint8 AKSEffectManager::GetDebugAddCnt() {
    return 0;
}

void AKSEffectManager::DestroyEffect(UParticleSystemComponent* EFFECT) {
}


void AKSEffectManager::CallbackSystemFinished(UParticleSystemComponent* Component) {
}

void AKSEffectManager::CallbackParticleSpawn(FName Name, float Float, FVector VectorA, FVector VectorB) {
}


