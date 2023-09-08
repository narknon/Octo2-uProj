#include "GameDataClearnupWorker.h"

AGameDataClearnupWorker::AGameDataClearnupWorker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_targetSystemData = NULL;
}

void AGameDataClearnupWorker::StartClearnup(UKSSaveSystem* SystemData) {
}

bool AGameDataClearnupWorker::GetIsDeleted() {
    return false;
}

bool AGameDataClearnupWorker::GetIsComplete() {
    return false;
}


