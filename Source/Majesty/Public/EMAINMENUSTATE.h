#pragma once
#include "CoreMinimal.h"
#include "EMAINMENUSTATE.generated.h"

UENUM(BlueprintType)
enum class EMAINMENUSTATE : uint8 {
    eMAIN,
    eItemList,
    eAbilityList,
    eEquipmentMenu,
    eClassMenu,
    eStatus,
    eOption,
    eWorldMap,
    eMissionRecord,
    eTutorial,
    eChangeFormation,
    eBackToTitle,
    eAbilitySetting,
    eChangeMember,
    eEtc,
    eQuitGame,
};

