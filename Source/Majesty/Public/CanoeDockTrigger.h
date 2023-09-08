#pragma once
#include "CoreMinimal.h"
#include "MJBoxTrigger.h"
#include "CanoeDockTrigger.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ACanoeDockTrigger : public AMJBoxTrigger {
    GENERATED_BODY()
public:
    ACanoeDockTrigger(const FObjectInitializer& ObjectInitializer);
};

