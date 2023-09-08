#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "SelectPlayerStatusBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API USelectPlayerStatusBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
    USelectPlayerStatusBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetBoostGaugeLoopTime();
    
};

