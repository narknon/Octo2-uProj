#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "OptionGroupData.h"
#include "OptionGroupTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UOptionGroupTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UOptionGroupTableUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 OptionGroupLabelToID(FName OptionGroupLable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName OptionGroupIDToLabel(int32 OptionGroupID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetOptionGroupTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetOptionGroupRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FOptionGroupData& OutData, int32 TargetID, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetOptionGroupRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FOptionGroupData& OutData, FName TargetLabel, bool LogEnable);
    
};

