#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EBALLOON_TEXT_POS.h"
#include "EEVENTDIALOG_MODE.h"
#include "EEVENTGAMEOVER_STATE.h"
#include "EEVENT_FADE_TYPE.h"
#include "EEventBalloonDir.h"
#include "EHUNTER_PARTNER_ID.h"
#include "EKSCharacterAction.h"
#include "EKSCharacterAnimationLoop.h"
#include "EKSCharacterDir.h"
#include "EKSPartySet.h"
#include "EPlayableCharacterID.h"
#include "ESE_TYPE.h"
#include "ETUTORIAL_TYPE.h"
#include "ETimeZoneType.h"
#include "EventCommandBase.h"
#include "MajEventData.h"
#include "JumpFrameSet.h"
#include "RichEventCommandBase.generated.h"

class AActor;
class AKSCharacterBase;
class UCameraComponent;
class ULevelSequencePlayer;
class UMovieSceneSection;
class UMovieSceneSubSection;
class UMovieSceneTrack;
class USceneComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class MAJESTY_API URichEventCommandBase : public UEventCommandBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGameOverFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEVENTGAMEOVER_STATE eGameOverState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FadeEndColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParticipationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEVENTDIALOG_MODE DialogMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectDialogIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectLabelName;
    
public:
    URichEventCommandBase();
