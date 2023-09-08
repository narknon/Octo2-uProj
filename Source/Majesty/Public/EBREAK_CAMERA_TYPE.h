#pragma once
#include "CoreMinimal.h"
#include "EBREAK_CAMERA_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBREAK_CAMERA_TYPE : uint8 {
    eNORMAL,
    eWIDE,
    eWIDE_TILTUP,
    eVIDE_SECOND,
};

