#pragma once
#include "CoreMinimal.h"
#include "KSTriggerBase.h"
#include "MJBoxTrigger.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API AMJBoxTrigger : public AKSTriggerBase {
    GENERATED_BODY()
public:
    AMJBoxTrigger(const FObjectInitializer& ObjectInitializer);
};

