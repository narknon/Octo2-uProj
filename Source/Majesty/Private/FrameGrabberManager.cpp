#include "FrameGrabberManager.h"

AFrameGrabberManager::AFrameGrabberManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialInstanceDynamic = NULL;
    this->CaptureFrameTexture = NULL;
    this->NoiseAnimation = false;
    this->m_bCaptureSuccess = false;
}

void AFrameGrabberManager::StopFrameGrab() {
}

bool AFrameGrabberManager::StartFrameGrab() {
    return false;
}

void AFrameGrabberManager::SetMaterialInstanceDynamic(UMaterialInstanceDynamic* MaterialInstance) {
}

void AFrameGrabberManager::SetCaptureEnable(bool Enable) {
}


