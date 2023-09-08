#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ResidentGameBase.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API AResidentGameBase : public AActor {
    GENERATED_BODY()
public:
    AResidentGameBase(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    AActor* SpawnDebugAcor(const FString& KSDebugPath);
    
};

