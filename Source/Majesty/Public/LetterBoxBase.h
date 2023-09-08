#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "LetterBoxBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API ULetterBoxBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    ULetterBoxBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HiddenLetterWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ApplyLetterSize();
    
};

