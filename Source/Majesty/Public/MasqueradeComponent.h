#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BattleVoiceSetData.h"
#include "EBATTLE_VOICE_TYPE.h"
#include "EPlayableCharacterID.h"
#include "EWEAPON_CATEGORY.h"
#include "MasqueradeComponent.generated.h"

class ABattleCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UMasqueradeComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cOwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cMasqueradeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExecMasquerade;
    
public:
    UMasqueradeComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResumeMasquerade();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayMasqueradeBattleVoice(EBATTLE_VOICE_TYPE eBattleVoiceType, FBattleVoiceSetData cPlayCondition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecMasquerade();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<EWEAPON_CATEGORY> GetMasqueradeEquipWeaponList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetMasqueradeCommandNameSecondJob();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetMasqueradeCommandNameFirstJob();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FName> GetMasqueradeCommandListSecondJob();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FName> GetMasqueradeCommandListFirstJob();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetMasqueradeCommandDetailSecondJob();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetMasqueradeCommandDetailFirstJob();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetMasqueradeCharacterID(EPlayableCharacterID& eCharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecMasquerade(ABattleCharacterBase* cTarget, int32 nInvocationTurn);
    
};

