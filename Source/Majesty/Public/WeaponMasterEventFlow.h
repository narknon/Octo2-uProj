#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponMasterEventFlow.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API AWeaponMasterEventFlow : public AActor {
    GENERATED_BODY()
public:
    AWeaponMasterEventFlow(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecFlow();
    
};

