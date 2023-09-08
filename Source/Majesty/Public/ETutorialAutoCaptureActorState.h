#pragma once
#include "CoreMinimal.h"
#include "ETutorialAutoCaptureActorState.generated.h"

UENUM(BlueprintType)
enum class ETutorialAutoCaptureActorState : uint8 {
    None,
    Initialize,
    PreCapture,
    Capture,
    PostCapture,
    Finalize,
};

