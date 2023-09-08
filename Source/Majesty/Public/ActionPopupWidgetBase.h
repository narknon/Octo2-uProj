#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "ActionPopupWidgetBase.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UActionPopupWidgetBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UActionPopupWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TemporaryClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Open(AActor* TargetActor, FName ActionTextLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Close();
    
};

