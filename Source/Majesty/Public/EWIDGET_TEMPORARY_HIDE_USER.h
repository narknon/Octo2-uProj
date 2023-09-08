#pragma once
#include "CoreMinimal.h"
#include "EWIDGET_TEMPORARY_HIDE_USER.generated.h"

UENUM(BlueprintType)
enum class EWIDGET_TEMPORARY_HIDE_USER : uint8 {
    eOther,
    eFieldCommand,
    eTreasureBox,
    eShop,
    eBattle,
    eEvent,
    ePartyChat,
    eMainMenu,
    eSaveLoad,
    eStoryNotification,
    eMapNotification,
    eDialog,
    ePartySplit,
};

