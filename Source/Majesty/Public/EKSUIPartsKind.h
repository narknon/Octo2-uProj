#pragma once
#include "CoreMinimal.h"
#include "EKSUIPartsKind.generated.h"

UENUM(BlueprintType)
enum class EKSUIPartsKind : uint8 {
    MENU_HEADER,
    MENU_FOOTER,
    PARTY_LIST = 0xA,
    CHARA_STANDING = 0x14,
};

