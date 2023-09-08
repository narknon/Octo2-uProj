#pragma once
#include "CoreMinimal.h"
#include "EPartyFollowState.generated.h"

UENUM(BlueprintType)
enum class EPartyFollowState : uint8 {
    Wait,
    BeginWalk,
    BeginRun,
    KeepWalk,
    KeepRun,
    PartnerWait,
};

