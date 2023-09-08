#pragma once
#include "CoreMinimal.h"
#include "ELevelLoaderNotice.generated.h"

UENUM(BlueprintType)
enum class ELevelLoaderNotice : uint8 {
    NONE,
    LOADED,
    UNLOADED,
    SHOWN,
    HIDDEN,
};

