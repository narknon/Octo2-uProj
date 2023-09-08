#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_DRAG_IN_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_DRAG_IN_TYPE : uint8 {
    eDRAG_IN_COMMON,
    eDRAG_IN_SEA,
    eDRAG_IN_SAND_S,
    eDRAG_IN_SAND_L,
    eDRAG_IN_MAX UMETA(Hidden),
};

