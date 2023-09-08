#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugBattleLog.h"
#include "DebugBattleLogComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UDebugBattleLogComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDebugBattleLogComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleLogListNumMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDebugBattleLog> GetBattleLogList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBattleLogDirty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleLogCount();
    
    UFUNCTION(BlueprintCallable)
    void ClearBattleLogDirty();
    
};

