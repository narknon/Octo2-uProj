#include "CommonDialog.h"

UCommonDialog::UCommonDialog() {
    this->ButtonIndex = 0;
}



bool UCommonDialog::OpenPlayerMoney_Implementation() {
    return false;
}

bool UCommonDialog::OpenDialog_Implementation(const FMJUICommonDialogParam& Param) {
    return false;
}

void UCommonDialog::OnSelectCallback() {
}

void UCommonDialog::ExecCloseFinishCallback() {
}

bool UCommonDialog::ClosePlayerMoney_Implementation() {
    return false;
}

bool UCommonDialog::CloseDialog_Implementation() {
    return false;
}

bool UCommonDialog::ButtonVisible_Implementation(bool Visible) {
    return false;
}


