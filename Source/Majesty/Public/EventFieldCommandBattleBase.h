#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "EventFieldCommandBattleBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UEventFieldCommandBattleBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UEventFieldCommandBattleBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Open(FName NPCLabel);
    
};

