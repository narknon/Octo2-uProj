#include "KSCheatManager.h"

UKSCheatManager::UKSCheatManager() {
    this->m_pLoadCheatCommand = NULL;
}

void UKSCheatManager::TameAlwaysSuccess(bool bEnable) {
}

void UKSCheatManager::StartLastChapter(bool Enable) {
}

void UKSCheatManager::StartEpilogue(bool Enable) {
}

void UKSCheatManager::ShowGameMainSequenceLog(bool bEnable) {
}

void UKSCheatManager::ShowEventTextData(bool Enable, float TextSize) {
}

void UKSCheatManager::SetSystemDataVibrationEnable(bool bEnable) {
}

void UKSCheatManager::SetRandomParticipationOrder() {
}

void UKSCheatManager::SetMyShipCustom(int32 parts, int32 Type) {
}

void UKSCheatManager::SetHunterPartnerID(int32 partnerID) {
}

void UKSCheatManager::SetEventCounter(int32 Index, int32 Value) {
}

void UKSCheatManager::SetEnableWorldMapDebugDraw(bool IsEnable) {
}

void UKSCheatManager::SetEnableFlatEarthMode(bool IsEnable) {
}

void UKSCheatManager::SetDarkArea(bool IsEnable) {
}

void UKSCheatManager::SetBitFlagLabel(const FString& BitFlagLabel, bool Flag) {
}

void UKSCheatManager::SetAllAbility(int32 CharaID, bool IsLearn) {
}

void UKSCheatManager::SetAdvancedAbility(int32 CharaID, int32 AbilityIndex, bool IsLearn) {
}

void UKSCheatManager::ResumeNormalPartySet() {
}

void UKSCheatManager::ReleasePotentialityAction(int32 CharaID, bool AllChara) {
}

void UKSCheatManager::PlaySequenceEvent(const FString& SequenceName, const FString& SubSequenceName) {
}

void UKSCheatManager::PlayAbility(const FString& strAbilityLabel, int32 nBoostLevel, bool bPlayerSide) {
}

void UKSCheatManager::PartyNoKO(bool bEnable) {
}

void UKSCheatManager::PartyNoDamage(bool bEnable) {
}

void UKSCheatManager::PartyFullPower(bool bEnable) {
}

void UKSCheatManager::OpenFCViewer(bool bEnable) {
}

void UKSCheatManager::OnFinishSaveGame(const FString& SlotName, const int32 UserIndex, bool IsSuccesss) {
}

void UKSCheatManager::OnFinishLoadGame(const FString& SlotName, const int32 UserIndex, UMJSaveData* SaveGame) {
}

void UKSCheatManager::MJWipeColorChange(bool bEnable, uint8 R, uint8 G, uint8 B) {
}

void UKSCheatManager::MJTutorialAutoCapture(const FString& ResourceName) {
}

void UKSCheatManager::MJTimeZoneLock(bool bEnable) {
}

void UKSCheatManager::MJStartAutoPlay(const FString& Filename) {
}

void UKSCheatManager::MJSoundPlayVoice(FName VoiceLabel) {
}

void UKSCheatManager::MJSoundPlaySe(FName SELabel) {
}

void UKSCheatManager::MJSoundPlayBgm(FName BgmLabel, float FadeOutTime, float FadeInTime) {
}

void UKSCheatManager::MJSoundBlockIndex(int32 nBlockIndex) {
}

void UKSCheatManager::MJShowTextSizeInfo(bool Enable) {
}

void UKSCheatManager::MJShowStoryDebugInfo(bool bEnable) {
}

void UKSCheatManager::MJShowSoundListeningPoint(bool bDraw) {
}

void UKSCheatManager::MJShowSoundListenerPoint(bool bDraw) {
}

void UKSCheatManager::MJShowSoundAISACParam(bool bDraw) {
}

void UKSCheatManager::MJShowLevelManagerInfo(bool bShow) {
}

void UKSCheatManager::MJShowDebugInfoStoryMemory(bool bEnable) {
}

void UKSCheatManager::MJShowDebugInfoEvent(bool bEnable) {
}

void UKSCheatManager::MJShowDebugInfo(bool bEnable, int32 pageIndex) {
}

void UKSCheatManager::MJShowDebugGuildInfo(bool bEnable) {
}

void UKSCheatManager::MJShowDBManagerInfo(bool bShow) {
}

void UKSCheatManager::MJShowDarkAreaStatus() {
}

void UKSCheatManager::MJShowCharacterSocket(bool Enable) {
}

void UKSCheatManager::MJShowCharacterMoveMode(bool Enable) {
}

void UKSCheatManager::MJShowCharacterFootStep(bool Enable) {
}

void UKSCheatManager::MJShowAllTutorialList(bool bEnable) {
}

void UKSCheatManager::MJSetupAtlantisPartyRandom() {
}

void UKSCheatManager::MJSetTutorialViewFlag(bool bEnable) {
}

void UKSCheatManager::MJSettingEncountInfoFromEnemyGroup(FName EnemyGroupID) {
}

