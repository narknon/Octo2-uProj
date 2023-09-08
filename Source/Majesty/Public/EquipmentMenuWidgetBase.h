#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetWithState.h"
#include "EquipmentMenuWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UEquipmentMenuWidgetBase : public UKSUserWidgetWithState {
    GENERATED_BODY()
public:
    UEquipmentMenuWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBarMode(bool IsBar);
    
};

