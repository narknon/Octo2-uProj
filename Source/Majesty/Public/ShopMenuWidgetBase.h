#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetWithState.h"
#include "ShopMenuWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UShopMenuWidgetBase : public UKSUserWidgetWithState {
    GENERATED_BODY()
public:
    UShopMenuWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetParam(FName ShopLabel, bool ForceDefaultBar, bool FromNPC);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenExBar();
    
};

