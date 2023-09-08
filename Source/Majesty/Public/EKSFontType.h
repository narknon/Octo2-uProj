#pragma once
#include "CoreMinimal.h"
#include "EKSFontType.generated.h"

UENUM(BlueprintType)
enum class EKSFontType : uint8 {
    Common,
    Talk,
    CustomTalk,
    NonLocalization,
    MelDir_Only,
};

