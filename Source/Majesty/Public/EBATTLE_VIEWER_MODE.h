#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_VIEWER_MODE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_VIEWER_MODE : uint8 {
    eNORMAL,
    eUSE_ENEMY_GROUP,
    eUSE_ENEMY_LIST,
};

