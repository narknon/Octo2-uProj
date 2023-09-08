#pragma once
#include "CoreMinimal.h"
#include "EKSDeviceVolumeType.generated.h"

UENUM(BlueprintType)
enum class EKSDeviceVolumeType : uint8 {
    TV,
    BUILT_IN_SPEAKER,
    STEREO_JACK,
};

