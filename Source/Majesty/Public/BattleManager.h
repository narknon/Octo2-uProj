#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "ActionOrderData.h"
#include "BattleAdditiveOrderData.h"
#include "BattleVoiceSetList.h"
#include "DebugBattleLog.h"
#include "EATTRIBUTE_TYPE.h"
#include "EBATTLE_DEBUG_SWITCH.h"
#include "EBATTLE_DRAG_IN_TYPE.h"
#include "EBATTLE_ENCOUNT_TYPE.h"
#include "EBATTLE_START_TYPE.h"
#include "EEndRollSegmentSet.h"
#include "EFIELD_DISEASE_TYPE.h"
#include "EPlayableCharacterID.h"
#include "ESUPPORT_AILMENT_TYPE.h"
#include "EWEAPON_UNLOAD_GC_TYPE.h"
#include "RareEnemyParam.h"
#include "SupportAbilityDataBase.h"
#include "WeaponTexutreUnloadManage.h"
#include "BattleManager.generated.h"

class AActionCommandBase;
class AActor;
class ABattleActionOrder;
class ABattleCamera;
class ABattleCharacterBase;
class ABattleCommandMenuActor;
class ABattleManager;
class ABattleSequenceDirector;
class AEmitter;
class AStaticMeshActor;
class UDebugBattleLogComponent;
class UDebugBattleManagerComponent;
class ULevelSequence;
class UTexture2D;

