#pragma once
#include "CoreMinimal.h"
#include "ESequencerResourceData.generated.h"

UENUM(BlueprintType)
enum class ESequencerResourceData : uint8 {
    SEQ_TEST,
    AutoTalk_KEN_10_01,
    TIMEZONE_CHANGE_KEN_00_A,
    TIMEZONE_CHANGE_KEN_00_B = 0x2E,
    TIMEZONE_CHANGE_KEN_00_C = 0x32,
    RI_MS_KEN_10_0100 = 0x3,
    RI_MS_KEN_10_0200,
    RI_MS_KEN_10_0300,
    RI_MS_KEN_10_0400,
    RI_MS_KEN_10_0500,
    RI_MS_KEN_10_0600,
    RI_MS_KEN_10_0700,
    RI_MS_KEN_10_0800,
    RI_MS_KEN_10_0900,
    RI_MS_KEN_10_1000,
    RI_MS_KEN_10_1100,
    RI_MS_KEN_10_1101,
    RI_MS_KEN_10_1200,
    RI_MS_KEN_10_1200A = 0x30,
    RI_MS_KEN_10_1200B,
    RI_MS_KEN_10_1300 = 0x10,
    RI_MS_KEN_10_1400,
    RI_MS_KEN_10_1500,
    RI_MS_KEN_10_1600,
    RI_MS_KEN_10_1700,
    RI_MS_KEN_10_1800,
    RI_MS_KEN_10_1900,
    RI_MS_KEN_10_2000,
    RI_MS_SIN_10_0100,
    RI_MS_SIN_10_0200,
    RI_MS_SIN_10_0300,
    RI_MS_SIN_10_0400,
    RI_MS_SIN_10_0500,
    RI_MS_SIN_10_0600,
    RI_MS_SIN_10_0700,
    RI_MS_SIN_10_0800,
    RI_MS_SIN_10_0900,
    RI_MS_SIN_10_1000,
    RI_MS_SIN_10_1100,
    RI_MS_SIN_10_1200,
    RI_MS_SIN_10_1300,
    RI_MS_SIN_10_13A0,
    RI_MS_SIN_10_13B0,
    RI_MS_SIN_10_13C0,
    RI_MS_SIN_10_1400,
    RI_MS_SIN_10_1500,
    RI_MS_SIN_10_1600,
    RI_MS_SIN_10_1700,
    RI_MS_SIN_10_1800,
    RichEvent_DeepThinking,
    Sub_MS_KEN_10_1900_ScrollBG = 0x2F,
};
