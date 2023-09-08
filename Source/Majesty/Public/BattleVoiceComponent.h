#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BattleVoiceDataList.h"
#include "BattleVoiceSetData.h"
#include "EBATTLE_VOICE_TYPE.h"
#include "BattleVoiceComponent.generated.h"

class ABattleCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UBattleVoiceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cOwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReadyBattleVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBATTLE_VOICE_TYPE, FBattleVoiceDataList> m_acBattleVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBattleVoiceDataList> m_acAbilityVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSettledPlayOnce_OnTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableDetailLog;
    
public:
    UBattleVoiceComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void SetSettledPlayOnce_OnTakeDamage(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetVoiceFlagForPreAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayBattleVoice(EBATTLE_VOICE_TYPE eBattleVoiceType, FBattleVoiceSetData cPlayCondition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyBattleVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsBattleVoice(EBATTLE_VOICE_TYPE eBattleVoiceType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitBattleVoice(FName strBattleVoiceID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSettledPlayOnce_OnTakeDamage();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEventFlag(FName FlagName, bool& Value);
    
};

