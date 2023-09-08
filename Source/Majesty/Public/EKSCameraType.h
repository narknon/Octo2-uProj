#pragma once
#include "CoreMinimal.h"
#include "EKSCameraType.generated.h"

UENUM(BlueprintType)
enum class EKSCameraType : uint8 {
    CAMERA_DEFAULT,
    CAMERA_FOLLOW,
    CAMERA_EVENT,
    CAMERA_RICH_EVENT,
    CAMERA_BATTLE,
    CAMERA_EVENT_FOLLOW,
    CAMERA_3D_WORLD_MAP,
    MAX,
};

