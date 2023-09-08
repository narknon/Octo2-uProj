#pragma once
#include "CoreMinimal.h"
#include "EDEBUG_EDIT_TYPE.generated.h"

UENUM(BlueprintType)
enum class EDEBUG_EDIT_TYPE : uint8 {
    eOnOff,
    eList,
    eIntValue,
    eFloatValue,
    eInfomation,
    eSubMenu,
};

