#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "EKSGC_TYPE.h"
#include "KSGCManager.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API AKSGCManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
    AKSGCManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetKSGCTimer(EKSGC_TYPE gcType);
    
    UFUNCTION(BlueprintCallable)
    void ResetKSGCTimer();
    
};

