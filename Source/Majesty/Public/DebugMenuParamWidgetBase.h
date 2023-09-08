#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "DebugParam.h"
#include "DebugMenuParamWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UDebugMenuParamWidgetBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
    UDebugMenuParamWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInformationValue(const FText& InText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTickFunc(const FDebugParam& Param);
    
};

