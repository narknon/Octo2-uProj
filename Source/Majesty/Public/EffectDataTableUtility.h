#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "EffectData.h"
#include "EffectDataTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UEffectDataTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UEffectDataTableUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetEffectRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEffectRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FEffectData& OutData, FName TargetLabel, bool LogEnable);
    
};

