#pragma once
#include "CoreMinimal.h"
#include "EDISEASE_CATEGORY.generated.h"

UENUM(BlueprintType)
enum class EDISEASE_CATEGORY : uint8 {
    eDECONDITION,
    eBUFF,
    eDEBUFF,
    eSPECIAL,
    eSPECIAL_EDGE,
    eSIGN_OF_BOOST,
    eSPECIAL_EX,
    eDISEASE_CATEGORY_MAX UMETA(Hidden),
};

