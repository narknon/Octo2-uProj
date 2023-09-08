#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KSBattleCharacterBase.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class MAJESTY_API AKSBattleCharacterBase : public AActor {
    GENERATED_BODY()
public:
    AKSBattleCharacterBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    UActorComponent* AddActorComponent(UClass* cActorComponentClass);
    
};

