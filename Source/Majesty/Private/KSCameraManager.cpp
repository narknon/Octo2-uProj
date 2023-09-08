#include "KSCameraManager.h"

AKSCameraManager::AKSCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EncountCapture = false;
    this->ActiveType = EKSCameraType::MAX;
    this->OldType = EKSCameraType::CAMERA_DEFAULT;
    this->CameraTargets.AddDefaulted(7);
    this->CameraComponents.AddDefaulted(7);
    this->SpringArmComponents.AddDefaulted(7);
    this->RelativeCameraLocation.AddDefaulted(7);
    this->m_fDefaultFieldFocusDistance = 0.00f;
}

void AKSCameraManager::SetFieldFoucusDistance(float fFoucusDistance) {
}

void AKSCameraManager::SetComponent(EKSCameraType eType, AActor* Target, UCameraComponent* Camera, USpringArmComponent* SpringArm) {
}

bool AKSCameraManager::SetCameraActive(EKSCameraType eType, float fBlend) {
    return false;
}

void AKSCameraManager::ResetFieldFoucusDistance() {
}

void AKSCameraManager::OnLevelChangeCompleted(ENOTICE_TYPE noticeType, const FNoticeArgs& Args) {
}

AActor* AKSCameraManager::GetTarget(EKSCameraType eType) {
    return NULL;
}

USpringArmComponent* AKSCameraManager::GetSpringArm(EKSCameraType eType) {
    return NULL;
}

FVector AKSCameraManager::GetRelativeCameraLocation(EKSCameraType eType) const {
    return FVector{};
}

EKSCameraType AKSCameraManager::GetCurrentCameraType() const {
    return EKSCameraType::CAMERA_DEFAULT;
}

UCameraComponent* AKSCameraManager::GetCameraComponent(EKSCameraType eType) {
    return NULL;
}

USpringArmComponent* AKSCameraManager::GetActiveSpringArm() {
    return NULL;
}

AActor* AKSCameraManager::GetActiveCameraTarget() {
    return NULL;
}

UCameraComponent* AKSCameraManager::GetActiveCameraComponent() {
    return NULL;
}

void AKSCameraManager::ForceUpdatePlayerCameraManager(float InDeltaTime) {
}



