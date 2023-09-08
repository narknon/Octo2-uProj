#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "KSCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UKSCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UKSCharacterMovementComponent();
};

