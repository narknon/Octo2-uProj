#pragma once
#include "CoreMinimal.h"
#include "EPauseType.generated.h"

UENUM()
enum class EPauseType : uint8 {
    PT_NONE,
    PT_MENU,
    PT_SUB_MENU,
    PT_DEBUG = 0x10,
    PT_SUSPEND,
    PT_ALL = 0xFF,
};

