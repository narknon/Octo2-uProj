#include "RichEventCommandBase.h"

URichEventCommandBase::URichEventCommandBase() {
    this->IsGameOverFinish = false;
    this->eGameOverState = EEVENTGAMEOVER_STATE::eINIT;
    this->FadeEndTime = 0.00f;
    this->ParticipationIndex = 7;
    this->DialogMode = EEVENTDIALOG_MODE::eNONE;
    this->SelectDialogIndex = 0;
}

void URichEventCommandBase::VisibleTalkTaxtData(const FString& Name, FName NameLabel, const FString& Message, FName MessageLabel) {
}

void URichEventCommandBase::StopSubSequenceIndexFunction_Implementation(int32 nIndex) {
}

void URichEventCommandBase::StopSubSequenceFunction_Implementation() {
}

void URichEventCommandBase::StopSubSequenceAction_Implementation(ULevelSequencePlayer* Sequence) {
}

void URichEventCommandBase::StopResidentSubSequencerFunction_Implementation() {
}

void URichEventCommandBase::StartResidentSubSequencerFunction_Implementation(const FString& Loop) {
}

void URichEventCommandBase::StartPreparationBattleFunction_Implementation(const FString& EnemyGroupID, const FString& FinishEvent) {
}

void URichEventCommandBase::StartPreparationBattleExec(const FEventData& EventData) {
}

void URichEventCommandBase::StartFlashbackFunciton_Implementation(FName ResourceName, float EndTime, const FLinearColor FadeColor) {
}

void URichEventCommandBase::StartFinalBattleFunction_Implementation(const FString& EnemyGroupID, const FString& FinishEvent) {
}

void URichEventCommandBase::StartFinalBattleExec(const FEventData& EventData) {
}

void URichEventCommandBase::StartEventBattle(const FEventData& EventData) {
}

void URichEventCommandBase::StartEndCardFunciton_Implementation(EPlayableCharacterID Character) {
}

void URichEventCommandBase::StartDeepThinkResidentFunction_Implementation(int32 SeqIndex, FName TagName, FVector Offset) {
}

void URichEventCommandBase::StartDeepThinkFunction_Implementation(int32 nIndex, FName TagName, FVector Offset) {
}

void URichEventCommandBase::StartDeepDirectingFunction_Implementation() {
}

void URichEventCommandBase::StartCharaFadeFunction_Implementation(AKSCharacterBase* EventChara, bool Visible, float FadeTime) {
}

void URichEventCommandBase::StartBattleFunction_Implementation(const FString& EnemyGroup, const FString& FinishEvent, bool EventBattle, bool SingleBattle, EPlayableCharacterID EventBattleChara, EPlayableCharacterID FixFirstOrderPlayer, bool DarkSurface) {
}

void URichEventCommandBase::StartBattleBitFlagFunction_Implementation(const FString& EnemyGroup, const FString& FinishEvent, bool EventBattle, EPlayableCharacterID EventBattleChara, EPlayableCharacterID FixFirstOrderPlayer, int32 FlagIndex) {
}

void URichEventCommandBase::SpawnThiefActionFunction_Implementation(AKSCharacterBase* EventChara, EKSCharacterDir SetDir, FName AddTagName, EKSCharacterAction ActionLabelName, EKSCharacterAnimationLoop LoopSetting) {
}

void URichEventCommandBase::SpawnPartyPositionCharaFunction_Implementation(AKSCharacterBase* EventChara, int32 PartyPosition, EKSCharacterDir SetDir, FName AddTagName, EKSCharacterAction ActionLabelName, EKSCharacterAnimationLoop LoopSetting) {
}

void URichEventCommandBase::SpawnPartnerCharaFunction_Implementation(AKSCharacterBase* EventChara, FName CharaLabelName, EKSCharacterDir SetDir, FName AddTagName, EHUNTER_PARTNER_ID partnerID) {
}

void URichEventCommandBase::SpawnParticipationOrderCharaFunction_Implementation(AKSCharacterBase* EventChara, int32 Index, EKSCharacterDir SetDir, FName AddTagName, EKSCharacterAction ActionLabelName, EKSCharacterAnimationLoop LoopSetting) {
}

void URichEventCommandBase::SpawnFirstSelectCharaFunction_Implementation(AKSCharacterBase* EventChara, EKSCharacterDir SetDir, FName AddTagName, EKSCharacterAction ActionLabelName, EKSCharacterAnimationLoop LoopSetting) {
}

