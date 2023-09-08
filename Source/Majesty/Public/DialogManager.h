#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "MJUICommonDialogParam.h"
#include "DialogManager.generated.h"

class UCommonDialog;

UCLASS(Blueprintable)
class MAJESTY_API ADialogManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonDialog*> DialogList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMJUICommonDialogParam RequestParam;
    
public:
    ADialogManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetSelectSE(const TArray<FName>& SelectSE);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetReference();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetButtonVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UCommonDialog* OpenRequestDialog(const FMJUICommonDialogParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void OnDialogCloseFinishCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDialogRunning();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Initialize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonDialog* GetTopDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CloseRequestDialog();
    
};

