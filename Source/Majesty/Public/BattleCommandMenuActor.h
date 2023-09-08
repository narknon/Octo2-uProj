#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilitySetDataBase.h"
#include "EACTION_COMMAND_USEABLE.h"
#include "ECOMMAND_SEALING_TYPE.h"
#include "InvadeData.h"
#include "ItemData.h"
#include "BattleCommandMenuActor.generated.h"

class ABattleCharacterBase;

UCLASS(Blueprintable)
class MAJESTY_API ABattleCommandMenuActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsTargetEnemySide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_astrOptionDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strUseActionLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_acCommandSealingList;
    
    ABattleCommandMenuActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupCommandSealingList();
    
    UFUNCTION(BlueprintCallable)
    void SetCommandSealing(ECOMMAND_SEALING_TYPE eType, bool bSealing);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnStyleChange();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnPotentialityAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnBreakStyle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnBoostStyle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OffPotentialityAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OffBreakStyle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OffBoostStyle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCommandSealing(ECOMMAND_SEALING_TYPE eType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetOptionDataList(TArray<FName>& astrOptionDataList, FName& strUseActionLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEventFlag(FName FlagName, bool& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExecPotentialityAction();
    
    UFUNCTION(BlueprintCallable)
    void ClearCommandSealing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void CheckCommandSealingListForItem(ABattleCharacterBase* cEnforceer, FItemData cItemData, EACTION_COMMAND_USEABLE& eCommandUseable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void CheckCommandSealingListForInvade(ABattleCharacterBase* cEnforceer, FInvadeData cInvadeData, EACTION_COMMAND_USEABLE& eCommandUseable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void CheckCommandSealingList(ABattleCharacterBase* cEnforceer, FAbilitySetDataBase cAbilitySet, EACTION_COMMAND_USEABLE& eCommandUseable);
    
};