void URichEventCommandBase::SpawnEventEffectPartnerFunction_Implementation(int32 ID, const FName EffectLabel, float LifeTime, const FVector Pos, const FRotator Rotate, const FVector Scale, FName CharacterLabel, EHUNTER_PARTNER_ID partnerID) {
}

void URichEventCommandBase::SpawnEventEffectFunction_Implementation(int32 ID, const FName EffectLabel, float LifeTime, const FVector Pos, FName CharacterLabel) {
}

void URichEventCommandBase::SpawnEventCharaEffectFunction_Implementation(AKSCharacterBase* EventChara, int32 ID, const FName EffectLabel, float LifeTime, const FVector Pos) {
}

void URichEventCommandBase::SpawnCharaActionFunction_Implementation(AKSCharacterBase* EventChara, FName CharaLabelName, EKSCharacterDir SetDir, FName AddTagName, EKSCharacterAction ActionLabelName, EKSCharacterAnimationLoop LoopSetting) {
}

void URichEventCommandBase::SpawnCharaActionFootStepFunction_Implementation(AKSCharacterBase* EventChara, FName CharaLabelName, EKSCharacterDir SetDir, FName AddTagName, EKSCharacterAction ActionLabelName, EKSCharacterAnimationLoop LoopSetting, bool FootStep) {
}

void URichEventCommandBase::SpawnAtlantisPartyCharaFunction_Implementation(AKSCharacterBase* EventChara, EKSPartySet PartySetID, int32 PartyPosition, EKSCharacterDir SetDir, FName AddTagName, EKSCharacterAction ActionLabelName, EKSCharacterAnimationLoop LoopSetting) {
}

float URichEventCommandBase::SetUpFrameNumber(float Time) {
    return 0.0f;
}

void URichEventCommandBase::SetSubSequenceOptionFunction_Implementation(int32 Index, FName OptionName) {
}


void URichEventCommandBase::SetOpenCloseDoorFunction_Implementation(FName TargetBP, bool DoorOpen, bool IgnoreSE) {
}

void URichEventCommandBase::SetHouseModeTheaterFunction_Implementation(bool In, FName TargetBP, bool DoorOpen) {
}

void URichEventCommandBase::SetGravityModeFunction_Implementation(AKSCharacterBase* EventChara, bool Enable) {
}

void URichEventCommandBase::SetFlipbookPlayRateFunction_Implementation(AKSCharacterBase* EventChara, float Rate) {
}

void URichEventCommandBase::SetFlipbookPlayRateAllFunction_Implementation() {
}

void URichEventCommandBase::SetEnableFootStepSoundFunction_Implementation(bool Enable) {
}

void URichEventCommandBase::SetEnableCharacterFootStepFunction_Implementation(AKSCharacterBase* EventChara, bool Enable) {
}

void URichEventCommandBase::SetEnableActorBillboardFunction_Implementation(FName TargetTag, bool Enable) {
}

void URichEventCommandBase::SetBitFlagFunction_Implementation(int32 Index, bool Flag) {
}

void URichEventCommandBase::SequencerFrameJumpFunction_Implementation(int32 FrameNumber) {
}

void URichEventCommandBase::SequencerFrameBitFlagJumpFunction_Implementation(int32 FrameNumber, int32 FlagIndex) {
}

void URichEventCommandBase::RestartSubSequenceReditentFunction_Implementation(int32 nIndex) {
}

void URichEventCommandBase::RestartSubSequenceFunction_Implementation(int32 nIndex) {
}

void URichEventCommandBase::RestartMainSequencerFunction_Implementation() {
}

void URichEventCommandBase::ResetFlipbookPlayRateFunction_Implementation() {
}

bool URichEventCommandBase::RemoveEventEffectFunction_Implementation(int32 ID) {
    return false;
}

void URichEventCommandBase::PostEffectSepiaFunction_Implementation(UCameraComponent* TargetCamera, bool Enable) {
}

void URichEventCommandBase::PostEffectSepiaFadeFunction_Implementation(UCameraComponent* TargetCamera, bool Enable) {
}

void URichEventCommandBase::PostEffectMonochromeParamFunction_Implementation(UCameraComponent* TargetCamera, FVector Scale) {
}

