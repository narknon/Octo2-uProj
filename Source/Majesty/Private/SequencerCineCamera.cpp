#include "SequencerCineCamera.h"

ASequencerCineCamera::ASequencerCineCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ESeqMode = ESEQ_CAMERA_MODE::eNONE;
    this->m_fLimitTime = 0.00f;
    this->m_fNowTime = 0.00f;
}

void ASequencerCineCamera::UpdateSepiaStart_Implementation(UCameraComponent* TargetCamera, float DeltaTime) {
}

void ASequencerCineCamera::UpdateSepiaEnd_Implementation(UCameraComponent* TargetCamera, float DeltaTime) {
}

void ASequencerCineCamera::UpdateMonochromeStart_Implementation(UCameraComponent* TargetCamera, float DeltaTime) {
}

void ASequencerCineCamera::UpdateMonochromeEnd_Implementation(UCameraComponent* TargetCamera, float Scale) {
}

void ASequencerCineCamera::SetupCamera(AActor* pTarget) {
}

void ASequencerCineCamera::ChangeSepiaMode(float ChangeTime, bool Enable) {
}

void ASequencerCineCamera::ChangeMonochromeMode(float ChangeTime, bool Enable) {
}


