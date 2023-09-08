#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EBATTLE_DEBUG_SWITCH.h"
#include "ECHARACTER_PARAM_TYPE.h"
#include "ItemData.h"
#include "DebugBattleCharaComponent.generated.h"

class AKSCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UDebugBattleCharaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDebugBattleCharaComponent();
    UFUNCTION(BlueprintCallable)
    void SetMasterParameter(ECHARACTER_PARAM_TYPE eType, int32 nValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugSwitch(EBATTLE_DEBUG_SWITCH eType, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMP(int32 nValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHP(int32 nValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalParameter(ECHARACTER_PARAM_TYPE eType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMasterParameter(ECHARACTER_PARAM_TYPE eType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentShield();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentPOT(int32& outActionPoint, int32& outActionPointMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentMP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentHP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacterName(FText& strCharacterName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FItemData> GetCharacterEquipmentList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSCharacterBase* GetAnimationCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDebugSwitch(EBATTLE_DEBUG_SWITCH eType);
    
};

