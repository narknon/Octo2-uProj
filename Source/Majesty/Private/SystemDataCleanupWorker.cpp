#include "SystemDataCleanupWorker.h"

ASystemDataCleanupWorker::ASystemDataCleanupWorker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_targetSystemData = NULL;
}

void ASystemDataCleanupWorker::StartClearnup(UKSSaveSystem* SystemData) {
}

bool ASystemDataCleanupWorker::GetIsComplete() {
    return false;
}


