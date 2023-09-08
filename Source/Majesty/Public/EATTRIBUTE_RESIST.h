#pragma once
#include "CoreMinimal.h"
#include "EATTRIBUTE_RESIST.generated.h"

UENUM(BlueprintType)
enum class EATTRIBUTE_RESIST : uint8 {
    eNONE,
    eWEAK,
    eREDUCE,
    eINVALID,
    eABSORB,
};

