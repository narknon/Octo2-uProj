#pragma once
#include "CoreMinimal.h"
#include "EFieldCommandPreviewMenuState.generated.h"

UENUM(BlueprintType)
enum class EFieldCommandPreviewMenuState : uint8 {
    eNone,
    eOpen,
    eInTab,
    eInPanel,
    eClose,
    eSpecial,
};