void UKSCheatManager::MJSetSubParty(int32 char1, int32 char2, int32 char3, int32 char4) {
}

void UKSCheatManager::MJSetSimpleActionLoad(bool Enable) {
}

void UKSCheatManager::MJSetShowLoadedCharacterResource(bool Enable) {
}

void UKSCheatManager::MJSetPartyResourceOnlyFlag(bool Enable) {
}

void UKSCheatManager::MJSetParty(int32 char1, int32 char2, int32 char3, int32 char4) {
}

void UKSCheatManager::MJSetMoney(int32 Money) {
}

void UKSCheatManager::MJSetMainStoryConfirmedFlag(int32 MainStoryId, bool Confirmed) {
}

void UKSCheatManager::MJSetIsOldWorldMapTexure(bool isOld) {
}

void UKSCheatManager::MJSetIsForceTrialMode(bool bEnable) {
}

void UKSCheatManager::MJSetIsForceSkipNoticeScreen(bool bEnable) {
}

void UKSCheatManager::MJSetIsDarkend(FName DarkAreaLabel, bool isDarkend) {
}

void UKSCheatManager::MJSetIsAllDarkend(bool isDarkend) {
}

void UKSCheatManager::MJSetIgnorePlaceNoReactionNPC(bool isIgnore) {
}

void UKSCheatManager::MJSetForceFastTravel(bool IsEnable) {
}

void UKSCheatManager::MJSetFixMoveMode(int32 fixMoveMode) {
}

void UKSCheatManager::MJSetFieldIgnoreBattleResourceLoad(bool Enable) {
}

void UKSCheatManager::MJSetExcludeSpecifiyMapVisited(bool IsVisited, FName levelLabel) {
}

void UKSCheatManager::MJSetEnableTitleMovieCurrentTime(bool Enable) {
}

void UKSCheatManager::MJSetEnableDebugAchievementNotification(bool bEnable) {
}

void UKSCheatManager::MJSetDebugTargetActorName(const FString& targetActorName) {
}

void UKSCheatManager::MJSetAutoBalloonTimer(float fAutoTimer) {
}

void UKSCheatManager::MJSetAllMapVisited(bool IsVisited) {
}

void UKSCheatManager::MJSEList(bool Enable) {
}

void UKSCheatManager::MJScreenshot(const FString& InFilename) {
}

void UKSCheatManager::MJSaveGameBySlotId(int32 ID) {
}

void UKSCheatManager::MJRequestBattleMap(FName battleMapName) {
}

void UKSCheatManager::MJReleaseAllStoryRecord(bool bEnable) {
}

void UKSCheatManager::MJRefreshFlagObject() {
}

void UKSCheatManager::MJPlacementRefresh() {
}

void UKSCheatManager::MJPlacementAllRemove() {
}

void UKSCheatManager::MJOutputAnimationPlayerLog(bool Enable) {
}

void UKSCheatManager::MJOutputAnimationOtherLog(bool Enable) {
}

void UKSCheatManager::MJOpenScreenCapture() {
}

void UKSCheatManager::MJOpenGuildMenu(FName guildLabel) {
}

void UKSCheatManager::MJMemReport(bool bFull) {
}

void UKSCheatManager::MJLoadGameBySlotId(int32 ID) {
}

void UKSCheatManager::MJInvisibleDebugCharacter(bool Enable) {
}

void UKSCheatManager::MJHideDebugTargetActor(bool hidden) {
}

void UKSCheatManager::MJForceBattleEnemyNameOpen(bool Enable) {
}

void UKSCheatManager::MJFallPrevention(bool bEnable) {
}

void UKSCheatManager::MJFadeColorChange(bool bEnable, uint8 R, uint8 G, uint8 B) {
}

void UKSCheatManager::MJEnemyWeaknessFullOpen() {
}

void UKSCheatManager::MJEndAtlantisParty() {
}

void UKSCheatManager::MJEnableSafetyBalloon(bool Enable) {
}

void UKSCheatManager::MJEmotionDisable(bool Enable) {
}

void UKSCheatManager::MJCloseScreenCapture() {
}

void UKSCheatManager::MJClearFadeForcibly() {
}

void UKSCheatManager::MJClearBattleMap() {
}

void UKSCheatManager::MJChangeTimeZone(int32 nType) {
}

void UKSCheatManager::MJChangeParty(int32 partyIdx) {
}

void UKSCheatManager::MJApplyOldKeyConfig(bool OldApply) {
}

void UKSCheatManager::MJAddAllItemToBackpack(int32 Num) {
}

void UKSCheatManager::KSShowUserWidgetState(bool Show) {
}

void UKSCheatManager::KSShowTimeLockTrigger(bool Enable) {
}

void UKSCheatManager::KSShowShopTrigger(bool Enable) {
}

void UKSCheatManager::KSShowLoadLogStartEnd(bool Enable) {
}

void UKSCheatManager::KSShowLoadFilename(bool Enable) {
}

