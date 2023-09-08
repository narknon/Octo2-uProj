#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGAME_CONDITION_TYPE.h"
#include "GameConditionInfo.h"
#include "GameConditionUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UGameConditionUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameConditionUtility();
    UFUNCTION(BlueprintCallable)
    static bool CheckGameCondition(EGAME_CONDITION_TYPE Type, FGameConditionInfo& Param);
    
};

