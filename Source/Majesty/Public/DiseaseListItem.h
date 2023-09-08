#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "DiseaseListItemData.h"
#include "DiseaseListItem.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAJESTY_API UDiseaseListItem : public UAcqUserWidget {
    GENERATED_BODY()
public:
    UDiseaseListItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(const FDiseaseListItemData& Data);
    
};

