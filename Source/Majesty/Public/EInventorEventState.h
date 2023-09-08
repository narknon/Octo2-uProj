#pragma once
#include "CoreMinimal.h"
#include "EInventorEventState.generated.h"

UENUM(BlueprintType)
enum class EInventorEventState : uint8 {
    NONE,
    CHECK_RESOURCE,
    OPEN_RESOURCE_NG_DIALOG,
    RESOURCE_NG_DIALOG,
    OPEN_INVENTION_CREATE_DIALOG,
    INVENTION_CREATE_DIALOG,
    SUB_MATERIAL,
    OPEN_EQUIPPED_ITEM_NG_DIALOG,
    EQUIPPED_ITEM_NG_DIALOG,
    MAX,
};

