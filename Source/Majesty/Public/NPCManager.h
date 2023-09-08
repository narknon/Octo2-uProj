#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "ENpcSwoonType.h"
#include "NPCManager.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ANPCManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
    ANPCManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RecoverSwoonNPC_TZChange(int32 NPCIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RecoverSwoonNPC(const FName& NPCLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RecoverAllSwoonNPC();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CreateSwoonNPCList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddSwoonNPC(const FName& NPCLabel, ENpcSwoonType SwoonType);
    
};

