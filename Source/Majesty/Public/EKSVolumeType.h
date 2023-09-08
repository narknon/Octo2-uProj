#pragma once
#include "CoreMinimal.h"
#include "EKSVolumeType.generated.h"

UENUM(BlueprintType)
enum class EKSVolumeType : uint8 {
    MASTER,
    BGM,
    SE,
    SE_ENV,
    VOICE,
    MAX,
};

