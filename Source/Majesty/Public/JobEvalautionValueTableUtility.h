#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "EJOB_TYPE.h"
#include "JobEvalautionValueData.h"
#include "JobEvalautionValueTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UJobEvalautionValueTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UJobEvalautionValueTableUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetJobEvalautionValueTableRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FJobEvalautionValueData& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJobEvalautionValueTableRomDataFromJobType(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FJobEvalautionValueData& OutData, EJOB_TYPE JobType, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GeJobEvalautionValueTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
};

