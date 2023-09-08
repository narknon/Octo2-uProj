#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EBATTLE_DEBUG_SWITCH.h"
#include "DebugBattleManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UDebugBattleManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDebugBattleManagerComponent();
    UFUNCTION(BlueprintCallable)
    void SetFixedWonderAbility(FName strAbilityName);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugSwitch(EBATTLE_DEBUG_SWITCH eType, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugParameter(EBATTLE_DEBUG_SWITCH eType, int32 nValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetConvertPlayerIDList(bool bEnable, UPARAM(Ref) TMap<int32, FName>& acConvertPlayerIDList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableConvertPlayerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetFixedWonderAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDebugParameter(EBATTLE_DEBUG_SWITCH eType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName ConvertPlayerIDForBattleEventDebug(int32 nPlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDebugSwitch(EBATTLE_DEBUG_SWITCH eType);
    
};

