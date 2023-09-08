#include "EventCommandBase.h"

UEventCommandBase::UEventCommandBase() {
    this->m_pTargetMainSequencePlayer = NULL;
    this->m_bIsStopMainSequence = false;
    this->m_fPlaybackSubSeqPosition = 0.00f;
    this->m_fFadeTime = 1.00f;
    this->m_pTargetSubSequencePlayer = NULL;
    this->m_bIsStopSubSequence = false;
}

void UEventCommandBase::TitlePauseFunction_Implementation() {
}

void UEventCommandBase::SubSequencePlayIndexFunction_Implementation(int32 nNumLoops, float fSubSeqPlayPosition, int32 nIndex) {
}

void UEventCommandBase::SubSequencePlayFunction_Implementation(int32 nNumLoops, float fSubSeqPlayPosition) {
}

void UEventCommandBase::StopRichEventBgmFunction_Implementation(float fFadeOutTime) {
}

void UEventCommandBase::StopEmotionFunction_Implementation(FName TagName) {
}

void UEventCommandBase::StartPlayEmotionFunction_Implementation(FName TagName, EEMOTION_TYPE EmotionType, float LifeTime, FVector Offset) {
}

void UEventCommandBase::StartCameraSpawnFunction_Implementation(EKSCameraType CameraType, float fBlend) {
}

void UEventCommandBase::SpawnCharaFunction_Implementation(AKSCharacterBase* EventChara, FName CharaLabelName, EKSCharacterDir SetDir, FName AddTagName) {
}

void UEventCommandBase::ShowDebugInfoTextFunction_Implementation(const FString& Text, float Time) {
}

void UEventCommandBase::SetPlayerPositionFunction_Implementation(FVector Position, bool PlaySkip) {
}

void UEventCommandBase::SetLateFadeParam(ERICHEVENT_CMD Command, float EndTime, FLinearColor Color) {
}

void UEventCommandBase::SetHouseModeFunction_Implementation(bool In, FName TargetBP, bool DoorOpen) {
}

void UEventCommandBase::PlayRichEventSeFunction_Implementation(FName strSeLabel) {
}

void UEventCommandBase::PlayRichEventBgmMapFunction_Implementation(float fFadeOutTime, float fFadeInTime) {
}

void UEventCommandBase::PlayRichEventBgmFunction_Implementation(FName strBgmLabel, float fFadeOutTime, float fFadeInTime) {
}

void UEventCommandBase::PlayRichEventBgmBlockFunction_Implementation(int32 nBlockId) {
}

void UEventCommandBase::NarrationPlayFunction_Implementation(FName strNarrationLabel, bool StopMainSequence, float fPlaybackSubSeqPosition) {
}

void UEventCommandBase::InitSeqData() {
}

bool UEventCommandBase::GetAllInvokeMode() {
    return false;
}

void UEventCommandBase::FinishBattleWipe(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args) {
}

void UEventCommandBase::FadeOutFunction_Implementation(float EndTime, const FLinearColor Color) {
}

void UEventCommandBase::FadeInFunction_Implementation(float EndTime, const FLinearColor Color) {
}

void UEventCommandBase::End_Implementation() {
}

void UEventCommandBase::DetachCharacterFunction_Implementation(AKSCharacterBase* EventChara) {
}

bool UEventCommandBase::CheckActiveMessage() {
    return false;
}

void UEventCommandBase::ChangeVolumeEnvFunction_Implementation(float fVolume, float fFadeTime) {
}

bool UEventCommandBase::ChangeUpdateCommand(ERICHEVENT_CMD eType) {
    return false;
}

void UEventCommandBase::ChangeCameraFunction_Implementation(EKSCameraType CameraType, float fBlend) {
}

void UEventCommandBase::ChangeActionFunction_Implementation(AKSCharacterBase* EventChara, EKSCharacterAction ActionLabelName, int32 frame, EKSCharacterAnimationLoop LoopSetting, EKSCharacterDir SetDir) {
}

void UEventCommandBase::BalloonOpenLabelPlayerFunction_Implementation(EBalloonType BalloonType, EEventBalloonDir BalloonDir, FName TalkTargetName, FName TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition, bool WithoutTail) {
}

void UEventCommandBase::BalloonOpenLabelFunction_Implementation(FName TalkTargetTag, EBalloonType BalloonType, EEventBalloonDir BalloonDir, FName TalkTargetName, FName TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition, FVector2D Offset, bool WithoutTail) {
}

void UEventCommandBase::BalloonOpenFunction_Implementation(FName TalkTargetTag, EBalloonType BalloonType, EEventBalloonDir BalloonDir, FName TalkTargetName, const FString& TalkText, float AutoTalkWait, bool StopMainSeq, float PlaybackSubSeqPosition, FVector2D Offset, bool WithoutTail, FTalkVoice TalkVoiceData) {
}

void UEventCommandBase::AttachPlayerFunction_Implementation(AKSCharacterBase* EventChara, EKSCharacterDir SetDir, FName MemoryLabelName) {
}

void UEventCommandBase::AttachCharacterActionFunction_Implementation(AKSCharacterBase* EventChara, EKSCharacterAction ActionLabelName, int32 frame, EKSCharacterAnimationLoop LoopSetting, EKSCharacterDir SetDir) {
}


