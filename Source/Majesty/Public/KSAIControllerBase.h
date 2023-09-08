#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Controller.h"
#include "KSAIControllerBase.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API AKSAIControllerBase : public AController {
    GENERATED_BODY()
public:
    AKSAIControllerBase(const FObjectInitializer& ObjectInitializer);
};

