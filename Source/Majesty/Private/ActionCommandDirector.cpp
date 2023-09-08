#include "ActionCommandDirector.h"

UActionCommandDirector::UActionCommandDirector() {
}

void UActionCommandDirector::WeaponChange_Implementation(EWEAPON_CATEGORY WeaponType) {
}

void UActionCommandDirector::WaitSummonAbility_Implementation() {
}

void UActionCommandDirector::WaitSessionSupporter_Implementation() {
}

void UActionCommandDirector::WaitSessionAbility_Implementation() {
}

void UActionCommandDirector::WaitEnemyAction_Implementation() {
}

void UActionCommandDirector::WaitCaptureMainParty_Implementation() {
}

void UActionCommandDirector::WaitCallSubParty_Implementation() {
}

void UActionCommandDirector::WaitBusinessSupporter_Implementation() {
}

void UActionCommandDirector::ShowInfomation_Implementation(FName TextID) {
}

void UActionCommandDirector::ShowBusinessSupportInfomation_Implementation() {
}

void UActionCommandDirector::SetMaterialParameter_Vector_Implementation(AEmitter* Emitter, FName ParameterName, FVector Value) {
}

void UActionCommandDirector::SetMaterialParameter_Float_Implementation(AEmitter* Emitter, FName ParameterName, float Value) {
}

void UActionCommandDirector::SetActionCommand(AActionCommandBase* cActionCommand) {
}

void UActionCommandDirector::ReturnSummonCharacter_Implementation() {
}

void UActionCommandDirector::ReturnSessionSupporter_Implementation() {
}

void UActionCommandDirector::ReturnBusinessSupporter_Implementation() {
}

void UActionCommandDirector::RegisterOnHitSE_Implementation(FName SEID) {
}

void UActionCommandDirector::RandomJumpToMarker_Implementation(float Rate, const FString& Marker) {
}

void UActionCommandDirector::RandomJumpToFrame_Implementation(float Rate, int32 frame) {
}

void UActionCommandDirector::PlayWeaponAttack_Implementation(ABattleCharacterBase* ActionCharacter) {
}

void UActionCommandDirector::PlayVoiceWithAbilityHit_Implementation(EBATTLE_VOICE_TYPE VoiceType, EPlayableCharacterID UniqueCharaID, EBATTLE_VOICE_TYPE UniqueVoiceType, bool OnHit) {
}

void UActionCommandDirector::PlayVoice_Implementation(EBATTLE_VOICE_TYPE VoiceType, EPlayableCharacterID UniqueCharaID, EBATTLE_VOICE_TYPE UniqueVoiceType) {
}

void UActionCommandDirector::PlayVibration_Implementation(FName VibrationID, EVibrationPower Power) {
}

void UActionCommandDirector::PlaySEWithAbilityHit_Implementation(FName SEID, bool OnHit) {
}

void UActionCommandDirector::PlaySessionAction_Implementation(EKSCharacterAction BattleActionID) {
}

void UActionCommandDirector::PlaySE_Implementation(FName SEID) {
}

void UActionCommandDirector::PlayBusinessSupportAction_Implementation(EKSCharacterAction BattleActionID) {
}

void UActionCommandDirector::PlayActionWithAbilityHit_Implementation(ABattleCharacterBase* ActionCharacter, EKSCharacterAction BattleActionID, EPlayableCharacterID UniqueCharaID, EKSCharacterAction UniqueActionID, bool OnHit) {
}

void UActionCommandDirector::PlayActionForSelfOnly_Implementation(ABattleCharacterBase* ActionCharacter, EKSCharacterAction BattleSelfActionID, EKSCharacterAction BattleOtherActionID, bool bExceptEnforcer) {
}

void UActionCommandDirector::PlayAction_Implementation(ABattleCharacterBase* ActionCharacter, EKSCharacterAction BattleActionID, EPlayableCharacterID UniqueCharaID, EKSCharacterAction UniqueActionID, bool bExceptEnforcer) {
}

