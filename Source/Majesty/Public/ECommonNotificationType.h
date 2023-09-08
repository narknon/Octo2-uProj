#pragma once
#include "CoreMinimal.h"
#include "ECommonNotificationType.generated.h"

UENUM(BlueprintType)
enum class ECommonNotificationType : uint8 {
    Normal,
    BadConnection,
};

