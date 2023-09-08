#include "KSGameMode.h"

AKSGameMode::AKSGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoadingWidget = NULL;
    this->AutoSavingWidget = NULL;
}

void AKSGameMode::SetTheaterEndMainMenu(bool IsEnable) {
}

void AKSGameMode::SetPaused(EPauseType pauseType, bool NewIsPaused) {
}

void AKSGameMode::SetHouseEnterActor(AActor* HouseEnter) {
}

void AKSGameMode::SetHouseCharacterScale(float inScale) {
}

void AKSGameMode::SetDirectLoadGame(bool bDirectLoadGame) {
}

void AKSGameMode::SetDebugMessage(const FString& Message) {
}

void AKSGameMode::SetDebugInfoVisibility(bool bVisible, int32 pageIndex) {
}

void AKSGameMode::SetDebugInfoStoryMemoryVisibility(bool bVisible) {
}

void AKSGameMode::SetDebugInfoEventVisibility(bool bVisible) {
}

void AKSGameMode::SetBrightnessOffset_ForSwitch(float Val) {
}

void AKSGameMode::SetAutoSaveEnable(bool inEnable) {
}

FString AKSGameMode::ParseStoryMemoryData(FEventListData EventData, int32 memoryIndex) {
    return TEXT("");
}

void AKSGameMode::KSToggleEncount() {
}

void AKSGameMode::KSShowMultilingualGuide(bool Flag) {
}

void AKSGameMode::KSSetEncount(bool Encount) {
}

void AKSGameMode::KSSetBitFlag(int32 BitIndex, bool Flag) {
}

void AKSGameMode::KSDrawBitFlag(int32 StartIndex, int32 Num) {
}

bool AKSGameMode::IsPaused() const {
    return false;
}

bool AKSGameMode::GetTheaterEndMainMenu() {
    return false;
}

EPauseType AKSGameMode::GetPauseFlags() const {
    return EPauseType::PT_NONE;
}

bool AKSGameMode::GetPaused(EPauseType pauseType) const {
    return false;
}

AActor* AKSGameMode::GetHouseEnterActor() {
    return NULL;
}

float AKSGameMode::GetHouseCharacterScale() {
    return 0.0f;
}

bool AKSGameMode::GetDirectLoadGame() {
    return false;
}

float AKSGameMode::GetBrightnessOffset_ForSwitch() {
    return 0.0f;
}

bool AKSGameMode::GetAutoSaveEnable() const {
    return false;
}

void AKSGameMode::Debug_SetInfoText(EGameModeDebugPage page, const FString& Text) {
}

void AKSGameMode::Debug_SetFixMoveMode(EDebugFixMoveMode fixMoveMode) {
}

void AKSGameMode::Debug_SetCompletedGamePreparation(bool bCompleted) {
}

void AKSGameMode::Debug_SetAutoPlaying(bool bAutoPlay) {
}


bool AKSGameMode::Debug_IsCompletedGamePreparation() {
    return false;
}

bool AKSGameMode::Debug_IsAutoPlaying() {
    return false;
}


EDebugFixMoveMode AKSGameMode::Debug_GetFixMoveMode() {
    return EDebugFixMoveMode::NONE;
}

void AKSGameMode::Debug_GetEventText(FString& Text) {
}

bool AKSGameMode::Debug_GetAutoPlayingArgument(FString& outScenarioName) {
    return false;
}

bool AKSGameMode::CanLoadDisabledSaveData() {
    return false;
}


