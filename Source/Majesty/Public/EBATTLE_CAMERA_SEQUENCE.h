#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_CAMERA_SEQUENCE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_CAMERA_SEQUENCE : uint8 {
    eCAMERA_SEQUENCE_NONE,
    eCAMERA_SEQUENCE_START,
    eCAMERA_SEQUENCE_SLIDE,
    eCAMERA_SEQUENCE_BACK,
    eCAMERA_SEQUENCE_END,
    eCAMERA_SEQUENCE_MAX UMETA(Hidden),
};

