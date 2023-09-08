#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "EDBNoticeType.h"
#include "WorldMapTable.h"
#include "WorldMapTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UWorldMapTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UWorldMapTableUtility();
    UFUNCTION(BlueprintCallable)
    static void NotifyWorldMapDb(FName dbName, EDBNoticeType notice);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWorldMapTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWorldMapRowDataByLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FWorldMapTable& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetWorldMapLabelByLevelLabel(FName levelLabel);
    
};

