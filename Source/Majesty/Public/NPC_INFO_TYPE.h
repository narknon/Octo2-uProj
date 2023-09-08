#pragma once
#include "CoreMinimal.h"
#include "NPC_INFO_TYPE.generated.h"

UENUM(BlueprintType)
enum class NPC_INFO_TYPE : uint8 {
    HEAR,
    SEARCH,
    BRIBERY,
    REVEAL,
};

