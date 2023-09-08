#pragma once
#include "CoreMinimal.h"
#include "FieldCommandWidgetBase.h"
#include "UFieldCommandWidgetFollowBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UUFieldCommandWidgetFollowBase : public UFieldCommandWidgetBase {
    GENERATED_BODY()
public:
    UUFieldCommandWidgetFollowBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenSwapDialog();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenReleaseDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenFollowDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenFixedFollowNPCReleaseDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenFixedFollowNPCDialog();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenFailedDialog();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetDialogInput(int32& DialogInput);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseDialog();
    
};

