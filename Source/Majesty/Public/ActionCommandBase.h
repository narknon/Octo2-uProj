#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EATTRIBUTE_RESIST.h"
#include "EBATTLE_SEQUENCE_PATTERN_TYPE.h"
#include "EBATTLE_VOICE_TYPE.h"
#include "ECHARACTER_SIZE.h"
#include "EKSCharacterAction.h"
#include "EPlayableCharacterID.h"
#include "EVibrationPower.h"
#include "EWEAPON_CATEGORY.h"
#include "ActionCommandBase.generated.h"

class AActionCommandBase;
class ABattleAbilitySequenceActor;
class ABattleCharacterBase;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class MAJESTY_API AActionCommandBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strActionLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cEnforcer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acSubEnforcerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acSubTargetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nOptionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strOptionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_astrOptionDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableRandomTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableSkillALL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableDamageUpWithFullHP;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSettledPlayOnce_OnRecovered;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAblityHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAttackHitFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsLastHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableRandomCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExecRandomCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cRandomCoverEnforcer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExecutedCounterTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsForceWeakness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nAdditiveBreakDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActionCommandBase* m_cSummonOwnerAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsSummonAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsSummonLastHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsSettledAutoTameMonster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* m_cActionCommandSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleAbilitySequenceActor* m_cActionCommandSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_cCommandSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableCommandSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReadyCommandSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nTotalSlideFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExecCommandSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsInfomation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsOnHitSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strOnHitSEID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsSessionSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsBusinessSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_strBusinessSupportInfo;
    
    AActionCommandBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool WeaponChangeCommand(EWEAPON_CATEGORY WeaponType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool WaitSummonAbilityCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaitSummonAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool WaitSessionSupporterCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool WaitSessionAbilityCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaitLoadCommandSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool WaitEnemyActionCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaitCaptureMainPartyCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaitCallSubPartyCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool WaitBusinessSupporterCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SuspendActionCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartCommandSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShowInfomationCommand(FName TextID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShowBusinessSupportInfomationCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupRandomAbilityEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTargetList(UPARAM(Ref) TArray<ABattleCharacterBase*>& acTargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetSummonAbility(bool bEnable, bool bLastHit, FName strActionLabel, AActionCommandBase* cOwnerAbility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubTargetList(UPARAM(Ref) TArray<ABattleCharacterBase*>& acSubTargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubEnforcerList(UPARAM(Ref) TArray<ABattleCharacterBase*>& acSubEnforcerList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSettledPlayOnce_OnRecovered(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSettledAutoTameMonster(bool bExec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOptionDataList(UPARAM(Ref) TArray<FName>& astrOptionDataList, FName strActionLabel, int32 nOptionIndex, bool bUseGrowMagicBuff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOptionData(FName strOptionData, int32 nOptionIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetExecutedCounterTrap(bool bExec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnforcer(ABattleCharacterBase* cEnforcer);
    
    UFUNCTION(BlueprintCallable)
    void SetBusinessSupportInfomationText(const FText& strInfoText);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackHitFailed(bool bFailed);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditiveBreakDamage(int32 nBreakDamage);
    
    UFUNCTION(BlueprintCallable)
    void SetActionCommandSequenceActor(ABattleAbilitySequenceActor* cSequenceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReturnSummonCharacterCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReturnSessionSupporterCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReturnBusinessSupporterCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResumeActionCommandSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestLoadCommandSequence(const TSoftObjectPtr<ULevelSequence>& cCommandSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RegisterOnHitSECommand(FName SEID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayWeaponAttackCommand(ABattleCharacterBase* ActionCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayVoiceCommand(EBATTLE_VOICE_TYPE VoiceID, EPlayableCharacterID UniqueCharaID, EBATTLE_VOICE_TYPE UniqueVoiceID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayVibrationCommand(FName VibrationID, EVibrationPower Power);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlaySessionActionCommand(EKSCharacterAction BattleActionID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlaySECommand(FName SEID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayBusinessSupportActionCommand(EKSCharacterAction BattleActionID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayActionForSelfOnlyCommand(ABattleCharacterBase* ActionCharacter, EKSCharacterAction BattleSelfActionID, EKSCharacterAction BattleOtherActionID, bool bExceptEnforcer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayActionCommand(ABattleCharacterBase* ActionCharacter, EKSCharacterAction BattleActionID, EPlayableCharacterID UniqueCharaID, EKSCharacterAction UniqueActionID, bool bExceptEnforcer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayAbilitySECommand(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseActionCommandSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnAttackDamageSP(ABattleCharacterBase* cEnforcer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnAttackDamageHP(ABattleCharacterBase* cEnforcer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void IsUseItemCommand(bool& bIsUseItemCommand, bool& bIsMeatItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettledAutoTameMonster();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSessionSupportCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsPlayOnHitDamageVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void IsMusicalCommand(bool& bIsSong, bool& bIsDance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceWeakness();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusinessSupportCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HideInfomationCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<ABattleCharacterBase*> GetTargetList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<ABattleCharacterBase*> GetSubTargetList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<ABattleCharacterBase*> GetSubEnforcerList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetSettledPlayOnce_OnRecovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetInvadeMonsterSize(ECHARACTER_SIZE& outCharacterSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetExecutedCounterTrap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ABattleCharacterBase* GetEnforcer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCriticalPower(bool bCritical, float& outRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAttackHitFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetActionLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetAbilityEffect(int32 nIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishCommandSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecSummonCharacterCommand(int32 nSummonIndex, bool bRandom);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecSummonAbilityCommand(int32 nSummonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExecStepCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecStartCharacterWarpCommand(FVector cCommandOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecSpecialAilmentCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecSessionAbilityCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecPlayDiseaseMissUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecEndCharacterWarpCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecCaptureMainPartyCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecCallSubPartyCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecAilmentCommand(int32 Index, bool AllAilment, bool LastHit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ConvertFrameToSecondByFrameRate(int32 nFrameNumber, FFrameRate cFrameRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckStealMoney(ABattleCharacterBase* cStealTarget, int32 nStealRateMin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckStealItem(ABattleCharacterBase* cStealTarget, int32 nStealRateMin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EBATTLE_SEQUENCE_PATTERN_TYPE CheckSequencePattern();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckLastHit(ABattleCharacterBase* cTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckEnableExcitementBuff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckEnableAutoTameMonster();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckBoostLevelLess(int32 nBorderLevel, bool bContainEqual);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckBoostLevelGreater(int32 nBorderLevel, bool bContainEqual);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckAttackCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckAbilityHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CallSessionSupporterCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CallBusinessSupporterCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcBreakDamage(EATTRIBUTE_RESIST eAttributeWeak, EATTRIBUTE_RESIST eWeaponWeak, int32& outBreakDamage);
    
};

