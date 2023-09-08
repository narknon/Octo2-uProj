#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EEndRollSegmentSet.h"
#include "EndRollSegmentPlayData.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UEndRollSegmentPlayData : public UObject {
    GENERATED_BODY()
public:
    UEndRollSegmentPlayData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEndRollSegmentSet GetSegmentSetID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetEventImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBattleRevivalFlag() const;
    
};

