#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "ActionOrderIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UActionOrderIcon : public UAcqUserWidget {
    GENERATED_BODY()
public:
    UActionOrderIcon();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetParam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ImmediateHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ImmediateDettach();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool End();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DettachSubIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AttachSubIcon();
    
};