UCLASS(Blueprintable)
class MAJESTY_API ABattleManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_ENCOUNT_TYPE m_eBattleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsViewerMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nBattleTurnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nEnemyBreakCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUsedRepeatAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRareEnemyParam m_cRareCatlinParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRareEnemyParam m_cRareOctlinParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsWaterSideMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nBattleOrderCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nBattleOrderCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseSubPartyBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acBattleCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acBattlePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acBattleEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acBattleSupporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acSubBattlePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acSubBattleSupporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableSyncAnimationCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cSyncAnimationCharacter_Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acSyncAnimationCharacter_Childs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cPrevNoticeCharacter_Pinch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cPrevNoticeCharacter_JustBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acReflectionEnforcerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCamera* m_cBattleCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleSequenceDirector* m_cBattleDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExecutedReturnDragInEffect_Sea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_abDragInIndex;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> m_acPlayerIconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBattleVoiceSetList> m_acBattleVoiceSetList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleAdditiveOrderData m_cCurrentAdditiveOrderData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExecSessionAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActionCommandBase* m_cCurrentActionCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_cBattleEventSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsBattleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReadyBattleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExecBattleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExecBattleStartDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCommandMenuActor* m_cBattleCommandMenuActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_acUsedOnceMonsterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_acUsedAwakingMonsterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsAutoTameMonster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cAutoTameTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleActionOrder* m_cBattleActionOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acFirstActionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsFirstActionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExecFirstActionTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cActiveCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cActionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cAdditiveCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionOrderData m_cCurrentOrderData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nTotalRewardMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nTotalRewardExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nTotalRewardJP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nRewardLuckyMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nRewardLuckyExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nRewardLuckyJP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMoneyRatioByAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fExpRatioByAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fJPRatioByAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMoneyRatioByEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fExpRatioByEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fJPRatioByEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMoneyRatioBySupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fExpRatioBySupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fJPRatioBySupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fExpRatioBySupportInNight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fJPRatioBySupportInNight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideBattleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowChangeBattleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMainPartyIsFrontMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnePartyDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExecChangePartySequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nSettledPlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponTexutreUnloadManage m_WeaponUnloadManage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugRelaseWeaponTexture;
    
    ABattleManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBattleNumberUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateBattleFieldDisease();
    
    UFUNCTION(BlueprintCallable)
    bool SwapBattlePlayerForEightBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartBattleRequest();
    
    UFUNCTION(BlueprintCallable)
    void SetUsedRepeatAbility(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupAutoTameMonster(ABattleCharacterBase* cTarget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetUnloadWeaponGCType(EWEAPON_UNLOAD_GC_TYPE eType);
    
    UFUNCTION(BlueprintCallable)
    void SetUnloadWeaponCntMax(uint8 uMax);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSyncAnimationCharacterParent(ABattleCharacterBase* cCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetPrevNoticeCharacter_Pinch(ABattleCharacterBase* cPinchCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetPrevNoticeCharacter_JustBreak(ABattleCharacterBase* cJustBreakCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool SetMoneyRatioBySupport(float fRatio);
    
    UFUNCTION(BlueprintCallable)
    bool SetMoneyRatioByEquipment(float fRatio);
    
    UFUNCTION(BlueprintCallable)
    bool SetMoneyRatioByAbility(float fRatio);
    
    UFUNCTION(BlueprintCallable)
    bool SetJPRatioBySupportInNight(float fRatio);
    
    UFUNCTION(BlueprintCallable)
    bool SetJPRatioBySupport(float fRatio);
    
    UFUNCTION(BlueprintCallable)
    bool SetJPRatioByEquipment(float fRatio);
    
    UFUNCTION(BlueprintCallable)
    bool SetJPRatioByAbility(float fRatio);
    
    UFUNCTION(BlueprintCallable)
    bool SetExpRatioBySupportInNight(float fRatio);
    
    UFUNCTION(BlueprintCallable)
    bool SetExpRatioBySupport(float fRatio);
    
    UFUNCTION(BlueprintCallable)
    bool SetExpRatioByEquipment(float fRatio);
    
    UFUNCTION(BlueprintCallable)
    bool SetExpRatioByAbility(float fRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetExecSessionAbilityForTutorial(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRelaseWeaponTexture(bool bRelease);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugSwitch(EBATTLE_DEBUG_SWITCH eType, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugParameter(EBATTLE_DEBUG_SWITCH eType, int32 nValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBattleStartType(EBATTLE_START_TYPE StartType, bool WaterSide);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SearchPlayerCharacter(EPlayableCharacterID eCharaID, ABattleCharacterBase*& PlayerCharacter, bool& bFindCharacter, bool& bCharacterAlive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SearchEnemyCharacter(FName strEnemyID, ABattleCharacterBase*& EnemyCharacter, bool& bFindCharacter, bool& bCharacterAlive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SearchBattleFieldDisease(EFIELD_DISEASE_TYPE DiseaseType);
    
    UFUNCTION(BlueprintCallable)
    void ReturnDragInIndex(int32 nIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetDragInIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RequestPlayActionWaitTime(float fWaitTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestLoadForEndroll(EEndRollSegmentSet eSegment);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestLoadBattleEvent(const TSoftObjectPtr<ULevelSequence>& cEventSequence);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RequestChangeBattleParty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestBattleEvent(const TSoftObjectPtr<ULevelSequence>& EventSequence, ABattleCharacterBase* MainActor, ABattleCharacterBase* EventEnforcer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveBattleFieldDisease(EFIELD_DISEASE_TYPE DiseaseType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleasePotentialityAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayReturnDragInEffect(ABattleCharacterBase* cReturnCharacter, EBATTLE_DRAG_IN_TYPE eDragInType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMultiLineInfomation(const FText& strFirstText, const FText& strSecondText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenChainInfomation(UPARAM(Ref) TArray<FText>& astrInfomationText, float fShowTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenActionInfomation(const FText& strInfomationText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsItemCommandSeal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsItemCommandEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsGuardCommandEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstActionTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecBattleStartDash();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsEscapeCommandEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndrollReplayMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableRelaseWeaponTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEightBattleMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void IsChangeBattlePartyEnable(bool& bEnable, bool& bExecutable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsBoostCommandEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleSpeedOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsAutoTameMonster();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsAllowChangeBattleSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitUsedInvadeMonster();
    
    UFUNCTION(BlueprintCallable)
    void InitSyncAnimationCharacter();
    
    UFUNCTION(BlueprintCallable)
    void InitPrevNoticeCharacter();
    
    UFUNCTION(BlueprintCallable)
    void InitializeResultValue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitBattleOrderCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitBattleFirstActionCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWaterSideMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsedRepeatAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSyncAnimationCharacter(ABattleCharacterBase*& cParent, TArray<ABattleCharacterBase*>& acChilds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ABattleCharacterBase*> GetSubBattlePlayerList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSettledPlayerNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResultMoneyRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResultJPRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResultExpRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<ABattleCharacterBase*> GetRespawnableEnemyList(bool& bFindEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetRespawnableEnemy(int32 nIndex, ABattleCharacterBase*& cRespawnableEnemy, bool& bFindEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPrevNoticeCharacter_Pinch(ABattleCharacterBase*& cPinchCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPrevNoticeCharacter_JustBreak(ABattleCharacterBase*& cJustBreakCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOnePartyDead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetMapObjectRoot(AActor*& cMapObjectRoot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMainPartyIsFrontMember();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ABattleManager* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEventFlag(FName FlagName, bool& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetEnemyGroupID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyBreakCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDebugParameter(EBATTLE_DEBUG_SWITCH eType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDebugBattleLogComponent* GetDebugLogComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDebugBattleManagerComponent* GetDebugComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetCurrentAdditiveOrderData(FBattleAdditiveOrderData& cAdditiveOrderData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCurrentActionOrderData(FActionOrderData& cActionData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetCurrentActionCommand(AActionCommandBase*& cActionCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ABattleCommandMenuActor* GetCommandMenuActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetBattleVoiceSetList(FName strCharacterID, TArray<FName>& astrBattleVoiceLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBattleViewerMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleTurnCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ABattleCharacterBase*> GetBattleSupporterList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    EBATTLE_START_TYPE GetBattleStartType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetBattleSequencerObject_SteamEffect(AEmitter*& cSteamAuraA, AEmitter*& cSteamFieldA);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetBattleSequencerObject_AntlionSand(AStaticMeshActor*& cAntlionSandA, AStaticMeshActor*& cAntlionSandB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattleSequenceDirector* GetBattleSequenceDirector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattlePlayerListForSequencer(TArray<ABattleCharacterBase*>& acFrontParty, TArray<ABattleCharacterBase*>& acBackParty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ABattleCharacterBase*> GetBattlePlayerListForEightBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ABattleCharacterBase*> GetBattlePlayerList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattleOrderCount(int32& nOrderCount, int32& nOrderCountMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBATTLE_ENCOUNT_TYPE GetBattleMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetBattleInfomation(FName& strEnemyGroupID, bool& bBossBattle, bool& bFieldCommandBattle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ABattleCharacterBase*> GetBattleEnemyList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ABattleCharacterBase*> GetBattleCharacterList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattleCamera* GetBattleCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetBattleBoostMode(bool& bBoostMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetBattleActiveCharacter(ABattleCharacterBase*& cActiveCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABattleActionOrder* GetBattleActionOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetAutoTameTarget(ABattleCharacterBase*& cAutoTameTarget);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAddDragInIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishChangePartySequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishBattleStartDash();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishBattleEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecInitializeEnemyResourceList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecDebugPlayBattleEvent(const TSoftObjectPtr<ULevelSequence>& cEventSequence, ABattleCharacterBase* cMainActor, ABattleCharacterBase* cEventEnforcer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecDebugPlayAbility(FName strAbilityLabel, int32 nBoostLevel, bool bPlayerSide);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecChangeBattleSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecBattleSuspend();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecBattleFieldDisease(EFIELD_DISEASE_TYPE DiseaseType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecActionOrderBlind(bool bEnable, bool bPlayerOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool Debug_IsReadyBattleSuspend();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CreateStationaryBattleUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseActionInfomation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckUsedOnceMonster(FName strCheckMonsterLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckUsedAwakingMonster(FName strCheckMonsterLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckSupportAilmentInParty(ESUPPORT_AILMENT_TYPE eAilmentType, FSupportAbilityDataBase& cAbilityData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDebugSwitch(EBATTLE_DEBUG_SWITCH eType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckBattleVictory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckBattleTutorial_OpenCommandMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBattlePlayerInMainParty(ABattleCharacterBase* cTargetPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void CheckBattleDefeat(bool& bBattleDefeat, bool& bEightBattleChange);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeBattlePartyForAbility();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAllDebugSwitch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddUsedOnceMonster(FName strUsedMonsterLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddUsedAwakingMonster(FName strUsedMonsterLabel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddUnloadWeaponTextureLabel(UPARAM(Ref) TArray<FName>& weaponList);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddSyncAnimationCharacterChilds(ABattleCharacterBase* cCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool AddRewardLuckyMoney(int32 nValue);
    
    UFUNCTION(BlueprintCallable)
    bool AddRewardLuckyJP(int32 nValue);
    
    UFUNCTION(BlueprintCallable)
    bool AddRewardLuckyExp(int32 nValue);
    
    UFUNCTION(BlueprintCallable)
    void AddReflectionEnforcerList(ABattleCharacterBase* cCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddloadWeaponTextureLabel(UPARAM(Ref) TArray<FName>& weaponList);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddEnemyBreakCount();
    
    UFUNCTION(BlueprintCallable)
    void AddBattleTurnCount();
    
    UFUNCTION(BlueprintCallable)
    void AddBattleOrderCount();
    
    UFUNCTION(BlueprintCallable)
    static void AddBattleLogForOneLine(const FString& strBattleLog);
    
    UFUNCTION(BlueprintCallable)
    static void AddBattleLog(FDebugBattleLog cBattleLog);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddBattleFirstActionCharacter(ABattleCharacterBase* cActionCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddBattleFieldDisease(EFIELD_DISEASE_TYPE DiseaseType, int32 InvocationValue, int32 InvocationTurn, int32 DiseaseLevel, ABattleCharacterBase* Enforcer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddAdditiveOrderForSong(ABattleCharacterBase* Enforcer, FName AbilityName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddAdditiveOrderForSignOfBoost(ABattleCharacterBase* Enforcer, FName AbilityName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddAdditiveOrderForReraise(ABattleCharacterBase* Enforcer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddAdditiveOrderForRepeat(ABattleCharacterBase* Enforcer, FName AbilityName, UPARAM(Ref) TArray<ABattleCharacterBase*>& acTargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddAdditiveOrderForReflection(ABattleCharacterBase* Enforcer, FName strAbilityName, FName strAilmentName, int32 nInvocationValue, EATTRIBUTE_TYPE eAttribute, ABattleCharacterBase* cTargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddAdditiveOrderForLastAttack(ABattleCharacterBase* Enforcer, FName AbilityName, UPARAM(Ref) TArray<ABattleCharacterBase*>& acTargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddAdditiveOrderForFirstAttack(ABattleCharacterBase* Enforcer, FName AbilityName, UPARAM(Ref) TArray<ABattleCharacterBase*>& acTargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddAdditiveOrderForEnchant(ABattleCharacterBase* Enforcer, FName AbilityName, UPARAM(Ref) TArray<ABattleCharacterBase*>& acTargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddAdditiveOrderForCounter(ABattleCharacterBase* Enforcer, FName AbilityName, bool bOnDead, bool bCounterOnce, ABattleCharacterBase* cTargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddAdditiveOrderForChaseAttack(ABattleCharacterBase* Enforcer, FName AbilityName, UPARAM(Ref) TArray<ABattleCharacterBase*>& acTargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddAdditiveOrderForAutoTameMonster(ABattleCharacterBase* cEnforcer, ABattleCharacterBase* cTarget);
    
};

