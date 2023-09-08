#pragma once
#include "CoreMinimal.h"
#include "CharacterGrowData.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "CharacterGrowTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UCharacterGrowTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UCharacterGrowTableUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTotalExpFromLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCharacterGrowTableRowDataByLevel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FCharacterGrowData& OutData, int32 Level, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCharacterGrowTableRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FCharacterGrowData& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcLevelFromTotalExp(int32 Exp);
    
};

