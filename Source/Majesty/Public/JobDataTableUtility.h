#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "EDBNoticeType.h"
#include "JobData.h"
#include "JobDataTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UJobDataTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UJobDataTableUtility();
    UFUNCTION(BlueprintCallable)
    static void NotifyJobDataDB(FName dbName, EDBNoticeType notice);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetObtainJobItem();
    
    UFUNCTION(BlueprintCallable)
    static bool GetJobDataTableRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FJobData& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJobDataByJobID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FJobData& OutData, int32 JobID);
    
    UFUNCTION(BlueprintCallable)
    static bool GeJobDataTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
};

