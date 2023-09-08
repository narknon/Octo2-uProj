#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CloseFinishCallbackDelegate.h"
#include "MJUICommonDialogParam.h"
#include "SelectCallbackDelegate.h"
#include "LibDialog.generated.h"

class UCommonDialog;
class UUserWidget;

UCLASS(Blueprintable)
class MAJESTY_API ULibDialog : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibDialog();
    UFUNCTION(BlueprintCallable)
    static UCommonDialog* OpenDialog(const FMJUICommonDialogParam& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsDialogRunning(bool& IsRunning);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateSelectWidgetParam(FText Caption, FText Detail, TArray<UUserWidget*> SelectWidgetList, int32 SelectIndex, bool OnTop, FCloseFinishCallback CloseFinishCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateEventParam_OpenSe(FText Caption, FText Detail, TArray<FText> ButtonText, FName OpenSeLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateEventParam_FinishCallback(FText Caption, FText Detail, TArray<FText> ButtonText, FCloseFinishCallback CloseFinishCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateEventParam_EnableBlood(FText Caption, FText Detail, TArray<FText> ButtonText, bool EnableCancel, TArray<bool> BloodList, FCloseFinishCallback CloseFinishCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateEventParam_CancelKey_FinishCallback(FText Caption, FText Detail, TArray<FText> ButtonText, bool EnableCancel, FCloseFinishCallback CloseFinishCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateEventParam_CancelKey_DefaultButton_FinishCallback(FText Caption, FText Detail, TArray<FText> ButtonText, bool EnableCancel, int32 DefaultButton, FCloseFinishCallback CloseFinishCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateEventParam(FText Caption, FText Detail, TArray<FText> ButtonText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam_OpenSe_FinishCallback(FText Caption, FText Detail, TArray<FText> ButtonText, FName OpenSeLabel, FCloseFinishCallback CloseFinishCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam_FinishCallback(FText Caption, FText Detail, TArray<FText> ButtonText, FCloseFinishCallback CloseFinishCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam_Duplication(FText Caption, FText Detail, TArray<FText> ButtonText, bool DuplocationFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam_Detail_AutoClose_Cancel_Input_SelectCallback(FText Caption, FText Detail, TArray<FText> ButtonText, UUserWidget* AttachDetail, bool AutoClose, bool EnableCancel, bool InputReception, FSelectCallback SelectCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam_DefaultButton_FinishCallback(FText Caption, FText Detail, TArray<FText> ButtonText, int32 DefaultButton, FCloseFinishCallback CloseFinishCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam_AutoSelectClose_Callback(FText Caption, FText Detail, TArray<FText> ButtonText, bool AutoSelectClose, FCloseFinishCallback CloseFinishCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam_AutoSelectClose(FText Caption, FText Detail, TArray<FText> ButtonText, bool AutoSelectClose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam_AutoClose_Cancel_InputReception(FText Caption, FText Detail, TArray<FText> ButtonText, bool AutoClose, bool EnableCancel, bool InputReception);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam_AutoClose_Cancel_Callback(FText Caption, FText Detail, TArray<FText> ButtonText, bool AutoSelectClose, bool Cancel, FCloseFinishCallback CloseFinishCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam_AutoClose_AttachCaption_SelectCallback(FText Caption, FText Detail, TArray<FText> ButtonText, bool AutoClose, UUserWidget* AttachCaption, bool CaptionTop, bool CaptionSeparation, FSelectCallback SelectCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam_AttachDetail_Callback(FText Caption, FText Detail, TArray<FText> ButtonText, UUserWidget* AttachDetail, bool OnTop, FCloseFinishCallback CloseFinishCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam_AttachDetail_AttachCaption_Callback(FText Caption, FText Detail, TArray<FText> ButtonText, UUserWidget* AttachCaption, bool CaptionTop, bool CaptionSeparation, UUserWidget* AttachDetail, bool DetailTop, FCloseFinishCallback CloseFinishCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam_AttachCaption_OpenSe_Callback(FText Caption, FText Detail, TArray<FText> ButtonText, UUserWidget* AttachCaption, bool CaptionTop, bool CaptionSeparation, FName OpenSeLabel, FCloseFinishCallback CloseFinishCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam_AttachCaption_Callback(FText Caption, FText Detail, TArray<FText> ButtonText, UUserWidget* AttachCaption, bool CaptionTop, bool CaptionSeparation, FCloseFinishCallback CloseFinishCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMJUICommonDialogParam CreateDefaultParam(FText Caption, FText Detail, TArray<FText> ButtonText);
    
};

