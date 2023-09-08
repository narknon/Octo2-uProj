#pragma once
#include "CoreMinimal.h"
#include "AbilityDataBase.h"
#include "AbilitySetDataBase.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "AbilityDataTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UAbilityDataTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UAbilityDataTableUtility();
    UFUNCTION(BlueprintCallable)
    static bool IsDivineAbilitySet(FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAbilitySetRowData(FAbilitySetDataBase& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAbilityRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAbilityRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FAbilityDataBase& OutData, FName TargetLabel, bool LogEnable);
    
};

