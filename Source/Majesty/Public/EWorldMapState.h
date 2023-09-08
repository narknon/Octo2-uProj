#pragma once
#include "CoreMinimal.h"
#include "EWorldMapState.generated.h"

UENUM(BlueprintType)
enum class EWorldMapState : uint8 {
    None,
    InSetup,
    FinishSetup,
    Opening,
    Opened,
    Waiting,
    Closing,
    Closed,
};

