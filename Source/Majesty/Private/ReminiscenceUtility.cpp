#include "ReminiscenceUtility.h"

UReminiscenceUtility::UReminiscenceUtility() {
}

bool UReminiscenceUtility::StartPrologueReminiscenceFromMainMenu(EPlayableCharacterID PlayerCharaId) {
    return false;
}

bool UReminiscenceUtility::StartPrologueReminiscenceFromBarMenu(EPlayableCharacterID PlayerCharaId) {
    return false;
}

bool UReminiscenceUtility::StartPrologueReminiscence(EPlayableCharacterID PlayerCharaId) {
    return false;
}

bool UReminiscenceUtility::StartPlayableReminiscenceByLabel(FName reminiscenceLabel) {
    return false;
}

bool UReminiscenceUtility::StartPlayableReminiscence(int32 reminiscenceId) {
    return false;
}

bool UReminiscenceUtility::SkipPrologueReminiscence(EPlayableCharacterID PlayerCharaId) {
    return false;
}

bool UReminiscenceUtility::SetupFirstEquipmentOnSkipReminiscence(int32 reminisceceId, TArray<FName>& addedItemLabels) {
    return false;
}

void UReminiscenceUtility::SetReturnLevelAfterReminiscence() {
}

void UReminiscenceUtility::SetPlayReminiscenceFromMainMenu(bool bFromMainMenu) {
}

void UReminiscenceUtility::SetPlayingReminiscence(bool bPlaying) {
}

void UReminiscenceUtility::SetCompletedPrologueReminiscence(EPlayableCharacterID PlayerCharaId, bool bCompleted) {
}

void UReminiscenceUtility::RestorePlayerPlacementForPartyChat(UObject* WorldContextObject, const FReminiscenceRestorePlacement& backupData) {
}

bool UReminiscenceUtility::RestorePartyOnPrologueReminiscence() {
    return false;
}

bool UReminiscenceUtility::RestorePartyOnPlayableReminiscence() {
    return false;
}

void UReminiscenceUtility::JoinPlayerCharacter(EPlayableCharacterID PlayerCharaId, bool& OutResult, bool& outIsAddMainMember) {
}

bool UReminiscenceUtility::IsPlayReminiscenceFromMainMenu() {
    return false;
}

bool UReminiscenceUtility::IsPlayingReminiscence() {
    return false;
}

bool UReminiscenceUtility::IsPlayingPrologueReminiscence() {
    return false;
}

bool UReminiscenceUtility::IsPlayingPastReminiscence() {
    return false;
}

bool UReminiscenceUtility::IsCompletedPrologueReminiscence(EPlayableCharacterID PlayerCharaId) {
    return false;
}

FPlayerLocation UReminiscenceUtility::GetReturnLevelAfterReminiscence() {
    return FPlayerLocation{};
}

bool UReminiscenceUtility::ExistsReturnLevelAfterReminiscence() {
    return false;
}

bool UReminiscenceUtility::EndPrologueReminiscence() {
    return false;
}

bool UReminiscenceUtility::EndPlayableReminiscence() {
    return false;
}

void UReminiscenceUtility::Debug_GetReminiscenceDebugInfo(FString& outDebugInfo) {
}

void UReminiscenceUtility::ClearReturnLevelAfterReminiscence() {
}

bool UReminiscenceUtility::BackupPlayerPlacementForTheater(UObject* WorldContextObject, FReminiscenceRestorePlacement& outBackupData) {
    return false;
}


