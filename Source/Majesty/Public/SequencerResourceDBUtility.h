#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "SequencerResourceData.h"
#include "SequencerResourceDBUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API USequencerResourceDBUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    USequencerResourceDBUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetSequencerResourceDataRow(FSequencerResourceData& OutData, FName TargetLabel, bool LogEnable);
    
};

