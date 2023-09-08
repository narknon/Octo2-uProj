#pragma once
#include "CoreMinimal.h"
#include "FieldCommandWidgetSwoonBase.h"
#include "PurchaseItemInfoData.h"
#include "FieldCommandWidgetRobBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UFieldCommandWidgetRobBase : public UFieldCommandWidgetSwoonBase {
    GENERATED_BODY()
public:
    UFieldCommandWidgetRobBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenResultDialog(const TArray<FPurchaseItemInfoData>& GotItems, const TArray<FPurchaseItemInfoData>& CouldNotGetItems);
    
};

