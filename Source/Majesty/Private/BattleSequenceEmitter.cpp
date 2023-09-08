#include "BattleSequenceEmitter.h"
#include "EnforcerOffsetComponent.h"

ABattleSequenceEmitter::ABattleSequenceEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_cOriginalEffect = NULL;
    this->m_bEmitterTrigger = false;
    this->m_bEnableAttachTarget = false;
    this->m_cEnforcerOffsetComponent = CreateDefaultSubobject<UEnforcerOffsetComponent>(TEXT("EnforcerOffset"));
    this->m_cAttachBattleCharacter = NULL;
}

void ABattleSequenceEmitter::UpdateBattleEmitterVisibility(bool bVisible) {
}

void ABattleSequenceEmitter::SetParticleSystemTemplate(UParticleSystem* cTemplate) {
}

void ABattleSequenceEmitter::SetParticleSystemComponent(UParticleSystemComponent* cComponent) {
}

void ABattleSequenceEmitter::SetEnableAttachTarget(bool bEnable) {
}

void ABattleSequenceEmitter::SetEmitterTrigger(bool bTrigger) {
}

void ABattleSequenceEmitter::SetAttachBattleCharacter(ABattleCharacterBase* cCharacter) {
}

void ABattleSequenceEmitter::ReleaseParticleSystemComponent() {
}

bool ABattleSequenceEmitter::IsEnableAttachTarget() {
    return false;
}

bool ABattleSequenceEmitter::IsEmitterTrigger() {
    return false;
}

ABattleCharacterBase* ABattleSequenceEmitter::GetAttachBattleCharacter() {
    return NULL;
}


