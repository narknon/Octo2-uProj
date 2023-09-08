#pragma once
#include "CoreMinimal.h"
#include "EPARTY_CHAT_TYPE.generated.h"

UENUM(BlueprintType)
enum class EPARTY_CHAT_TYPE : uint8 {
    MAIN_STORY,
    BAR,
    FINAL_CHAPTER_HINT,
};

