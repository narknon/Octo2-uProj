#include "TitleBase.h"

UTitleBase::UTitleBase() {
}

void UTitleBase::Start_Implementation() {
}

void UTitleBase::SetNextScene(EUITitleFlow Scene) {
}

void UTitleBase::SetCurrentScene(EUITitleFlow Scene) {
}

void UTitleBase::OnFinishedFadeOut_Implementation() {
}

void UTitleBase::OnFinishedFadeIn_Implementation() {
}

bool UTitleBase::IsEnd_Implementation() {
    return false;
}

EUITitleFlow UTitleBase::GetNextScene() {
    return EUITitleFlow::eLogo;
}

EUITitleFlow UTitleBase::GetCurrentScene() {
    return EUITitleFlow::eLogo;
}

void UTitleBase::End_Implementation() {
}

bool UTitleBase::AllowPushToUIManager_Implementation() {
    return false;
}


