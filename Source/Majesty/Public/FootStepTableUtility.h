#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "FootStepData.h"
#include "FootStepTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UFootStepTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UFootStepTableUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetFootStepTableRowData(FFootStepData& OutData, FName TargetLabel, bool EnableLog);
    
};

