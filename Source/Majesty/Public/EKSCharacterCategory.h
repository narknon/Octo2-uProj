#pragma once
#include "CoreMinimal.h"
#include "EKSCharacterCategory.generated.h"

UENUM(BlueprintType)
enum class EKSCharacterCategory : uint8 {
    NONE,
    PLAYER,
    NPC,
    EVENT = 0x4,
    PARTY = 0x8,
    BAR = 0x10,
    PARTNER = 0x20,
    PARTY_ALL = 0x39,
    ALL = 0x7F,
};

