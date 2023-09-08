#pragma once
#include "CoreMinimal.h"
#include "DiseaseListItemData.h"
#include "EDiseaseListState.h"
#include "KSUserWidgetBase.h"
#include "DiseaseListWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAJESTY_API UDiseaseListWidget : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiseaseListState m_WidgetState;
    
public:
    UDiseaseListWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SortDiseaseList(UPARAM(Ref) TArray<FDiseaseListItemData>& list);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetState(EDiseaseListState State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDiseaseListState GetWidgetState();
    
};

