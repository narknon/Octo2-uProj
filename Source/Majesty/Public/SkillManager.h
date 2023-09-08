#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SkillManager.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ASkillManager : public AActor {
    GENERATED_BODY()
public:
    ASkillManager(const FObjectInitializer& ObjectInitializer);
};

