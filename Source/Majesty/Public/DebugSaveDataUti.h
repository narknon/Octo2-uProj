#pragma once
#include "CoreMinimal.h"
#include "SaveDataUtilBase.h"
#include "DebugSaveDataUti.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UDebugSaveDataUti : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    UDebugSaveDataUti();
    UFUNCTION(BlueprintCallable)
    static void Debug_ActivateAllEventFlagsWithoutSaveBanFlag();
    
};

