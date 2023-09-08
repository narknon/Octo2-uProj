#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ActionDelaySEData.h"
#include "ActionOrderData.h"
#include "BattleAdditiveOrderData.h"
#include "BattleVoiceSetData.h"
#include "CharacterParam.h"
#include "EACTION_ORDER_TYPE.h"
#include "EAILMENT_CALC_TYPE.h"
#include "EATTRIBUTE_RESIST.h"
#include "EATTRIBUTE_TYPE.h"
#include "EBATTLE_ACTION_TYPE.h"
#include "EBATTLE_CHARA_POSITION_RESET_TYPE.h"
#include "EBATTLE_DEBUG_SWITCH.h"
#include "EBATTLE_DRAG_IN_TYPE.h"
#include "EBATTLE_REPLAY_CHARA_STATUS.h"
#include "EBATTLE_VOICE_TYPE.h"
#include "ECOMMAND_SUB_MENU_TYPE.h"
#include "EDISEASE_CATEGORY.h"
#include "EDISEASE_TYPE.h"
#include "EJOB_TYPE.h"
#include "EPOTENTIALITY_ACTION_TYPE.h"
#include "EPlayableCharacterID.h"
#include "ESESSION_SE_TYPE.h"
#include "ESUPPORT_AILMENT_TYPE.h"
#include "EWEAPON_CATEGORY.h"
#include "EWEAPON_STANCE.h"
#include "ItemData.h"
#include "RequestActionOrderData.h"
#include "ShieldChangeData.h"
#include "SupportAbilityDataBase.h"
#include "WeakChangeData.h"
#include "WeakLockData.h"
#include "BattleCharacterBase.generated.h"

class AActionCommandBase;
class ABattleCharacterBase;
class AKSCharacterBase;
class UActionOrderComponent;
class UActorComponent;
class UBattleAIBase;
class UBattleVoiceComponent;
class UCurveFloat;
class UCurveVector;
class UDebugBattleCharaComponent;
class UInventorComponent;
class UMasqueradeComponent;
class UPotentialityActionComponent;
class USceneComponent;

UCLASS(Blueprintable)
class MAJESTY_API ABattleCharacterBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKSCharacterBase* m_cAnimationCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKSCharacterBase*> m_acSubAnimationCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterParam m_cMasterParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nCurrentHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nDecreaseHPMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsChangedHPMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nCurrentMP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nCurrentBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nCurrentBPMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nCurrentShieldPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nShieldPointMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cOwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nUseBPInCurrentOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBreakEnemyInCurrentOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExecBreakAct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCharacterReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAbilityHitFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAbilityHitInvisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseDamageCutShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bJustKillInAilment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReflectionEnforcer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDISEASE_TYPE, EATTRIBUTE_RESIST> m_aeDiseaseResist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHitDiseaseInAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsExceptField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nDragInIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nDragInIndexTest;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vForceMovementStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vForceMovementGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsExecForceMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResumeIdleAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResumeIdleActionFixed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_ACTION_TYPE m_eResumeIdleActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsAutoTameMonster;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableBlind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionOrderComponent* m_cActionOrderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nOrderCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nCurrentOrderCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nCurrentOrderCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nCurrentActionTimeBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nNextActionTimeBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionOrderData> m_acNextActionOrderData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattleVoiceComponent* m_cBattleVoiceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPlayOnRecoveredVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSettledPlayOnce_OnRecovered;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_cDefaultEffectSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_cGroundEffectSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_cChargeActionEffectSocket;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform m_sBaseTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsCharacterWarpMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableDeadCharacterControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CharaTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CanoeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisibleCanoe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableCanoeTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableBattleCameraOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PotentialityAction_BodyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PotentialityAction_EyesColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESUPPORT_AILMENT_TYPE> m_aeSupportAilment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESUPPORT_AILMENT_TYPE, FSupportAbilityDataBase> m_acSupportAbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWEAPON_STANCE m_eWeaponStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWEAPON_CATEGORY> m_aeEquipmentWeaponList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWEAPON_CATEGORY m_eMainWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nMainWeaponIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWEAPON_CATEGORY m_eNormalAttackWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nNormalAttackWeaponIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nSwitchWeaponIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWEAPON_CATEGORY m_eForteWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strForteWeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPotentialityActionComponent* m_cPotentialityActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPotentialityActionEnable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nExcitementPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMasqueradeEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMasqueradeComponent* m_cMasqueradeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInventorEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventorComponent* m_cInventorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bChargeActionEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleAdditiveOrderData> m_acChargeActionDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattleAIBase* m_cBattleAIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBattleAIReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsPreparation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsWeakIconFullOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeakLockData m_cCurrentWeakLockData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeakLockData m_cRequestWeakLockData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsUpdateWeakLockData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeakChangeData m_cCurrentWeakChangeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeakChangeData m_cRequestWeakChangeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsUpdateWeakChangeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShieldChangeData m_cCurrentShieldChangeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShieldChangeData m_cRequestShieldChangeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsUpdateShieldChangeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsUpdateShieldChangeDataTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EATTRIBUTE_TYPE> m_aeOpenedAttributeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nBribeCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBribeRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRequestSettingNextOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRequestActionOrderData> m_RequestSettingNextOrderData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRequestSettingNextTurnOnly;
    
