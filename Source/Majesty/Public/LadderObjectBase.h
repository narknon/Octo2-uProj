#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LadderObjectBase.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ALadderObjectBase : public AActor {
    GENERATED_BODY()
public:
    ALadderObjectBase(const FObjectInitializer& ObjectInitializer);
};

