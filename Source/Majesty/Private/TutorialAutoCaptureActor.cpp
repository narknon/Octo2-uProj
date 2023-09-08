#include "TutorialAutoCaptureActor.h"

ATutorialAutoCaptureActor::ATutorialAutoCaptureActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_State = ETutorialAutoCaptureActorState::None;
}

void ATutorialAutoCaptureActor::SetState(ETutorialAutoCaptureActorState State) {
}

ETutorialAutoCaptureActorState ATutorialAutoCaptureActor::GetState() const {
    return ETutorialAutoCaptureActorState::None;
}


