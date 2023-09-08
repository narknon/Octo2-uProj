#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSequencePlayer.h"
#include "CameraInterpolationDelegateDelegate.h"
#include "EBATTLE_CAMERA_SEQUENCE.h"
#include "EBATTLE_CAMERA_TYPE.h"
#include "EBATTLE_CHARA_POSITION_RESET_TYPE.h"
#include "EBATTLE_EFFECT_ATTACH_TYPE.h"
#include "EBATTLE_RESULT_TYPE.h"
#include "EBATTLE_SEQUENCER_CHANGE_TYPE.h"
#include "EBATTLE_START_DASH_TYPE.h"
#include "EBATTLE_TARGET_TYPE.h"
#include "EBREAK_CAMERA_TYPE.h"
#include "EKSCharacterAction.h"
#include "EPlayableCharacterID.h"
#include "ETUTORIAL_TYPE.h"
#include "ETimeZoneType.h"
#include "EVibrationPower.h"
#include "BattleSequenceDirector.generated.h"

class AActionCommandBase;
class ABattleAbilitySequenceActor;
class ABattleCamera;
class ABattleCharacterBase;
class ABattleSequenceEmitter;
class ABattleSequencePointLight;
class ACameraRig_Rail;
class ACineCameraActor;
class ALevelSequenceActor;
class APostProcessVolume;
class UBalloonBase;
class ULevelSequence;
class ULevelSequenceDirector;
class ULevelSequencePlayer;
class UObject;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class MAJESTY_API ABattleSequenceDirector : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALevelSequenceActor*> m_acManualUpdateSequencerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_cBoostSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_cAbilityCameraSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_cWeatherSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_cEncountSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_cBreakSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleAbilitySequenceActor* m_cActionCommandSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleAbilitySequenceActor*> m_acSubActionCommandSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_cBattleEventSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_cBattleDashSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_cBattleResultSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_cBattlePartyChangeSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCamera* m_cBattleCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APostProcessVolume* m_cPostProcessVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nBoostLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_cBattleDustEffectActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleSequenceEmitter* m_cBoostEffectLv1Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleSequenceEmitter* m_cBoostEffectLv2Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleSequenceEmitter* m_cBoostEffectLv3Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleSequencePointLight* m_cPointLightActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_CAMERA_SEQUENCE m_eAbilityCameraSlideSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTime m_cAbilityCameraSlideStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTime m_cAbilityCameraSlideEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_CAMERA_SEQUENCE m_eAbilityCameraBackSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTime m_cAbilityCameraBackStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTime m_cAbilityCameraBackEndFrame;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActionCommandBase* m_cActionCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SUB_ACTION_COMMAND_MAX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nSubActionCommandCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActionCommandBase*> m_acSubActionCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ABILITY_POINT_LIGHT_MAX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleSequencePointLight*> m_acAbilityPointLightActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_cPartyAreaMounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_cEnemyAreaMounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleSequenceEmitter*> m_acAbilityEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleSequenceEmitter*> m_acAbilityHitEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleSequenceEmitter*> m_acSupportRotationEffectList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBalloonBase* m_cEventBalloon;
    
    ABattleSequenceDirector(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaitTutorialFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaitTalkBalloonFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaitReturnCaptureCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaitResultUIFinishCommand();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaitResultUIFinish();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaitActionCommandDirector();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAbilityCameraSlideSegment(ULevelSequencePlayer* cPlayer, float fSlideRate);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAbilityCameraBackSegment(ULevelSequencePlayer* cPlayer, float fBackRate);
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterSequenceUpdated(ULevelSequencePlayer* cPlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void UnRegisterAbilitySequenceUpdated(ABattleAbilitySequenceActor* cAbilitySequence);
    
public:
    UFUNCTION(BlueprintCallable)
    void TickManualSequencerUpdate(float fDeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SuspendBoostSequencer(int32 nBoostLevel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SuspendActionCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartBattleFade();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UParticleSystemComponent* SpawnBoostEffect(int32 nBoostLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherSequencerRestoreFlag(bool bRestoreState);
    
    UFUNCTION(BlueprintCallable)
    bool SetSequenceTrackDisable(ALevelSequenceActor* cSequenceActor, FMovieSceneObjectBindingID cTrackID, bool bDisable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBattleWipeWhiteOutFlag(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBattleEnemyVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdvancedAbility(EPlayableCharacterID CharacterID, int32 nIndex, bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReturnCaptureCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResumeActionCommandDirector();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetActionCommandDirector(ABattleAbilitySequenceActor* cSequenceActor, bool bIsSubCommand);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveBoostEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleasePotentialityAction(EPlayableCharacterID CharacterID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterSequenceUpdated(ULevelSequencePlayer* cPlayer, FCameraInterpolationDelegate cDelegate);
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterAbilitySequenceUpdated(ABattleAbilitySequenceActor* cAbilitySequence);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVibrationCommand(FName VibrationID, EVibrationPower Power);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySECommand(FName SEID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayActionCommand(ABattleCharacterBase* ActionCharacter, EKSCharacterAction BattleActionID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenTutorialCommand(ETUTORIAL_TYPE eTutorialType, bool bForcedDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenTalkCommand(FName TalkTextID, FVector2D Offset, bool WaitFinish);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenResultUICommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenActionInfoFromAdvancedAbility(FName TextID, EPlayableCharacterID CharaID, int32 AbilityIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenActionInfoForEightBattle(FName TextID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenActionInfo(FName TextID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyCameraCut(ACineCameraActor* cTargetCamera);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterpolationResultCamera(float fRatio);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterpolationAbilityCamera(float fRatio);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InstantDeath_EnemyAll();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ULevelSequence* GetWeatherSequence(ETimeZoneType eTimeZone, EBATTLE_SEQUENCER_CHANGE_TYPE eChangeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlayerLabelByIntID(int32 nPlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ULevelSequence* GetPartyChangeSequence(bool bFrontToBack);
    
    UFUNCTION(BlueprintCallable)
    ULevelSequenceDirector* GetLevelSequenceDirector(ULevelSequencePlayer* cPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ULevelSequence* GetEscapeDashSequence(bool bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ULevelSequence* GetEncountSequence(EBATTLE_CAMERA_TYPE eCameraType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ULevelSequence* GetBreakSequence(EBREAK_CAMERA_TYPE eBreakType, EBATTLE_CAMERA_TYPE eCameraType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ULevelSequence* GetBoostSequence(int32 nBoostLevel, EBATTLE_SEQUENCER_CHANGE_TYPE eChangeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ULevelSequence* GetBattleStartDashSequence(EBATTLE_START_DASH_TYPE eStartDashType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ULevelSequence* GetBattleResultSequence(EBATTLE_RESULT_TYPE eResultType, EBATTLE_CAMERA_TYPE eCameraType, bool bIsFront);
    
    UFUNCTION(BlueprintCallable)
    bool GetAbilityCameraSlideSegment(ULevelSequencePlayer* cPlayer, float& fLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    ULevelSequence* GetAbilityCameraSequence(int32 nBoostLevel, EBATTLE_TARGET_TYPE eTargetType, EBATTLE_CAMERA_TYPE eCameraType, bool bEnemySide, bool bIsFront, FName strAbilityName);
    
    UFUNCTION(BlueprintCallable)
    bool GetAbilityCameraBackSegment(ULevelSequencePlayer* cPlayer, float& fLength);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FixBattleCameraCommand();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishSubActionCommandDirector();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishResultDash();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishPartyChange();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishEscapeDash();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishEncountCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishBreaktCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishBoostShutDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishBattleStartDash();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishBattleResult();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishBattleEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishActionCommandDirector();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishAbilityCamera();
    
    UFUNCTION(BlueprintCallable)
    bool FindTrackAttachInfoByTag(ALevelSequenceActor* cSequenceActor, FName strTag, EBATTLE_EFFECT_ATTACH_TYPE& eAttachType);
    
    UFUNCTION(BlueprintCallable)
    bool FindEventActorTrackByTag(ALevelSequenceActor* cSequenceActor, FName strTag);
    
    UFUNCTION(BlueprintCallable)
    bool FindEmitterTemplateByTag(ALevelSequenceActor* cSequenceActor, FName strTag, TArray<UParticleSystem*>& acEmitterTemplate, TArray<FMovieSceneObjectBindingID>& acBindingID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecWeatherSequencer(ETimeZoneType eTimeZone, EBATTLE_SEQUENCER_CHANGE_TYPE eChangeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecWeatherLoop();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecSubActionCommandDirector(AActionCommandBase* cActionCommand, ULevelSequence* cExecSequence);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecResultDashSequencer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecResultDash();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecPotentialityAction(ABattleCharacterBase* ActionCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecPartyChangeSequencer(bool bFrontToBack);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecPartyChange(bool bFrontToBack);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecNextBoostEvent();
    
    UFUNCTION(BlueprintCallable)
    void ExecForceTickForRigRail(ACameraRig_Rail* cTargetCameraRig);
    
    UFUNCTION(BlueprintCallable)
    void ExecForceTickForCineCamera(ACineCameraActor* cTargetCamera);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecEscapeDashSequencer(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecEscapeDash(bool bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecEncountCameraSequencer(EBATTLE_CAMERA_TYPE eCameraType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecEncountCamera(EBATTLE_CAMERA_TYPE eCameraType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecBreakCameraSequencer(EBREAK_CAMERA_TYPE eBreakType, EBATTLE_CAMERA_TYPE eCameraType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecBreakCamera(EBREAK_CAMERA_TYPE eBreakType, EBATTLE_CAMERA_TYPE eCameraType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecBoostStart(int32 nBoostLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecBoostShutDown(bool bWithWeather);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecBoostSequencer(int32 nBoostLevel, EBATTLE_SEQUENCER_CHANGE_TYPE eChangeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecBoostLoop();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecBattleSuspendCommand();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecBattleStartDashSequencer(EBATTLE_START_DASH_TYPE eStartDashType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecBattleStartDash(EBATTLE_START_DASH_TYPE eStartDashType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecBattleResultSequencer(EBATTLE_RESULT_TYPE eResultType, EBATTLE_CAMERA_TYPE eCameraType, bool bIsFront);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecBattleResult(EBATTLE_RESULT_TYPE eResultType, EBATTLE_CAMERA_TYPE eCameraType, bool bIsFront);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecBattleEventSequencer(ULevelSequence* cExecSequence, ABattleCharacterBase* cEventActor, EBATTLE_CHARA_POSITION_RESET_TYPE ePositionType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecBattleEvent(ULevelSequence* cExecSequence, ABattleCharacterBase* cEventActor, EBATTLE_CHARA_POSITION_RESET_TYPE ePositionType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecActionCommandSequencer(AActionCommandBase* cActionCommand, ULevelSequence* cExecSequence, ABattleAbilitySequenceActor* cSequenceActor, bool bIsSubCommand);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecActionCommandDirector(AActionCommandBase* cActionCommand, ULevelSequence* cExecSequence);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecAbilityCameraSequencer(int32 nBoostLevel, EBATTLE_TARGET_TYPE eTargetType, EBATTLE_CAMERA_TYPE eCameraType, int32 nSlideFrame, AActionCommandBase* cActionCommand, bool bEnemySide, bool bIsFront, FName strAbilityName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecAbilityCamera(int32 nBoostLevel, EBATTLE_TARGET_TYPE eTargetType, EBATTLE_CAMERA_TYPE eCameraType, int32 nSlideFrame, AActionCommandBase* cActionCommand, bool bEnemySide, bool bIsFront, FName strAbilityName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableAbilityHitEffect();
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    ULevelSequencePlayer* CreateAbilitySequencePlayer(UObject* WorldContextObject, ULevelSequence* cLevelSequence, FMovieSceneSequencePlaybackSettings cSettings, ABattleAbilitySequenceActor*& OutActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<ABattleSequenceEmitter*> CreateAbilityEffect(UParticleSystem* cTemplate, EBATTLE_EFFECT_ATTACH_TYPE eAttachType, AActionCommandBase* cActionCommand, bool bGroundEffect, bool bReviveEffect, bool bAttachSocket);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseTalkCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseActionInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckTrackHaveSpecifiedTag(ALevelSequenceActor* cSequenceActor, FMovieSceneObjectBindingID cTrackID, FName strCheckTag);
    
    UFUNCTION(BlueprintCallable)
    bool CheckSequencerHaveSpecifiedTag(ALevelSequenceActor* cSequenceActor, FName strCheckTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeBoostLevelCommand(ABattleCharacterBase* ActionCharacter, int32 BoostLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeBoostLevel(int32 nBoostLevel, bool bAddLevel);
    
};

