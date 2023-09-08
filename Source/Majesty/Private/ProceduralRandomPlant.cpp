#include "ProceduralRandomPlant.h"

AProceduralRandomPlant::AProceduralRandomPlant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bCanUpdate = false;
    this->m_bCanBackPlant = false;
    this->m_bCanResetRandomSeed = false;
    this->m_bCanIsNextPlant = false;
    this->m_nRandomSeedCount = 0;
}


