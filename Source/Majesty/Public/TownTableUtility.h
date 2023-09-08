#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "TownInfoData.h"
#include "TownTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UTownTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UTownTableUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 TownLabelToID(FName Label);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TownIDToLabel(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTownTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTownTableRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FTownInfoData& OutData, int32 TargetID, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTownTableRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FTownInfoData& OutData, FName TargetLabel, bool LogEnable);
    
};

