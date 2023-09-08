#pragma once
#include "CoreMinimal.h"
#include "EUITitleFlow.generated.h"

UENUM(BlueprintType)
enum class EUITitleFlow : uint8 {
    eLogo,
    eSystemLoad,
    eDemo,
    e1stTitle,
    e2ndTitle,
    ePlayerSelect,
    eLoadScene,
    eOptionScene,
    eInitialOptionScene,
    eEnd,
};

