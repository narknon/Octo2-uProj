#pragma once
#include "CoreMinimal.h"
#include "EREMINISCENE_STATE.generated.h"

UENUM(BlueprintType)
enum class EREMINISCENE_STATE : uint8 {
    eNONE,
    eOPEN_REMINISCENE_CONFIRM_DIALOG,
    eOPEN_PROFESSOR_CONFIRM_DIALOG,
};

