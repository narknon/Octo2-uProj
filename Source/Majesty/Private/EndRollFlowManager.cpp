#include "EndRollFlowManager.h"

AEndRollFlowManager::AEndRollFlowManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentState = EEndRollFlowState::NONE;
    this->StagingTimer = 0.00f;
}

void AEndRollFlowManager::UpdateStagingTime(float DeltaTime) {
}

void AEndRollFlowManager::UpdateSegments() {
}

void AEndRollFlowManager::UpdateManager_Implementation(float DeltaSeconds) {
}

void AEndRollFlowManager::StopEndRoll() {
}

void AEndRollFlowManager::StartEndroll() {
}

void AEndRollFlowManager::SegmentTransitionCallback(UEndRollSegmentPlayData* Segment) {
}

void AEndRollFlowManager::ResetEndRoll() {
}




void AEndRollFlowManager::OnBeginPlay_Implementation() {
}

bool AEndRollFlowManager::IsSegmentsCompleted() const {
    return false;
}

bool AEndRollFlowManager::IsReadyEndRoll() const {
    return false;
}

bool AEndRollFlowManager::IsPlayingEndRoll() const {
    return false;
}

bool AEndRollFlowManager::IsDisplayDebugInfo() {
    return false;
}

EEndRollSegmentSet AEndRollFlowManager::GetNextPlaySegmentID() {
    return EEndRollSegmentSet::ER_NONE;
}

void AEndRollFlowManager::DebugUpdate() {
}


void AEndRollFlowManager::ChangeState(EEndRollFlowState NextState) {
}


void AEndRollFlowManager::AddSegment(FEndRollSegmentData& segmentData, EEndRollSegmentSet segSetID, bool IsEnable, float startEvImageTime, float startBattleTime, float EndTime, float wipeTime) {
}


