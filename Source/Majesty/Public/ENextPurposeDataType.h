#pragma once
#include "CoreMinimal.h"
#include "ENextPurposeDataType.generated.h"

UENUM(BlueprintType)
enum class ENextPurposeDataType : uint8 {
    eNP_DATA,
    eNP_DATA_LIST,
    eNP_MAX UMETA(Hidden),
};

