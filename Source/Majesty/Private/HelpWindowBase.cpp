#include "HelpWindowBase.h"

UHelpWindowBase::UHelpWindowBase() {
    this->m_WidgetRoot = NULL;
}


void UHelpWindowBase::SetPosition(const FVector2D& NewPosition) {
}

void UHelpWindowBase::SetOffset(const FVector2D& Offset) {
}

FVector2D UHelpWindowBase::GetCurrentOffset() const {
    return FVector2D{};
}


