#pragma once
#include "CoreMinimal.h"
#include "ESESSION_SE_TYPE.generated.h"

UENUM(BlueprintType)
enum class ESESSION_SE_TYPE : uint8 {
    eSESSION_SE_NONE,
    eSESSION_SE_LUTE,
    eSESSION_SE_HARP,
    eSESSION_SE_FLUTE,
    eSESSION_SE_DJEMBE,
    eSESSION_SE_TAMBOURINE,
    eSESSION_SE_TYPE_MAX UMETA(Hidden),
    eSESSION_SE_MAX UMETA(Hidden),
};

