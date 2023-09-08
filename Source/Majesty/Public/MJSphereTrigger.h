#pragma once
#include "CoreMinimal.h"
#include "KSTriggerBase.h"
#include "MJSphereTrigger.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API AMJSphereTrigger : public AKSTriggerBase {
    GENERATED_BODY()
public:
    AMJSphereTrigger(const FObjectInitializer& ObjectInitializer);
};

