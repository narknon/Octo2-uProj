#pragma once
#include "CoreMinimal.h"
#include "EControllerInputType.generated.h"

UENUM(BlueprintType)
enum class EControllerInputType : uint8 {
    TYPE_UNKNOWN,
    TYPE_STEAM_CONTROLLER,
    TYPE_XBOX_360,
    TYPE_XBOX_ONE,
    TYPE_GENERIC_XINPUT,
    TYPE_PS4,
    TYPE_NINTENDO_SWITCH_PRO,
    TYPE_STADIA,
    TYPE_MAX UMETA(Hidden),
};

