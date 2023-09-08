#include "NPCSpawnTarget.h"

ANPCSpawnTarget::ANPCSpawnTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NPCCharacter = NULL;
    this->SpawnObject = NULL;
    this->NPCID = 0;
    this->ObjectId = 0;
    this->Dir = EKSCharacterDir::FRONT;
}

bool ANPCSpawnTarget::IsSpawn(const TArray<int32>& EventFlag, const FNPCSpawnData& CheckData) {
    return false;
}


