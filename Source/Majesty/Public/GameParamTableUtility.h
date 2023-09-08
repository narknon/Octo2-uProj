#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "GameParamInfo.h"
#include "GameParamTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UGameParamTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UGameParamTableUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetGameParamTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGameParamTableRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FGameParamInfo& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBattleParamRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBattleParamData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FGameParamInfo& OutData, FName TargetLabel, bool LogEnable);
    
};

