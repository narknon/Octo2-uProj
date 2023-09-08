#pragma once
#include "CoreMinimal.h"
#include "ETitleMovieState.generated.h"

UENUM(BlueprintType)
enum class ETitleMovieState : uint8 {
    eWaiting,
    eOnFirstPlay,
    eOnResumePlay,
    eSeeking,
    ePreparing,
    ePlaying,
    eStopProcessing,
    eLoopEnd,
};