void URichEventCommandBase::PostEffectMonochromeFunction_Implementation(UCameraComponent* TargetCamera, bool Enable) {
}

void URichEventCommandBase::PostEffectMonochromeFadeFunction_Implementation(UCameraComponent* TargetCamera, bool Enable) {
}

void URichEventCommandBase::PlayRichEventSeLabelFunction_Implementation(ESE_TYPE SELabel) {
}

void URichEventCommandBase::PlayRichEventPartnerSeFunction_Implementation(FName strSeLabel, EHUNTER_PARTNER_ID partnerID) {
}

void URichEventCommandBase::PlayFieldCommandDialogFunction_Implementation() {
}

void URichEventCommandBase::PlayEditorSound(USoundAtomCue* SoundData) {
}

void URichEventCommandBase::ParticipationOrderFrameJumpFunction_Implementation(FJumpFrameSet FrameSetData, int32 EndFrame) {
}

void URichEventCommandBase::OpenTutorialUIFunciton_Implementation(ETUTORIAL_TYPE TutorialType, bool Force) {
}

void URichEventCommandBase::OpenSelectDialogVariableTypeFunction_Implementation(FName TalkLabel, FName SelectTextLabel1, FName JumpLabelName1, FName SelectTextLabel2, FName JumpLabelName2, FName SelectTextLabel3, FName JumpLabelName3, FName SelectTextLabel4, FName JumpLabelName4) {
}

void URichEventCommandBase::OpenSelectDialogNextEventFunction_Implementation(FName TalkLabel, FName SelectTextLabel1, int32 SelectSubSeqIndex1, FName SelectTextLabel2, int32 SelectSubSeqIndex2) {
}

void URichEventCommandBase::OpenSelectDialogLabelJumpFunction_Implementation(FName TalkLabel, FName SelectTextLabel1, FName JumpLabelName1, FName SelectTextLabel2, FName JumpLabelName2) {
}

void URichEventCommandBase::OpenMapNotificationUIFunciton_Implementation(FName levelLabel) {
}

void URichEventCommandBase::OpenKenshiTutorialUIFunciton_Implementation() {
}

void URichEventCommandBase::OpenGetItemDialogFunction_Implementation(FName TalkLabel, FName ItemLabel_1, int32 ItemNum_1, FName ItemLabel_2, int32 ItemNum_2, FName ItemLabel_3, int32 ItemNum_3, FName ItemLabel_4, int32 ItemNum_4) {
}

void URichEventCommandBase::OpenEventGameOverUIFunciton_Implementation(FName JumpLabel) {
}

void URichEventCommandBase::OpenChoiceAnswerDialogFunction_Implementation(FName TalkLabel, FName SelectTextLabel1, FName JumpLabelName1, FName SelectTextLabel2, FName JumpLabelName2, int32 AnswerIndex) {
}

void URichEventCommandBase::NotificationEditorDrawText(const FString& RegionName, const FString& levelName) {
}

void URichEventCommandBase::NarrationWaitFunction_Implementation() {
}

void URichEventCommandBase::NarrationEditorDrawText(TArray<FString> NarrationText, const FString& AutoTime) {
}

void URichEventCommandBase::MoveSpotLightTargetFunction_Implementation(AActor* Actor, FVector AddOffset) {
}

void URichEventCommandBase::MoveSpotLightResidentFunction_Implementation(AActor* Actor, FVector AddOffset) {
}

void URichEventCommandBase::MessagePauseFunction_Implementation() {
}

void URichEventCommandBase::MapObjectVisibleParentFunction_Implementation(FName TagName, bool Enable) {
}

void URichEventCommandBase::MapObjectVisibleFunction_Implementation(FName TagName, bool Enable) {
}

void URichEventCommandBase::MapObjectRefreshFunction_Implementation() {
}

void URichEventCommandBase::LoadFlashbackDataFunciton_Implementation(FName ResourceName) {
}



void URichEventCommandBase::Initialize() {
}

int32 URichEventCommandBase::GetTrackNum(int32 Count) {
    return 0;
}

FName URichEventCommandBase::GetTrackName(UMovieSceneTrack* Track) {
    return NAME_None;
}

TArray<UMovieSceneTrack*> URichEventCommandBase::GetTrackData(int32 Count) {
    return TArray<UMovieSceneTrack*>();
}

FString URichEventCommandBase::GetTargetSequenceName(UMovieSceneSubSection* Section) {
    return TEXT("");
}

