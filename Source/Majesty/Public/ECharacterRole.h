#pragma once
#include "CoreMinimal.h"
#include "ECharacterRole.generated.h"

UENUM(BlueprintType)
enum class ECharacterRole : uint8 {
    NONE,
    MAIN,
    GUEST,
};

