#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "ReminiscenceMergeSetting.h"
#include "ReminiscenceSetting.h"
#include "ReminiscenceDataUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UReminiscenceDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UReminiscenceDataUtility();
    UFUNCTION(BlueprintCallable)
    static void GetReminiscenceMergeByLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FReminiscenceMergeSetting& outReminiMergeData, FName reminiMergeLabel);
    
    UFUNCTION(BlueprintCallable)
    static void GetReminiscenceDataByLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FReminiscenceSetting& outReminiData, FName reminiLabel);
    
};

