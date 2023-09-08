#include "BattleCamera.h"

ABattleCamera::ABattleCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_eCameraType = EBATTLE_CAMERA_TYPE::NEAR;
    this->bCameraWaitMove = true;
}


















FRotator ABattleCamera::GetLastLookatTrackingRotation(ACineCameraActor* cTargetCamera) {
    return FRotator{};
}

FVector ABattleCamera::GetLastLookatTrackingPosition(ACineCameraActor* cTargetCamera) {
    return FVector{};
}


void ABattleCamera::GetAudioListenerPosition(FVector& OutLocation, FVector& outFrontDir, FVector& outRightDir) {
}






bool ABattleCamera::CheckZeroRotator(FRotator cRotator) {
    return false;
}


