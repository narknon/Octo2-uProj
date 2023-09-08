#pragma once
#include "CoreMinimal.h"
#include "EEventKind.generated.h"

UENUM(BlueprintType)
enum class EEventKind : uint8 {
    EVENT_OTHER,
    EVENT_MAIN,
    EVENT_SUB,
    EVENT_ADDMEMBER,
    EVENT_SAVE,
    EVNET_PARTYCHAT,
    OPEN_GUILD_MENU,
    EVENT_LINER_SHIP,
};

