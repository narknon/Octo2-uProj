#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraLockTriggerHolder.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ACameraLockTriggerHolder : public AActor {
    GENERATED_BODY()
public:
    ACameraLockTriggerHolder(const FObjectInitializer& ObjectInitializer);
};