protected:
    UFUNCTION(BlueprintCallable)
    void VisibleTalkTaxtData(const FString& Name, FName NameLabel, const FString& Message, FName MessageLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopSubSequenceIndexFunction(int32 nIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopSubSequenceFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopSubSequenceAction(ULevelSequencePlayer* Sequence);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopResidentSubSequencerFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartResidentSubSequencerFunction(const FString& Loop);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartPreparationBattleFunction(const FString& EnemyGroupID, const FString& FinishEvent);
    
    UFUNCTION(BlueprintCallable)
    void StartPreparationBattleExec(const FEventData& EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartFlashbackFunciton(FName ResourceName, float EndTime, const FLinearColor FadeColor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartFinalBattleFunction(const FString& EnemyGroupID, const FString& FinishEvent);
    
    UFUNCTION(BlueprintCallable)
    void StartFinalBattleExec(const FEventData& EventData);
    
    UFUNCTION(BlueprintCallable)
    void StartEventBattle(const FEventData& EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartEndCardFunciton(EPlayableCharacterID Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartDeepThinkResidentFunction(int32 SeqIndex, FName TagName, FVector Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartDeepThinkFunction(int32 nIndex, FName TagName, FVector Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartDeepDirectingFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartCharaFadeFunction(AKSCharacterBase* EventChara, bool Visible, float FadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartBattleFunction(const FString& EnemyGroup, const FString& FinishEvent, bool EventBattle, bool SingleBattle, EPlayableCharacterID EventBattleChara, EPlayableCharacterID FixFirstOrderPlayer, bool DarkSurface);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartBattleBitFlagFunction(const FString& EnemyGroup, const FString& FinishEvent, bool EventBattle, EPlayableCharacterID EventBattleChara, EPlayableCharacterID FixFirstOrderPlayer, int32 FlagIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnThiefActionFunction(AKSCharacterBase* EventChara, EKSCharacterDir SetDir, FName AddTagName, EKSCharacterAction ActionLabelName, EKSCharacterAnimationLoop LoopSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnPartyPositionCharaFunction(AKSCharacterBase* EventChara, int32 PartyPosition, EKSCharacterDir SetDir, FName AddTagName, EKSCharacterAction ActionLabelName, EKSCharacterAnimationLoop LoopSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnPartnerCharaFunction(AKSCharacterBase* EventChara, FName CharaLabelName, EKSCharacterDir SetDir, FName AddTagName, EHUNTER_PARTNER_ID partnerID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnParticipationOrderCharaFunction(AKSCharacterBase* EventChara, int32 Index, EKSCharacterDir SetDir, FName AddTagName, EKSCharacterAction ActionLabelName, EKSCharacterAnimationLoop LoopSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnFirstSelectCharaFunction(AKSCharacterBase* EventChara, EKSCharacterDir SetDir, FName AddTagName, EKSCharacterAction ActionLabelName, EKSCharacterAnimationLoop LoopSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnEventEffectPartnerFunction(int32 ID, const FName EffectLabel, float LifeTime, const FVector Pos, const FRotator Rotate, const FVector Scale, FName CharacterLabel, EHUNTER_PARTNER_ID partnerID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnEventEffectFunction(int32 ID, const FName EffectLabel, float LifeTime, const FVector Pos, FName CharacterLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnEventCharaEffectFunction(AKSCharacterBase* EventChara, int32 ID, const FName EffectLabel, float LifeTime, const FVector Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnCharaActionFunction(AKSCharacterBase* EventChara, FName CharaLabelName, EKSCharacterDir SetDir, FName AddTagName, EKSCharacterAction ActionLabelName, EKSCharacterAnimationLoop LoopSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnCharaActionFootStepFunction(AKSCharacterBase* EventChara, FName CharaLabelName, EKSCharacterDir SetDir, FName AddTagName, EKSCharacterAction ActionLabelName, EKSCharacterAnimationLoop LoopSetting, bool FootStep);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnAtlantisPartyCharaFunction(AKSCharacterBase* EventChara, EKSPartySet PartySetID, int32 PartyPosition, EKSCharacterDir SetDir, FName AddTagName, EKSCharacterAction ActionLabelName, EKSCharacterAnimationLoop LoopSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float SetUpFrameNumber(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSubSequenceOptionFunction(int32 Index, FName OptionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOpenEventGameOverUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOpenCloseDoorFunction(FName TargetBP, bool DoorOpen, bool IgnoreSE);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHouseModeTheaterFunction(bool In, FName TargetBP, bool DoorOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGravityModeFunction(AKSCharacterBase* EventChara, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFlipbookPlayRateFunction(AKSCharacterBase* EventChara, float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFlipbookPlayRateAllFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableFootStepSoundFunction(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableCharacterFootStepFunction(AKSCharacterBase* EventChara, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableActorBillboardFunction(FName TargetTag, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBitFlagFunction(int32 Index, bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SequencerFrameJumpFunction(int32 FrameNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SequencerFrameBitFlagJumpFunction(int32 FrameNumber, int32 FlagIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RestartSubSequenceReditentFunction(int32 nIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RestartSubSequenceFunction(int32 nIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RestartMainSequencerFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetFlipbookPlayRateFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveEventEffectFunction(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostEffectSepiaFunction(UCameraComponent* TargetCamera, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostEffectSepiaFadeFunction(UCameraComponent* TargetCamera, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostEffectMonochromeParamFunction(UCameraComponent* TargetCamera, FVector Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostEffectMonochromeFunction(UCameraComponent* TargetCamera, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostEffectMonochromeFadeFunction(UCameraComponent* TargetCamera, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayRichEventSeLabelFunction(ESE_TYPE SELabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayRichEventPartnerSeFunction(FName strSeLabel, EHUNTER_PARTNER_ID partnerID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayFieldCommandDialogFunction();
    
    UFUNCTION(BlueprintCallable)
    void PlayEditorSound(USoundAtomCue* SoundData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ParticipationOrderFrameJumpFunction(FJumpFrameSet FrameSetData, int32 EndFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenTutorialUIFunciton(ETUTORIAL_TYPE TutorialType, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenSelectDialogVariableTypeFunction(FName TalkLabel, FName SelectTextLabel1, FName JumpLabelName1, FName SelectTextLabel2, FName JumpLabelName2, FName SelectTextLabel3, FName JumpLabelName3, FName SelectTextLabel4, FName JumpLabelName4);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenSelectDialogNextEventFunction(FName TalkLabel, FName SelectTextLabel1, int32 SelectSubSeqIndex1, FName SelectTextLabel2, int32 SelectSubSeqIndex2);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenSelectDialogLabelJumpFunction(FName TalkLabel, FName SelectTextLabel1, FName JumpLabelName1, FName SelectTextLabel2, FName JumpLabelName2);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenMapNotificationUIFunciton(FName levelLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenKenshiTutorialUIFunciton();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenGetItemDialogFunction(FName TalkLabel, FName ItemLabel_1, int32 ItemNum_1, FName ItemLabel_2, int32 ItemNum_2, FName ItemLabel_3, int32 ItemNum_3, FName ItemLabel_4, int32 ItemNum_4);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenEventGameOverUIFunciton(FName JumpLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenChoiceAnswerDialogFunction(FName TalkLabel, FName SelectTextLabel1, FName JumpLabelName1, FName SelectTextLabel2, FName JumpLabelName2, int32 AnswerIndex);
    
    UFUNCTION(BlueprintCallable)
    void NotificationEditorDrawText(const FString& RegionName, const FString& levelName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NarrationWaitFunction();
    
    UFUNCTION(BlueprintCallable)
    void NarrationEditorDrawText(TArray<FString> NarrationText, const FString& AutoTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveSpotLightTargetFunction(AActor* Actor, FVector AddOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveSpotLightResidentFunction(AActor* Actor, FVector AddOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MessagePauseFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MapObjectVisibleParentFunction(FName TagName, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MapObjectVisibleFunction(FName TagName, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MapObjectRefreshFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadFlashbackDataFunciton(FName ResourceName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEventFadeOutEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEventFadeInEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrackNum(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTrackName(UMovieSceneTrack* Track);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieSceneTrack*> GetTrackData(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTargetSequenceName(UMovieSceneSubSection* Section);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMovieSectionsName(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieSceneSection* GetMovieSectionsData(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMovieSectionsCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMovieBindingName(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMovieBindingCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FirstSelectCharaFrameJumpFunction(FJumpFrameSet FrameSetData);
    
public:
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeOutTypeSelectFunction(EEVENT_FADE_TYPE FadeType, const FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeInTypeSelectFunction(EEVENT_FADE_TYPE FadeType, const FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventFadeOutUIFunction(float EndTime, const FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EventFadeInUIFunction(float EndTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndFlashbackFunciton(float EndTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndDeepThinkResidentFunction(int32 SeqIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndDeepThinkFunction(int32 nIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndDeepDirectingFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DialogUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeepDirectingStartEndAttachFunction(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeepDirectingAttachPlayerFunction(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeepDirectingAttachCameraFunction(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DancerSongFrameJumpFunction(int32 ChapterIndex, int32 Frame1, int32 Frame2, int32 Frame3);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTimeZoneEditor(ETimeZoneType Zone);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckObjectTimeZoneFunction(USceneComponent* ActorComponent, ETimeZoneType Zone);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeTimeZoneFunction(ETimeZoneType Zone);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeActionCharaTagNameFunction(FName TargetTag, EKSCharacterAction ActionLabelName, int32 frame, EKSCharacterAnimationLoop LoopSetting, EKSCharacterDir SetDir);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CallHideBattleWipeFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BalloonOpenSubSequenceFunction(FName TalkTargetTag, EEventBalloonDir BalloonDir, FName TalkText, float AutoTalkWait, FVector2D Offset, bool StopSubSeq);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BalloonOpenPartnerFunction(FName TalkTargetTag, EEventBalloonDir BalloonDir, FName TalkTextA, FName TalkTextB, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition, FVector2D Offset, bool WithoutTail);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BalloonOpenLabelPositionFunction(FName TalkTargetTag, EEventBalloonDir BalloonDir, FName TalkText, float AutoTalkWait, FVector2D Offset, bool StopMainSeq, float PlaybackSubSeqPosition, bool WithoutTail);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BalloonOpenDeepThinkingFixedFunction(EBALLOON_TEXT_POS BalloonPos, FName TalkText, float AutoTalkWait, bool IsCustomFadeTime, float FadeOutTime, bool StopMainSeq);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AttachCharacterChangeCollisionFunction(AKSCharacterBase* EventChara, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AtlantisCharaFrameJumpFunction(EKSPartySet PartySetID, int32 PartyPosition, FJumpFrameSet FrameSetData);
    
};

