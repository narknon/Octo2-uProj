#pragma once
#include "CoreMinimal.h"
#include "ESoundTableType.generated.h"

UENUM(BlueprintType)
enum class ESoundTableType : uint8 {
    ST_BGM,
    ST_CUE_SHEET,
    ST_SE,
    ST_VOICE_JA,
    ST_VOICE_EN,
    ST_MAX UMETA(Hidden),
};

