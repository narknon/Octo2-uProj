#include "EnvSoundObjectBase.h"

AEnvSoundObjectBase::AEnvSoundObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_cpAtomComponent = NULL;
}

void AEnvSoundObjectBase::BattleChange_SavePlayingState() {
}

void AEnvSoundObjectBase::BattleChange_RestorePlayingState() {
}


