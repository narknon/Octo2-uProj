#pragma once
#include "CoreMinimal.h"
#include "EACF_CATEGORY.generated.h"

UENUM(BlueprintType)
enum class EACF_CATEGORY : uint8 {
    BGM,
    SE_Sys,
    SE_Bat,
    SE_Char,
    SE_Env,
    SE_Etc,
    SE_Env_Imp,
    SE_Menu,
    SE_Event,
    SE_Map,
    SE_Dsp,
    Voice_Bat,
    Voice_Event,
    Voice_Etc,
    Voice_Olb,
    Voice_Alf,
    Voice_Tre,
    Voice_Cyr,
    Voice_Han,
    Voice_Ofe,
    Voice_The,
    Voice_Pri,
    SE_Event_OneLimit,
    MAX,
};

