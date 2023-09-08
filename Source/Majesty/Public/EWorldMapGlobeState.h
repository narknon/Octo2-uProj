#pragma once
#include "CoreMinimal.h"
#include "EWorldMapGlobeState.generated.h"

UENUM(BlueprintType)
enum class EWorldMapGlobeState : uint8 {
    eNone,
    eInPreparation,
    eControllable,
    eInAutoControll,
};

