#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RankWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API URankWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    URankWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupRankList();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRank(int32 rank);
    
};

