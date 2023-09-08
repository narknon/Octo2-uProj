#include "FieldCommandPreviewPanelBase.h"

UFieldCommandPreviewPanelBase::UFieldCommandPreviewPanelBase() {
    this->m_CurrentCursorIndex = 0;
    this->m_BanInput = 0;
}

void UFieldCommandPreviewPanelBase::SetCurrentCursorIndex(int32 Index) {
}

void UFieldCommandPreviewPanelBase::SetBanInput(int32 allow) {
}

int32 UFieldCommandPreviewPanelBase::GetCurrentCursorIndex() {
    return 0;
}

bool UFieldCommandPreviewPanelBase::GetBanInput(EUI_INPUT_TYPE Type) {
    return false;
}


