#include "LibDialog.h"

ULibDialog::ULibDialog() {
}

UCommonDialog* ULibDialog::OpenDialog(const FMJUICommonDialogParam& Param) {
    return NULL;
}

void ULibDialog::IsDialogRunning(bool& IsRunning) {
}

FMJUICommonDialogParam ULibDialog::CreateSelectWidgetParam(FText Caption, FText Detail, TArray<UUserWidget*> SelectWidgetList, int32 SelectIndex, bool OnTop, FCloseFinishCallback CloseFinishCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateEventParam_OpenSe(FText Caption, FText Detail, TArray<FText> ButtonText, FName OpenSeLabel) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateEventParam_FinishCallback(FText Caption, FText Detail, TArray<FText> ButtonText, FCloseFinishCallback CloseFinishCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateEventParam_EnableBlood(FText Caption, FText Detail, TArray<FText> ButtonText, bool EnableCancel, TArray<bool> BloodList, FCloseFinishCallback CloseFinishCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateEventParam_CancelKey_FinishCallback(FText Caption, FText Detail, TArray<FText> ButtonText, bool EnableCancel, FCloseFinishCallback CloseFinishCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateEventParam_CancelKey_DefaultButton_FinishCallback(FText Caption, FText Detail, TArray<FText> ButtonText, bool EnableCancel, int32 DefaultButton, FCloseFinishCallback CloseFinishCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateEventParam(FText Caption, FText Detail, TArray<FText> ButtonText) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam_OpenSe_FinishCallback(FText Caption, FText Detail, TArray<FText> ButtonText, FName OpenSeLabel, FCloseFinishCallback CloseFinishCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam_FinishCallback(FText Caption, FText Detail, TArray<FText> ButtonText, FCloseFinishCallback CloseFinishCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam_Duplication(FText Caption, FText Detail, TArray<FText> ButtonText, bool DuplocationFlag) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam_Detail_AutoClose_Cancel_Input_SelectCallback(FText Caption, FText Detail, TArray<FText> ButtonText, UUserWidget* AttachDetail, bool AutoClose, bool EnableCancel, bool InputReception, FSelectCallback SelectCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam_DefaultButton_FinishCallback(FText Caption, FText Detail, TArray<FText> ButtonText, int32 DefaultButton, FCloseFinishCallback CloseFinishCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam_AutoSelectClose_Callback(FText Caption, FText Detail, TArray<FText> ButtonText, bool AutoSelectClose, FCloseFinishCallback CloseFinishCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam_AutoSelectClose(FText Caption, FText Detail, TArray<FText> ButtonText, bool AutoSelectClose) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam_AutoClose_Cancel_InputReception(FText Caption, FText Detail, TArray<FText> ButtonText, bool AutoClose, bool EnableCancel, bool InputReception) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam_AutoClose_Cancel_Callback(FText Caption, FText Detail, TArray<FText> ButtonText, bool AutoSelectClose, bool Cancel, FCloseFinishCallback CloseFinishCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam_AutoClose_AttachCaption_SelectCallback(FText Caption, FText Detail, TArray<FText> ButtonText, bool AutoClose, UUserWidget* AttachCaption, bool CaptionTop, bool CaptionSeparation, FSelectCallback SelectCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam_AttachDetail_Callback(FText Caption, FText Detail, TArray<FText> ButtonText, UUserWidget* AttachDetail, bool OnTop, FCloseFinishCallback CloseFinishCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam_AttachDetail_AttachCaption_Callback(FText Caption, FText Detail, TArray<FText> ButtonText, UUserWidget* AttachCaption, bool CaptionTop, bool CaptionSeparation, UUserWidget* AttachDetail, bool DetailTop, FCloseFinishCallback CloseFinishCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam_AttachCaption_OpenSe_Callback(FText Caption, FText Detail, TArray<FText> ButtonText, UUserWidget* AttachCaption, bool CaptionTop, bool CaptionSeparation, FName OpenSeLabel, FCloseFinishCallback CloseFinishCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam_AttachCaption_Callback(FText Caption, FText Detail, TArray<FText> ButtonText, UUserWidget* AttachCaption, bool CaptionTop, bool CaptionSeparation, FCloseFinishCallback CloseFinishCallback) {
    return FMJUICommonDialogParam{};
}

FMJUICommonDialogParam ULibDialog::CreateDefaultParam(FText Caption, FText Detail, TArray<FText> ButtonText) {
    return FMJUICommonDialogParam{};
}


