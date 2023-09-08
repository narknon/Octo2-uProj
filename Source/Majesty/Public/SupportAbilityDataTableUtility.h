#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "SupportAbilityDataBase.h"
#include "SupportAbilityDataTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API USupportAbilityDataTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    USupportAbilityDataTableUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetSupportAbilityRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSupportAbilityRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSupportAbilityDataBase& OutData, FName TargetLabel, bool LogEnable);
    
};