public:
    ABattleCharacterBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<bool> WeakTypeToWeaponType(int32 eWeakLockType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<bool> WeakTypeToMagicType(int32 eWeakLockType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateWeakLock_PostOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateWeakChange_PostOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateSubStatusParam(bool UpdateBoost, bool UpdatePotential);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateStatusParam(bool UpdateBoost, bool UpdatePotential);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateShieldChange_PostOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateRequestSettingNextOrder_PostOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateChargeActionCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TurnONStatusUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TurnOffStatusUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SwitchNormalAttackWeapon(bool bDirNext, int32& nWeaponIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SwitchMainWeapon(bool bDirNext, int32& nWeaponIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SwitchCatapultWeapon(bool bDirNext, int32& nWeaponIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SurveyOpenedWeakPoint(int32& nOpenedNum, int32& nWeakPointMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopForceMovementTimeline();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartForceMovementTimeline();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponStance(EWEAPON_STANCE eStance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetWeakIconFullOpen(bool bIsFullOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibleCanoe(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetUseDamageCutShield(bool bUseShield);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupSubAnimationCharacter(UPARAM(Ref) TArray<ABattleCharacterBase*>& acTarget, FVector cCommandOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupBaseTransform(EBATTLE_CHARA_POSITION_RESET_TYPE eResetType, bool bEnableDeadCharacterControl);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupActionOrderSealAction(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupActionOrderBribe(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupActionOrderBlindFast(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupActionOrderBlind(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SetSupportAilment(FSupportAbilityDataBase cSupportAbilityData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetShieldPointMax(int32 nShieldMax);
    
    UFUNCTION(BlueprintCallable)
    void SetReflactionEnforcer(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPotentialityAction_EyesColor(float fAlpha);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPotentialityAction_BodyColor(FLinearColor cColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGetBackBoostPoint(int32 nGetBackBoostPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetForceMovementTimelineCurve(UCurveFloat* cMovementRatio, UCurveVector* cMovementOffset, UCurveFloat* cOpacityCurve, float fTimelineLength);
    
    UFUNCTION(BlueprintCallable)
    void SetForceMovementParameter(FVector vStartPoint, FVector vGoalPoint, bool bResumeIdle, EBATTLE_ACTION_TYPE eResumeIdleType, bool bResumeIdleFixed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetExcitementPoint(ABattleCharacterBase* cEnforcer, int32 nBoostLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetEnableWeakLockData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetEnableWeakChangeData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetEnableShieldChangeData();
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePlayOnRecoveredVoice(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableCanoeTrace(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDisableBattleCameraOpacity(bool bDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultLocation(bool bInMainParty);
    
    UFUNCTION(BlueprintCallable)
    void SetDecreaseHPMax(int32 DecreaseValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugSwitch(EBATTLE_DEBUG_SWITCH eType, bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDeadFlagForReplay(bool bDeadFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharaTransform(FTransform cTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacterOpacityForActionCommand(float fOpacity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterOpacity(float fOpacity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacterName(FName strCharacterNameLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCanoeTransform(FTransform cTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBoostPointMax(int32 nBoostMax);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityHitFlag(bool bAbilityHit, bool bAbilityHitInvisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SearchDiseaseForAI(EDISEASE_TYPE DiseaseType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SearchDiseaseByCategoryForAI(EDISEASE_CATEGORY DiseaseCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SaveCharacterParameter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReturnCaptureMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RestoreGroggy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RestoreBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetVoiceFlagForPreAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetSelectWeaponForMasquerade(EWEAPON_CATEGORY eTargetWeapon);
    
    UFUNCTION(BlueprintCallable)
    void ResetHitDiseaseForPreAction();
    
    UFUNCTION(BlueprintCallable)
    void ResetExcitementPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetCanoeTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetBattleCharacterForReplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RequestWeakLock(FWeakLockData cNewWeakLockData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RequestWeakChange(FWeakChangeData cNewWeakChangeData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RequestShieldChange(FShieldChangeData cNewShieldChangeData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveDiseaseForSequencer(FName DiseaseName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveDiseaseForAI(EDISEASE_TYPE DiseaseType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleasePotentialityAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecoveryPotentialityActionPoint(ABattleCharacterBase* cEnforcer, int32 nValue, bool bUseRecoveryUI, bool bIsMeatItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecoveryMP(ABattleCharacterBase* cEnforcer, int32 nValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecoveryHP(ABattleCharacterBase* cEnforcer, int32 nValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecoveryBP(ABattleCharacterBase* cEnforcer, int32 nValue, bool bUseRecoveryUI, bool bIsMeatItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FBattleAdditiveOrderData PopChargeActionData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCaptureMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayBattleVoiceForDamage(int32 nDamageValue, AActionCommandBase* cActionCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayBattleVoice(EBATTLE_VOICE_TYPE eBattleVoiceType, FBattleVoiceSetData cPlayCondition, bool bIsSkipDiseaseCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenWeakIcon(int32 nIndex, bool bRandom, bool bPreparation, bool bPlay2nd, int32& bOpenIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnTakeNewDisease(EDISEASE_TYPE eDiseaseType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnTakeDisease(ABattleCharacterBase* cEnforcer, EDISEASE_TYPE eDiseaseType, EDISEASE_CATEGORY eDiseaseCategory, int32 nInvocationValue, int32 nBoostLevel, bool bIsNewDisease);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnPotentialityAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnHitDamageSP(bool bIsBreakAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnHitDamageHP(bool bIsBreakAttack, bool bIsBreakTarget, EATTRIBUTE_RESIST eTotalResist, EATTRIBUTE_RESIST eWeaponResist);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinish_CreateBattleAI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OffPotentialityAction(bool bCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveLastNextOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsWeakIconFullOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsSupporterComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsSelecterEffectVisibleSealAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsSelecterEffectVisibleNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsSelecterEffectVisibleBribe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPotentialityActionEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMasqueradeEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsJustKillInAilment(bool& bJustKill);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventorEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitDiseaseInAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsGarderaAbility(FName AbilityName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecForceMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecBreakAct();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExceptField();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCharacterTameMonster();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCharacterSupporter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCharacterReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCharacterPinch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCharacterNPC();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCharacterNonPartsBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void IsCharacterGroggy(bool& bIsGroggy, bool& bEnableCurrentAction, bool& bEnableNextAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCharacterEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCharacterDisableAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCharacterDecondition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCharacterDeadlySense();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsCharacterDead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCharacterBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoTameMonster();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterruptCurrentOrder(FRequestActionOrderData cActionOrderData);
    
    UFUNCTION(BlueprintCallable)
    void InitUseDamageCutShield();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitializeBattleVoiceDataData(FName strVoiceCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitializeActionOrderData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWEAPON_STANCE GetWeaponStance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetWeaponResist(EWEAPON_CATEGORY eAttackWeapon, bool bCheckWeakLock, EATTRIBUTE_RESIST& eResistResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetWaitEnemyActionFrame(int32& nWaitFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetTameMonsterData(bool& bTameEnable, float& fTameRateBase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSwitchWeaponIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ESESSION_SE_TYPE GetSessionSEType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetReplayStatus(bool bIsSelfTurn, EBATTLE_REPLAY_CHARA_STATUS& eReplayStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetReplayDiseaseMask(int32& nDiseaseMask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPotentialityActionComponent* GetPotentialityActionComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetPlayableCharacterID(EPlayableCharacterID& eCharaID);
    
    UFUNCTION(BlueprintCallable)
    ABattleCharacterBase* GetOwnerPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetOpenedAttribute(int32 nIndex, EATTRIBUTE_TYPE& eResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNormalAttackWeaponIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWEAPON_CATEGORY GetNormalAttackWeaponCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FActionOrderData GetNextActionOrderData(int32 nOrderIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMasqueradeComponent* GetMasqueradeComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWEAPON_CATEGORY GetMainWeaponCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventorComponent* GetInventorComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetForteWeaponID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExcitementPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<EWEAPON_CATEGORY> GetEquipmentWeaponCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FItemData> GetEquipmentList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FName> GetEquipmentLabelList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetEnchantAttribute(EWEAPON_CATEGORY eCheckWeapon, EATTRIBUTE_TYPE& eEnchantAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnablePlayOnRecoveredVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableBlind();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetDiseaseResist(EDISEASE_TYPE eDiseaseType, EATTRIBUTE_RESIST& eResistResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetDelayEnemyActionSE(TArray<FActionDelaySEData>& acActionDelaySEData, bool& bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetDefaultWarpPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDecreaseHPMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDebugBattleCharaComponent* GetDebugComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetCursorPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetCurrentPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetCharmEnemyLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCharacterVoice_BattleStart(FName& strVoiceID, bool& bFindVoiceID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCharacterName(FText& strCharacterName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCharacterJobByRowID(int32& nFirstJob, int32& nSecondJob);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCharacterJob(EJOB_TYPE& eFirstJob, EJOB_TYPE& eSecondJob, bool& bEnableSecondJob);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCharacterID(int32& nCharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCharacterEvation(int32& Result, float& Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCharacterDefence(EAILMENT_CALC_TYPE CalcType, int32& Result, float& Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCharacterConcentrate(int32& Result, float& Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCharacterAttack(EAILMENT_CALC_TYPE CalcType, ABattleCharacterBase* DamageTarget, int32& Result, float& Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCharacterAgility(int32& Result, float& Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetCharacterAccuracy(int32& Result, float& Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetBribeData(bool& BribeEnable, int32& BribeMoney);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBattleVoiceComponent* GetBattleVoiceComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USceneComponent* GetBattleEffectSocket(bool bGround);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBattleAIBase* GetBattleAIComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetAttributeResist(EATTRIBUTE_TYPE eAttackAttribute, bool bCheckWeakLock, EATTRIBUTE_RESIST& eResistResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AKSCharacterBase* GetAnimationCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AActor* GetAnimationActorForAttach();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetActionTimeForNextTurn(EACTION_ORDER_TYPE eType, float fDelayRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetActionTimeForCurrentTurn(EACTION_ORDER_TYPE eType, float fDelayRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActionOrderComponent* GetActionOrderComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetAbilityData(int32 nIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FinishPotentialityAction(bool bCheckResume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishChangePartySequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecSwitchSlidePartySubToMain();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecSwitchSlidePartyMainToSub();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecStartCharacterWarp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecSettingNextOrder(UPARAM(Ref) TArray<FRequestActionOrderData>& acActionOrderData, bool bNextTurnOnly, bool bRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecRevive(ABattleCharacterBase* cEnforcer, int32 nReviveHP, bool bOverHeal, bool bUseRecoveryUI, bool bUseReviveVoice);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecReturnSupporterAction(bool bWithReturnText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecReturnCharmAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecEndCharacterWarp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecDragInAction(ABattleCharacterBase* Enforcer, int32 nInvocationTurn, EBATTLE_DRAG_IN_TYPE eDragInType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecCharmAction(ABattleCharacterBase* Enforcer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecBlowAwayAction(ABattleCharacterBase* Enforcer, int32 nInvocationTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EndCharacterOrder(float& fWaitTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EndBattleTurnForSubParty(float& fWaitTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DecideActionForSubParty(float& fWaitTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_SetActionDelaySEData(UPARAM(Ref) TArray<FActionDelaySEData>& cSEData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool Debug_GetActionDelaySEData(TArray<FActionDelaySEData>& cSEData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSubAnimationCharacter(int32 nCreateNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CreateOpenedAttributeList(int32& nAttributeNum, int32& nAttributeMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBattleEffectSocket(FVector vEffectOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBattleAI(const TSoftClassPtr<UBattleAIBase>& cBattleAIClass, bool bAutoInitialize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckWrapAroundEnable(FActionOrderData cTargetOrderData, EACTION_ORDER_TYPE eRequestType, bool bIsNextTurn, bool bMoveForward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void CheckWeaponWeakOpen(EWEAPON_CATEGORY eWeaponCategory, bool& bOpened);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckUseDamageCutShield(bool& bUseShield);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CheckSupportAilment(ESUPPORT_AILMENT_TYPE eSupportAilment, FSupportAbilityDataBase& cSupportAbilityData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckShuffleEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckReflactionEnforcer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckPreparationSealing(ECOMMAND_SUB_MENU_TYPE eSubMenuType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPotentialityActionExec(EPOTENTIALITY_ACTION_TYPE eActionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckOverTakeEnable(FActionOrderData cTargetOrderData, EACTION_ORDER_TYPE eRequestType, bool bIsNextTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckLastOrderInTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckFirstOrderInTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckExecedPreparation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckExecDiseaseForPostOrder(bool& bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckEquipmentWeapon(EWEAPON_CATEGORY eCheckWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CheckEnableStealthTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CheckEnableStealthCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CheckEnableStealthActionOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDebugSwitch(EBATTLE_DEBUG_SWITCH eType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckCharacterReviveEnable(bool bReviveAndRecovery);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckBoostPointMax();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void CheckAttributeWeakOpen(EATTRIBUTE_TYPE eAttributeType, bool& bOpened);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckAbilityHitFlag(bool& bAbilityHitFlag, bool& bAbilityHitInvisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangeMainWeapon(EWEAPON_CATEGORY eTargetWeapon, bool bUseWeaponTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangeActionModeForGaldera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ChangeActionMode(bool bIsSpecial, int32 nModeIndex, bool bUseTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BeginCharacterOrder(float& fWaitTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ApplyChangeActionMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddPotentialityActionPoint(int32 nAddPoint, bool bIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddMaxHP(int32 nAdditiveMaxHP);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddDiseaseForSequencer(FName DiseaseName, int32 InvocationValue, int32 InvocationTurn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddDiseaseForAI(FName DiseaseName, int32 InvocationValue, int32 InvocationTurn, ABattleCharacterBase* Enforcer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddChargeActionData(FName strAbilityName, UPARAM(Ref) TArray<ABattleCharacterBase*>& acTargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddBribeCounter();
    
    UFUNCTION(BlueprintCallable)
    UActorComponent* AddActorComponent(UClass* cActorComponentClass);
    
};

