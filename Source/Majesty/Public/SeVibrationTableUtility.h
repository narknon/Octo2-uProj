#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "SeVibrationData.h"
#include "SeVibrationTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API USeVibrationTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    USeVibrationTableUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetSeVibrationTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSeVibrationRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSeVibrationData& OutData, int32 TargetID, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSeVibrationRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSeVibrationData& OutData, FName TargetLabel, bool LogEnable);
    
};

