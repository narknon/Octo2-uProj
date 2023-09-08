#include "MJPostProcessVolume.h"

AMJPostProcessVolume::AMJPostProcessVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_nIndex = 0;
    this->bBattleMap = false;
    this->m_pAddPostProcessMaterial = NULL;
}

void AMJPostProcessVolume::AddPostProcessMaterial(UMaterial* PPM) {
}


