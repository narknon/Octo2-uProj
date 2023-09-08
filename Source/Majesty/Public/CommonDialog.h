#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "MJUICommonDialogParam.h"
#include "CommonDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UCommonDialog : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMJUICommonDialogParam CurrentParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ButtonIndex;
    
public:
    UCommonDialog();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SettingSelectSE(const TArray<FName>& SelectSE);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectButton(int32 buttonIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OpenPlayerMoney();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OpenDialog(const FMJUICommonDialogParam& Param);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectCallback();
    
    UFUNCTION(BlueprintCallable)
    void ExecCloseFinishCallback();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ClosePlayerMoney();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CloseDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ButtonVisible(bool Visible);
    
};

