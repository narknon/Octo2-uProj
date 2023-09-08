#pragma once
#include "CoreMinimal.h"
#include "EKSAudioComponentType.generated.h"

UENUM(BlueprintType)
enum class EKSAudioComponentType : uint8 {
    BGM_Common,
    BGM_Interrupt,
    SE,
    SE_Env,
    Voice,
    SE_Battle,
    Voice_Battle,
    SE_Event,
};

