#pragma once
#include "CoreMinimal.h"
#include "ELevelLoaderRequest.generated.h"

UENUM(BlueprintType)
enum class ELevelLoaderRequest : uint8 {
    NONE,
    LOAD,
    UNLOAD,
    SHOW,
    HIDE,
};

