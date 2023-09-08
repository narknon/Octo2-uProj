#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "KSCheatManager.generated.h"

class ADebugLoadCheatCommand;
class UMJSaveData;

UCLASS(Blueprintable)
class MAJESTY_API UKSCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADebugLoadCheatCommand* m_pLoadCheatCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADebugLoadCheatCommand*> m_CheatCommandList;
    
public:
    UKSCheatManager();
private:
    UFUNCTION(BlueprintCallable, Exec)
    void TameAlwaysSuccess(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartLastChapter(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartEpilogue(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowGameMainSequenceLog(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowEventTextData(bool Enable, float TextSize);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSystemDataVibrationEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRandomParticipationOrder();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMyShipCustom(int32 parts, int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHunterPartnerID(int32 partnerID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEventCounter(int32 Index, int32 Value);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SetEnableWorldMapDebugDraw(bool IsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEnableFlatEarthMode(bool IsEnable);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void SetDarkArea(bool IsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBitFlagLabel(const FString& BitFlagLabel, bool Flag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllAbility(int32 CharaID, bool IsLearn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAdvancedAbility(int32 CharaID, int32 AbilityIndex, bool IsLearn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResumeNormalPartySet();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReleasePotentialityAction(int32 CharaID, bool AllChara);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlaySequenceEvent(const FString& SequenceName, const FString& SubSequenceName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayAbility(const FString& strAbilityLabel, int32 nBoostLevel, bool bPlayerSide);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PartyNoKO(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PartyNoDamage(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PartyFullPower(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void OpenFCViewer(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishSaveGame(const FString& SlotName, const int32 UserIndex, bool IsSuccesss);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishLoadGame(const FString& SlotName, const int32 UserIndex, UMJSaveData* SaveGame);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MJWipeColorChange(bool bEnable, uint8 R, uint8 G, uint8 B);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJTutorialAutoCapture(const FString& ResourceName);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void MJTimeZoneLock(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJStartAutoPlay(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSoundPlayVoice(FName VoiceLabel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSoundPlaySe(FName SELabel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSoundPlayBgm(FName BgmLabel, float FadeOutTime, float FadeInTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSoundBlockIndex(int32 nBlockIndex);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowTextSizeInfo(bool Enable);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowStoryDebugInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowSoundListeningPoint(bool bDraw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowSoundListenerPoint(bool bDraw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowSoundAISACParam(bool bDraw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowLevelManagerInfo(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowDebugInfoStoryMemory(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowDebugInfoEvent(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowDebugInfo(bool bEnable, int32 pageIndex);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowDebugGuildInfo(bool bEnable);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowDBManagerInfo(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowDarkAreaStatus();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowCharacterSocket(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowCharacterMoveMode(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowCharacterFootStep(bool Enable);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MJShowAllTutorialList(bool bEnable);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetupAtlantisPartyRandom();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetTutorialViewFlag(bool bEnable);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void MJSettingEncountInfoFromEnemyGroup(FName EnemyGroupID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetSubParty(int32 char1, int32 char2, int32 char3, int32 char4);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetSimpleActionLoad(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetShowLoadedCharacterResource(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetPartyResourceOnlyFlag(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetParty(int32 char1, int32 char2, int32 char3, int32 char4);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetMoney(int32 Money);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetMainStoryConfirmedFlag(int32 MainStoryId, bool Confirmed);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetIsOldWorldMapTexure(bool isOld);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetIsForceTrialMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetIsForceSkipNoticeScreen(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetIsDarkend(FName DarkAreaLabel, bool isDarkend);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetIsAllDarkend(bool isDarkend);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetIgnorePlaceNoReactionNPC(bool isIgnore);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetForceFastTravel(bool IsEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetFixMoveMode(int32 fixMoveMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetFieldIgnoreBattleResourceLoad(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetExcludeSpecifiyMapVisited(bool IsVisited, FName levelLabel);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetEnableTitleMovieCurrentTime(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetEnableDebugAchievementNotification(bool bEnable);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetDebugTargetActorName(const FString& targetActorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetAutoBalloonTimer(float fAutoTimer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSetAllMapVisited(bool IsVisited);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSEList(bool Enable);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MJScreenshot(const FString& InFilename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJSaveGameBySlotId(int32 ID);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void MJRequestBattleMap(FName battleMapName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJReleaseAllStoryRecord(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJRefreshFlagObject();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJPlacementRefresh();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJPlacementAllRemove();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJOutputAnimationPlayerLog(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJOutputAnimationOtherLog(bool Enable);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MJOpenScreenCapture();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJOpenGuildMenu(FName guildLabel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJMemReport(bool bFull);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJLoadGameBySlotId(int32 ID);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void MJInvisibleDebugCharacter(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJHideDebugTargetActor(bool hidden);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MJForceBattleEnemyNameOpen(bool Enable);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void MJFallPrevention(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MJFadeColorChange(bool bEnable, uint8 R, uint8 G, uint8 B);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void MJEnemyWeaknessFullOpen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJEndAtlantisParty();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MJEnableSafetyBalloon(bool Enable);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void MJEmotionDisable(bool Enable);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MJCloseScreenCapture();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJClearFadeForcibly();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void MJClearBattleMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJChangeTimeZone(int32 nType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJChangeParty(int32 partyIdx);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJApplyOldKeyConfig(bool OldApply);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MJAddAllItemToBackpack(int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowUserWidgetState(bool Show);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowTimeLockTrigger(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowShopTrigger(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowLoadLogStartEnd(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowLoadFilename(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowLevelTrigger(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowLadderTrigger(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowInputMode(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowHouseInTrigger(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowEventTrigger(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowEndRollDebugInfo_Segment(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowEndRollDebugInfo_Credit(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowCollision(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowCharacterPos(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowCharacterMovePoint(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowCharacterMoveLocation(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowCharacterList();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowCharacterLaycast(int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowCharacterDir(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowCharacterAction(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowCanoeDockTrigger(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowCameraLockTrigger(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSShowCameraLockTiggerInfo(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSSetUseCustomFlipbook(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSSetRunMode(int32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSSetPlayerMoveSpeed(float AddSpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSSetPlayerLocation(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSSetCharacterFlag(int32 PlayerID, int32 Sequence, bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSPlayEventTheater(const FString& EventName, int32 TimeZone);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSPlayEvent(const FString& EventName, int32 FrameNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSPlayBalloon(FName Label, int32 nType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSPerformanceCheck(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSLevelTriggerCheck(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSLevelChangeList(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSLevelChange(FName levelName, uint8 triggerIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSForceGarbageCollection();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSFlagEditor(bool Enable, bool Label);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSEventTriggerEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSEventCameraMode(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSAllowLoadDisabledSaveData(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KSAddItemToBackpack(FName ItemLabel, int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetEventCounter(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FullPotentialityAction();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FixedRandomDamage(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FixedRandomAilment(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecCheatCommandFromSaved(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecCheatCommand(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EscapeAlwaysSuccess(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnemyNoKO(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnemyNoDamage(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnemyFullPower(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableManualSequencerUpdate(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableBusinessSupport(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableBattleVictory(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableBattleDefeat(bool bEnable, bool bOnce);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableAutoBattle(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableAllLearnAbilityOpen(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableAllInvadeMonsterOpen(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableAllAbilityOpen(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DeleteTameMonster(int32 InvadeID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearParticipationOrder();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeGameSpeed(float ChangeSpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeBattleSpeed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AwakeningMonster(int32 Awake);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddEventCounter(int32 Index, int32 Value);
    
};

