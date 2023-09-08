#include "UITutorialTemplateBase.h"

UUITutorialTemplateBase::UUITutorialTemplateBase() : UUserWidget(FObjectInitializer::Get()) {
    this->FocusAnimation = NULL;
    this->OutFocusAnimation = NULL;
}

void UUITutorialTemplateBase::SetVisibleList(ESlateVisibility Visible, int32 Index) {
}

void UUITutorialTemplateBase::SetUIFocus(bool Focus, bool Fast) {
}

void UUITutorialTemplateBase::SetPageText(FName TextLabel, int32 TextID) {
}

void UUITutorialTemplateBase::SetPageImage(UTexture2D* SetTexture, int32 TextID) {
}

void UUITutorialTemplateBase::RefreshImage() {
}

void UUITutorialTemplateBase::RefleshText() {
}

bool UUITutorialTemplateBase::GetUseBackGround_Implementation() {
    return false;
}

int32 UUITutorialTemplateBase::GetTemplateType_Implementation() {
    return 0;
}