void UKSCheatManager::KSShowLevelTrigger(bool Enable) {
}

void UKSCheatManager::KSShowLadderTrigger(bool Enable) {
}

void UKSCheatManager::KSShowInputMode(bool Enable) {
}

void UKSCheatManager::KSShowHouseInTrigger(bool Enable) {
}

void UKSCheatManager::KSShowEventTrigger(bool Enable) {
}

void UKSCheatManager::KSShowEndRollDebugInfo_Segment(bool Enable) {
}

void UKSCheatManager::KSShowEndRollDebugInfo_Credit(bool Enable) {
}

void UKSCheatManager::KSShowCollision(bool Enable) {
}

void UKSCheatManager::KSShowCharacterPos(bool Enable) {
}

void UKSCheatManager::KSShowCharacterMovePoint(bool Enable) {
}

void UKSCheatManager::KSShowCharacterMoveLocation(bool Enable) {
}

void UKSCheatManager::KSShowCharacterList() {
}

void UKSCheatManager::KSShowCharacterLaycast(int32 Type) {
}

void UKSCheatManager::KSShowCharacterDir(bool Enable) {
}

void UKSCheatManager::KSShowCharacterAction(bool Enable) {
}

void UKSCheatManager::KSShowCanoeDockTrigger(bool Enable) {
}

void UKSCheatManager::KSShowCameraLockTrigger(bool Enable) {
}

void UKSCheatManager::KSShowCameraLockTiggerInfo(bool Enable) {
}

void UKSCheatManager::KSSetUseCustomFlipbook(bool Enable) {
}

void UKSCheatManager::KSSetRunMode(int32 Mode) {
}

void UKSCheatManager::KSSetPlayerMoveSpeed(float AddSpeed) {
}

void UKSCheatManager::KSSetPlayerLocation(float X, float Y, float Z) {
}

void UKSCheatManager::KSSetCharacterFlag(int32 PlayerID, int32 Sequence, bool Enable) {
}

void UKSCheatManager::KSPlayEventTheater(const FString& EventName, int32 TimeZone) {
}

void UKSCheatManager::KSPlayEvent(const FString& EventName, int32 FrameNum) {
}

void UKSCheatManager::KSPlayBalloon(FName Label, int32 nType) {
}

void UKSCheatManager::KSPerformanceCheck(bool Enable) {
}

void UKSCheatManager::KSLevelTriggerCheck(bool Enable) {
}

void UKSCheatManager::KSLevelChangeList(bool Enable) {
}

void UKSCheatManager::KSLevelChange(FName levelName, uint8 triggerIndex) {
}

void UKSCheatManager::KSForceGarbageCollection() {
}

void UKSCheatManager::KSFlagEditor(bool Enable, bool Label) {
}

void UKSCheatManager::KSEventTriggerEnable(bool Enable) {
}

void UKSCheatManager::KSEventCameraMode(bool Enable) {
}

void UKSCheatManager::KSAllowLoadDisabledSaveData(bool Enable) {
}

void UKSCheatManager::KSAddItemToBackpack(FName ItemLabel, int32 Num) {
}

void UKSCheatManager::GetEventCounter(int32 Index) {
}

void UKSCheatManager::FullPotentialityAction() {
}

void UKSCheatManager::FixedRandomDamage(bool bEnable) {
}

void UKSCheatManager::FixedRandomAilment(bool bEnable) {
}

void UKSCheatManager::ExecCheatCommandFromSaved(const FString& FilePath) {
}

void UKSCheatManager::ExecCheatCommand(const FString& FilePath) {
}

void UKSCheatManager::EscapeAlwaysSuccess(bool bEnable) {
}

void UKSCheatManager::EnemyNoKO(bool bEnable) {
}

void UKSCheatManager::EnemyNoDamage(bool bEnable) {
}

void UKSCheatManager::EnemyFullPower(bool bEnable) {
}

void UKSCheatManager::EnableManualSequencerUpdate(bool bEnable) {
}

void UKSCheatManager::EnableBusinessSupport(bool bEnable) {
}

void UKSCheatManager::EnableBattleVictory(bool bEnable) {
}

void UKSCheatManager::EnableBattleDefeat(bool bEnable, bool bOnce) {
}

void UKSCheatManager::EnableAutoBattle(bool bEnable) {
}

void UKSCheatManager::EnableAllLearnAbilityOpen(bool bEnable) {
}

void UKSCheatManager::EnableAllInvadeMonsterOpen(bool bEnable) {
}

void UKSCheatManager::EnableAllAbilityOpen(bool bEnable) {
}

void UKSCheatManager::DeleteTameMonster(int32 InvadeID) {
}

void UKSCheatManager::ClearParticipationOrder() {
}

void UKSCheatManager::ChangeGameSpeed(float ChangeSpeed) {
}

void UKSCheatManager::ChangeBattleSpeed() {
}

void UKSCheatManager::AwakeningMonster(int32 Awake) {
}

void UKSCheatManager::AddEventCounter(int32 Index, int32 Value) {
}


