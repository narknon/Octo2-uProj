#include "TitleBackSceneBase.h"

UTitleBackSceneBase::UTitleBackSceneBase() {
    this->m_State = ETitleMovieState::eWaiting;
}

void UTitleBackSceneBase::SetState(ETitleMovieState NewState) {
}

void UTitleBackSceneBase::Debug_SetPrintCurrentTimeText(const FString& Text) {
}

bool UTitleBackSceneBase::Debug_GetIsPrintCurrentTime() {
    return false;
}


