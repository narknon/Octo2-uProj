#include "DialogManager.h"

ADialogManager::ADialogManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ADialogManager::SetSelectSE(const TArray<FName>& SelectSE) {
}


void ADialogManager::SetButtonVisible(bool Visible) {
}

UCommonDialog* ADialogManager::OpenRequestDialog_Implementation(const FMJUICommonDialogParam& Param) {
    return NULL;
}

void ADialogManager::OnDialogCloseFinishCallback() {
}

bool ADialogManager::IsDialogRunning() {
    return false;
}


UCommonDialog* ADialogManager::GetTopDialog() {
    return NULL;
}

bool ADialogManager::CloseRequestDialog_Implementation() {
    return false;
}


