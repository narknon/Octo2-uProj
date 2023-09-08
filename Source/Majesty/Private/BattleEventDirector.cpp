#include "BattleEventDirector.h"

UBattleEventDirector::UBattleEventDirector() {
}

void UBattleEventDirector::WaitReturnCapture_Implementation() {
}

void UBattleEventDirector::StopBGM_Implementation(float FadeOutTime) {
}

void UBattleEventDirector::SetWhiteOutFlag_Implementation(bool bEnable) {
}

void UBattleEventDirector::SetEventFlag_Implementation(FName FlagName, bool Value) {
}

void UBattleEventDirector::SetBattleSequenceDirector(ABattleSequenceDirector* cSequenceDirector) {
}

void UBattleEventDirector::SetBattleEnemyVisibility_Implementation(bool bVisible) {
}

void UBattleEventDirector::SetAdvancedAbility_Implementation(EPlayableCharacterID CharacterID, int32 nIndex, bool bEnable) {
}

void UBattleEventDirector::ReturnCapture_Implementation() {
}

void UBattleEventDirector::RemoveBoostEffect_Implementation() {
}

void UBattleEventDirector::ReleasePotentialityAction_Implementation(EPlayableCharacterID CharacterID) {
}

void UBattleEventDirector::RandomJumpToFrame_Implementation(float Rate, int32 frame) {
}

void UBattleEventDirector::PlayVibration_Implementation(FName VibrationID, EVibrationPower Power) {
}

void UBattleEventDirector::PlaySE_Implementation(FName SEID) {
}

void UBattleEventDirector::PlayBGM_Implementation(FName BgmLabel, float FadeOutTime, float FadeInTime) {
}

void UBattleEventDirector::PlayAction_Implementation(ABattleCharacterBase* ActionCharacter, EKSCharacterAction BattleActionID) {
}

void UBattleEventDirector::OpenTutorial_Implementation(ETUTORIAL_TYPE TutorialType, bool bForcedDisplay) {
}

void UBattleEventDirector::OpenTalk_Implementation(FName TalkTextID, FVector2D Offset, bool WaitFinish) {
}

void UBattleEventDirector::OpenActionInfoFromAdvancedAbility_Implementation(FName TextID, EPlayableCharacterID CharaID, int32 nAbilityIndex) {
}

void UBattleEventDirector::OpenActionInfoForEightBattle_Implementation(FName TextID) {
}

void UBattleEventDirector::OpenActionInfo_Implementation(FName TextID) {
}

void UBattleEventDirector::JumpToFrame_Implementation(int32 frame) {
}

void UBattleEventDirector::InstantDeath_EnemyAll_Implementation() {
}

void UBattleEventDirector::FixBattleCamera_Implementation() {
}

void UBattleEventDirector::ExecPotentialityAction_Implementation(ABattleCharacterBase* ActionCharacter) {
}

void UBattleEventDirector::ExecExtendBGM_Implementation(int32 nIndex) {
}

void UBattleEventDirector::ExecBattleSuspend_Implementation() {
}

void UBattleEventDirector::ControlDisease_Implementation(ABattleCharacterBase* TargetCharacter, bool Remove, FName DiseaseName, int32 InvocationValue, int32 InvocationTurn) {
}

void UBattleEventDirector::CloseTalk_Implementation() {
}

void UBattleEventDirector::CloseActionInfo_Implementation() {
}

void UBattleEventDirector::ChangeCharacterName_Implementation(ABattleCharacterBase* TargetCharacter, FName CharacterNameID) {
}

void UBattleEventDirector::ChangeBoostLevel_Implementation(ABattleCharacterBase* ActionCharacter, int32 BoostLevel) {
}

void UBattleEventDirector::ChangeActionMode_Implementation(ABattleCharacterBase* ActionCharacter, bool bIsEnable, int32 nModeIndex, bool bUseTransition) {
}