void UActionCommandDirector::PlayAbilitySEWithAbilityHit_Implementation(int32 Index, bool OnHit) {
}

void UActionCommandDirector::PlayAbilitySE_Implementation(int32 Index) {
}

void UActionCommandDirector::JumpToMarker_Implementation(const FString& strMarker) {
}

void UActionCommandDirector::JumpToFrame_Implementation(int32 frame) {
}

void UActionCommandDirector::HideInfomation_Implementation() {
}

void UActionCommandDirector::ExecSummonCharacter_Implementation(int32 SummonIndex, bool Random) {
}

void UActionCommandDirector::ExecSummonAbility_Implementation(int32 SummonIndex) {
}

void UActionCommandDirector::ExecStepCounter_Implementation() {
}

void UActionCommandDirector::ExecStartCharacterWarp_Implementation(FVector cCommandOffset) {
}

void UActionCommandDirector::ExecSpecialAilment_Implementation() {
}

void UActionCommandDirector::ExecSessionAbility_Implementation() {
}

void UActionCommandDirector::ExecPlayDiseaseMissUI_Implementation() {
}

void UActionCommandDirector::ExecEndCharacterWarp_Implementation() {
}

void UActionCommandDirector::ExecCaptureMainParty_Implementation() {
}

void UActionCommandDirector::ExecCallSubParty_Implementation() {
}

void UActionCommandDirector::ExecAilmentWithAbilityHit_Implementation(int32 Index, bool AllAilment, bool LastHit, bool OnHit) {
}

void UActionCommandDirector::ExecAilment_Implementation(int32 Index, bool AllAilment, bool LastHit) {
}

void UActionCommandDirector::CheckPattern3JumpToMarker_Implementation(const FString& PatternB, const FString& PatternC) {
}

void UActionCommandDirector::CheckPattern3JumpToFrame_Implementation(int32 PatternB, int32 PatternC) {
}

void UActionCommandDirector::CheckPattern2JumpToMarker_Implementation(const FString& PatternB) {
}

void UActionCommandDirector::CheckPattern2JumpToFrame_Implementation(int32 PatternB) {
}

void UActionCommandDirector::CheckMultiPatternJumpToMarker_Implementation(TArray<FString> MarkerList) {
}

void UActionCommandDirector::CheckMultiPatternJumpToFrame_Implementation(TArray<int32> FrameList) {
}

bool UActionCommandDirector::CheckGPUEmitter(UParticleSystem* cTarget, int32 nIndex) {
    return false;
}

void UActionCommandDirector::CheckCounterJumpToMarker_Implementation(const FString& Marker) {
}

void UActionCommandDirector::CheckCounterJumpToFrame_Implementation(int32 frame) {
}

void UActionCommandDirector::CheckBoostLevelLessJumpToMarker_Implementation(int32 BorderLevel, bool ContainEqual, const FString& Marker) {
}

void UActionCommandDirector::CheckBoostLevelLessJumpToFrame_Implementation(int32 BorderLevel, bool ContainEqual, int32 frame) {
}

void UActionCommandDirector::CheckBoostLevelGreaterJumpToMarker_Implementation(int32 BoostLevel, bool ContainEqual, const FString& Marker) {
}

void UActionCommandDirector::CheckBoostLevelGreaterJumpToFrame_Implementation(int32 BoostLevel, bool ContainEqual, int32 frame) {
}

void UActionCommandDirector::CheckAbilityHitJumpToMarker_Implementation(bool OnHit, const FString& Marker) {
}

void UActionCommandDirector::CheckAbilityHitJumpToFrame_Implementation(bool OnHit, int32 frame) {
}

void UActionCommandDirector::CallSessionSupporter_Implementation() {
}

void UActionCommandDirector::CallBusinessSupporter_Implementation() {
}


