#pragma once
#include "CoreMinimal.h"
#include "CharResource_BattleReductionTable.h"
#include "DataTableUtilityBase.h"
#include "CharacterResource_BattleReductionDataUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UCharacterResource_BattleReductionDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UCharacterResource_BattleReductionDataUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetCharRes_BattleReductionRowData(FCharResource_BattleReductionTable& OutData, FName TargetLabel, bool EnableLog);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCharRes_BattleReductionLabelNames(TArray<FName>& OutData);
    
};

