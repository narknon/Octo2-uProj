#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetWithState.h"
#include "OptionMenuWBPBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UOptionMenuWBPBase : public UKSUserWidgetWithState {
    GENERATED_BODY()
public:
    UOptionMenuWBPBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetFromTitleScene(bool FromTitleScene);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void IsSaving(bool& Saving);
    
};

