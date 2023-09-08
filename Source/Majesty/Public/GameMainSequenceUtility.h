#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MainSequenceStateParam.h"
#include "MainSequneceRequestParam.h"
#include "GameMainSequenceUtility.generated.h"

UCLASS(Blueprintable)
class UGameMainSequenceUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameMainSequenceUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMainSequneceRequestParam CreateDefaultParamWithStateParam(FMainSequenceStateParam StateParam);
    
};

