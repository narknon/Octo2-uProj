#pragma once
#include "CoreMinimal.h"
#include "EBOOST_LEVEL.generated.h"

UENUM(BlueprintType)
enum class EBOOST_LEVEL : uint8 {
    NONE,
    BOOST_LEVEL_1,
    BOOST_LEVEL_2,
    BOOST_LEVEL_3,
};

