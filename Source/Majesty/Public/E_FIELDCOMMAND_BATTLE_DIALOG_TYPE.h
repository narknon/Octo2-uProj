#pragma once
#include "CoreMinimal.h"
#include "E_FIELDCOMMAND_BATTLE_DIALOG_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_FIELDCOMMAND_BATTLE_DIALOG_TYPE : uint8 {
    eBATTLE_CONFIRM,
    eBATTLE_FAILED,
    eLEARN_ABILITY_CONFIRM,
};

