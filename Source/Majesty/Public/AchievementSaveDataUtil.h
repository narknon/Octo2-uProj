#pragma once
#include "CoreMinimal.h"
#include "EBOOST_LEVEL.h"
#include "MJFieldCommandType.h"
#include "SaveDataUtilBase.h"
#include "AchievementSaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UAchievementSaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    UAchievementSaveDataUtil();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSwoonNpcUniqueCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxAttackDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLinerShipCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFieldCommandSuccessCount(MJFieldCommandType FCType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDivineAbilityCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBreakAttackCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBoostAttackCount(EBOOST_LEVEL BoostLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAdvancedAbilityCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAbilityCount();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetSwoonNpcUniqueCount(int32 newCount);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetMaxAttackDamage(int32 newCount);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetLinerShipCount(int32 newCount);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetFieldCommandSuccessCount(MJFieldCommandType FCType, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetDivineAbilityCount(int32 newCount);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetBreakAttackCount(int32 newCount);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetBoostAttackCount(EBOOST_LEVEL BoostLevel, int32 newCount);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetAdvancedAbilityCount(int32 newCount);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetAbilityCount(int32 newCount);
    
};