FString URichEventCommandBase::GetMovieSectionsName(int32 Count) {
    return TEXT("");
}

UMovieSceneSection* URichEventCommandBase::GetMovieSectionsData(int32 Count) {
    return NULL;
}

int32 URichEventCommandBase::GetMovieSectionsCount() {
    return 0;
}

FString URichEventCommandBase::GetMovieBindingName(int32 Count) {
    return TEXT("");
}

int32 URichEventCommandBase::GetMovieBindingCount() {
    return 0;
}

void URichEventCommandBase::FirstSelectCharaFrameJumpFunction_Implementation(FJumpFrameSet FrameSetData) {
}

void URichEventCommandBase::Finalize() {
}

void URichEventCommandBase::FadeOutTypeSelectFunction_Implementation(EEVENT_FADE_TYPE FadeType, const FLinearColor Color) {
}

void URichEventCommandBase::FadeInTypeSelectFunction_Implementation(EEVENT_FADE_TYPE FadeType, const FLinearColor Color) {
}

void URichEventCommandBase::EventFadeOutUIFunction_Implementation(float EndTime, const FLinearColor Color) {
}

void URichEventCommandBase::EventFadeInUIFunction_Implementation(float EndTime) {
}

void URichEventCommandBase::EndFlashbackFunciton_Implementation(float EndTime) {
}

void URichEventCommandBase::EndDeepThinkResidentFunction_Implementation(int32 SeqIndex) {
}

void URichEventCommandBase::EndDeepThinkFunction_Implementation(int32 nIndex) {
}

void URichEventCommandBase::EndDeepDirectingFunction_Implementation() {
}


void URichEventCommandBase::DeepDirectingStartEndAttachFunction_Implementation(AActor* Actor) {
}

void URichEventCommandBase::DeepDirectingAttachPlayerFunction_Implementation(bool Enable) {
}

void URichEventCommandBase::DeepDirectingAttachCameraFunction_Implementation(bool Enable) {
}

void URichEventCommandBase::DancerSongFrameJumpFunction_Implementation(int32 ChapterIndex, int32 Frame1, int32 Frame2, int32 Frame3) {
}

bool URichEventCommandBase::CheckTimeZoneEditor(ETimeZoneType Zone) {
    return false;
}

void URichEventCommandBase::CheckObjectTimeZoneFunction_Implementation(USceneComponent* ActorComponent, ETimeZoneType Zone) {
}

void URichEventCommandBase::ChangeTimeZoneFunction_Implementation(ETimeZoneType Zone) {
}

void URichEventCommandBase::ChangeActionCharaTagNameFunction_Implementation(FName TargetTag, EKSCharacterAction ActionLabelName, int32 frame, EKSCharacterAnimationLoop LoopSetting, EKSCharacterDir SetDir) {
}

void URichEventCommandBase::CallHideBattleWipeFunction_Implementation() {
}

void URichEventCommandBase::BalloonOpenSubSequenceFunction_Implementation(FName TalkTargetTag, EEventBalloonDir BalloonDir, FName TalkText, float AutoTalkWait, FVector2D Offset, bool StopSubSeq) {
}

void URichEventCommandBase::BalloonOpenPartnerFunction_Implementation(FName TalkTargetTag, EEventBalloonDir BalloonDir, FName TalkTextA, FName TalkTextB, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition, FVector2D Offset, bool WithoutTail) {
}

void URichEventCommandBase::BalloonOpenLabelPositionFunction_Implementation(FName TalkTargetTag, EEventBalloonDir BalloonDir, FName TalkText, float AutoTalkWait, FVector2D Offset, bool StopMainSeq, float PlaybackSubSeqPosition, bool WithoutTail) {
}

void URichEventCommandBase::BalloonOpenDeepThinkingFixedFunction_Implementation(EBALLOON_TEXT_POS BalloonPos, FName TalkText, float AutoTalkWait, bool IsCustomFadeTime, float FadeOutTime, bool StopMainSeq) {
}

void URichEventCommandBase::AttachCharacterChangeCollisionFunction_Implementation(AKSCharacterBase* EventChara, bool Enable) {
}

void URichEventCommandBase::AtlantisCharaFrameJumpFunction_Implementation(EKSPartySet PartySetID, int32 PartyPosition, FJumpFrameSet FrameSetData) {
}


