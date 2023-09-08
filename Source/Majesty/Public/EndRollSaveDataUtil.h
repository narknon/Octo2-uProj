#pragma once
#include "CoreMinimal.h"
#include "EEndRollSegmentSet.h"
#include "SaveDataUtilBase.h"
#include "EndRollSaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UEndRollSaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    UEndRollSaveDataUtil();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EEndRollSegmentSet GetClearedEndRollSegmentByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool AddClearedMainStory(EEndRollSegmentSet Segment);
    
};

