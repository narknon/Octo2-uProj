#pragma once
#include "CoreMinimal.h"
#include "FieldCommandWidgetBase.h"
#include "FieldCommandWidgetInfoBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UFieldCommandWidgetInfoBase : public UFieldCommandWidgetBase {
    GENERATED_BODY()
public:
    UFieldCommandWidgetInfoBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenInformationDialog(FName NPCLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenFailedDialog(FName NPCLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenConfirmDialog(FName NPCLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetResult(bool& WasExece, bool& WasSuccess);
    
};

