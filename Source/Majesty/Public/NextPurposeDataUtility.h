#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "EDBNoticeType.h"
#include "ENextPurposeDataType.h"
#include "NextPurposeData.h"
#include "NextPurposeDataUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UNextPurposeDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UNextPurposeDataUtility();
    UFUNCTION(BlueprintCallable)
    static void NotifyNextPurposeDataDB(FName dbName, EDBNoticeType notice);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNextPurposeTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames, ENextPurposeDataType Type);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNextPurposeRowDataByID(FNextPurposeData& OutData, int32 TargetID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNextPurposeRowData(FNextPurposeData& OutData, FName TargetLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNextPurposeLabelsByMainStory(TArray<FName>& outLabels, FName MainStoryLabel);
    
    UFUNCTION(BlueprintCallable)
    static void GetNextPurposeDataByMainStoryTaskLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FNextPurposeData& OutData, FName mainStoryTaskLabel);
    
};

