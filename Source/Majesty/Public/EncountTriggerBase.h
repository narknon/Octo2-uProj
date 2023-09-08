#pragma once
#include "CoreMinimal.h"
#include "MJBoxTrigger.h"
#include "EncountTriggerBase.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API AEncountTriggerBase : public AMJBoxTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTrigger;
    
    AEncountTriggerBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEncountVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString Debug_GetDebugInfo_BP();
    
};

