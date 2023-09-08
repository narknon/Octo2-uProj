#pragma once
#include "CoreMinimal.h"
#include "FieldCommandWidgetBase.h"
#include "FieldCommandWidgetSwoonBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UFieldCommandWidgetSwoonBase : public UFieldCommandWidgetBase {
    GENERATED_BODY()
public:
    UFieldCommandWidgetSwoonBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenNPCDialog(FName NPCLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenFailedDialog(FName NPCLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetDialogInput();
    
};

