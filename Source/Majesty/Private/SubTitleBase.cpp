#include "SubTitleBase.h"

USubTitleBase::USubTitleBase() {
    this->EventRequest = false;
}


void USubTitleBase::SetSubTitleLabel(FName Label) {
}

void USubTitleBase::SetEventOpenRequest(bool IsEventRequest) {
}

void USubTitleBase::SetAfterEventLabel(FName EventLabel) {
}

void USubTitleBase::OnFieldChangeFinishCallback(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args) {
}



FName USubTitleBase::GetAfterEventLabel() {
    return NAME_None;
}



