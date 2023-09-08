#include "BattleAbilitySequenceActor.h"

ABattleAbilitySequenceActor::ABattleAbilitySequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bPauseAbilitySequenceUpdate = false;
}

void ABattleAbilitySequenceActor::SetSupportRotationEffectList(TArray<ABattleSequenceEmitter*>& acEffectList) {
}

void ABattleAbilitySequenceActor::SetAbilitySequencePause(bool bPauseEnable) {
}

void ABattleAbilitySequenceActor::SetAbilityHitEffectList(TArray<ABattleSequenceEmitter*>& acEffectList) {
}

bool ABattleAbilitySequenceActor::GetAbilitySequencePause() {
    return false;
}


