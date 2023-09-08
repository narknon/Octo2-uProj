#include "RichEventCommandObject.h"

URichEventCommandObject::URichEventCommandObject() {
    this->m_pTargetMainSequencePlayer = NULL;
    this->m_bIsStopMainSequence = false;
    this->m_fPlaybackSubSeqPosition = 0.00f;
    this->m_fFadeTime = 1.00f;
}

void URichEventCommandObject::TitlePauseFunction_Implementation() {
}

void URichEventCommandObject::SubSequencePlayIndexFunction_Implementation(int32 nNumLoops, float fSubSeqPlayPosition, int32 nIndex) {
}

void URichEventCommandObject::SubSequencePlayFunction_Implementation(int32 nNumLoops, float fSubSeqPlayPosition) {
}

void URichEventCommandObject::StopSubSequenceIndexFunction_Implementation(int32 nIndex) {
}

void URichEventCommandObject::StopSubSequenceFunction_Implementation() {
}

void URichEventCommandObject::StopSubSequenceAction_Implementation(ULevelSequencePlayer* Sequence) {
}

void URichEventCommandObject::StopRichEventBgmFunction_Implementation(float fFadeOutTime) {
}

void URichEventCommandObject::StopEmotionFunction_Implementation(FName TagName) {
}

void URichEventCommandObject::StartPlayEmotionFunction_Implementation(FName TagName, EEMOTION_TYPE EmotionType, float LifeTime, FVector Offset) {
}

void URichEventCommandObject::StartCameraSpawnFunction_Implementation(EKSCameraType CameraType, float fBlend) {
}

void URichEventCommandObject::StartBattleFunction_Implementation(const FString& EnemyGroup, const FString& FinishEvent, bool EventBattle) {
}

void URichEventCommandObject::SpawnCharaFunction_Implementation(AKSCharacterBase* EventChara, FName CharaLabelName, EKSCharacterDir SetDir, FName AddTagName) {
}

void URichEventCommandObject::ShowDebugInfoTextFunction_Implementation(const FString& Text, float Time) {
}

void URichEventCommandObject::SetSubSequenceOptionFunction_Implementation(int32 Index, FName OptionName) {
}

void URichEventCommandObject::SetPlayerPositionFunction_Implementation(FVector Position) {
}

void URichEventCommandObject::SetHouseModeFunction_Implementation(bool In, FName TargetBP, bool DoorOpen) {
}

void URichEventCommandObject::RestartSubSequenceFunction_Implementation(int32 nIndex) {
}

void URichEventCommandObject::PlayRichEventSeFunction_Implementation(FName strSeLabel) {
}

void URichEventCommandObject::PlayRichEventBgmMapFunction_Implementation(float fFadeOutTime, float fFadeInTime) {
}

void URichEventCommandObject::PlayRichEventBgmFunction_Implementation(FName strBgmLabel, float fFadeOutTime, float fFadeInTime) {
}

void URichEventCommandObject::PlayRichEventBgmBlockFunction_Implementation(int32 nBlockId) {
}

void URichEventCommandObject::NarrationPlayFunction_Implementation(FName strNarrationLabel, bool StopMainSequence, float fPlaybackSubSeqPosition) {
}

FName URichEventCommandObject::MoveSpotLightTargetFunction_Implementation(AActor* Actor, FVector AddOffset) {
    return NAME_None;
}

void URichEventCommandObject::InitSeqData() {
}

void URichEventCommandObject::FadeOutTypeSelectFunction_Implementation(EEVENT_FADE_TYPE FadeType, const FLinearColor Color) {
}

void URichEventCommandObject::FadeOutFunction_Implementation(float EndTime, const FLinearColor Color) {
}

void URichEventCommandObject::FadeInTypeSelectFunction_Implementation(EEVENT_FADE_TYPE FadeType, const FLinearColor Color) {
}

void URichEventCommandObject::FadeInFunction_Implementation(float EndTime, const FLinearColor Color) {
}

void URichEventCommandObject::End_Implementation() {
}

void URichEventCommandObject::DetachCharacterFunction_Implementation(AKSCharacterBase* EventChara) {
}

void URichEventCommandObject::ChangeVolumeEnvFunction_Implementation(float fVolume, float fFadeTime) {
}

bool URichEventCommandObject::ChangeUpdateCommand(ERICHEVENT_CMD eType) {
    return false;
}

void URichEventCommandObject::ChangeCameraFunction_Implementation(EKSCameraType CameraType, float fBlend) {
}

void URichEventCommandObject::ChangeActionFunction_Implementation(AKSCharacterBase* EventChara, EKSCharacterAction ActionLabelName, int32 frame, EKSCharacterAnimationLoop LoopSetting, EKSCharacterDir SetDir) {
}

void URichEventCommandObject::BalloonOpenLabelPlayerFunction_Implementation(EBalloonType BalloonType, EEventBalloonDir BalloonDir, FName TalkTargetName, FName TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition) {
}

void URichEventCommandObject::BalloonOpenLabelFunction_Implementation(FName TalkTargetTag, EBalloonType BalloonType, EEventBalloonDir BalloonDir, FName TalkTargetName, FName TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition) {
}

void URichEventCommandObject::BalloonOpenFunction_Implementation(FName TalkTargetTag, EBalloonType BalloonType, EEventBalloonDir BalloonDir, FName TalkTargetName, const FString& TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition) {
}

void URichEventCommandObject::AttachPlayerFunction_Implementation(AKSCharacterBase* EventChara, EKSCharacterDir SetDir) {
}

void URichEventCommandObject::AttachCharacterChangeCollisionFunction_Implementation(AKSCharacterBase* EventChara, bool Enable) {
}

void URichEventCommandObject::AttachCharacterActionFunction_Implementation(AKSCharacterBase* EventChara, EKSCharacterAction ActionLabelName, int32 frame, EKSCharacterAnimationLoop LoopSetting, EKSCharacterDir SetDir) {
}


