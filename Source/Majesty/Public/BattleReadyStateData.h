#pragma once
#include "CoreMinimal.h"
#include "StateDataBase.h"
#include "BattleReadyStateData.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UBattleReadyStateData : public UStateDataBase {
    GENERATED_BODY()
public:
    UBattleReadyStateData();
};

