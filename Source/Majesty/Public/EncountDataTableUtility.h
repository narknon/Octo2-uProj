#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "EEncountTableType.h"
#include "EncountTriggerData.h"
#include "EncountVolume.h"
#include "EncountDataTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UEncountDataTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UEncountDataTableUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetEncountVolumeRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FEncountVolume& OutData, int32 TargetID, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEncountVolumeRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FEncountVolume& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEncountTriggerRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FEncountTriggerData& OutData, int32 TargetID, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEncountTriggerRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FEncountTriggerData& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEncountTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames, EEncountTableType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 EncountTriggerLabelToId(FName EncountTriggerLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName EncountTriggerIdToLabel(int32 EncountTriggerId);
    
};

