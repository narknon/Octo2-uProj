#include "FieldCommandWidgetItemBase.h"

UFieldCommandWidgetItemBase::UFieldCommandWidgetItemBase() {
    this->IsExecuted = false;
    this->IsSucceeded = false;
}


FName UFieldCommandWidgetItemBase::GetPlayEventLabel() const {
    return NAME_None;
}

TArray<FName> UFieldCommandWidgetItemBase::GetItemLabels() const {
    return TArray<FName>();
}

bool UFieldCommandWidgetItemBase::GetIsSucceeded() const {
    return false;
}

bool UFieldCommandWidgetItemBase::GetIsExecuted() const {
    return false;
}


