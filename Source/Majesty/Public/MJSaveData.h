#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SaveGame.h"
#include "AchievementSaveData.h"
#include "AcquisitionAbilityData.h"
#include "BattleReplayData.h"
#include "EKSCharacterMoveMode.h"
#include "EKSLanguage.h"
#include "EKSPartySet.h"
#include "EPlayableCharacterID.h"
#include "ETameMonsterMode.h"
#include "EquipLanternData.h"
#include "ItemAcquisitionHistory.h"
#include "MainStorySaveData.h"
#include "MainStoryTaskSaveData.h"
#include "MapData.h"
#include "MenuData.h"
#include "NpcEventData.h"
#include "PartyChatSaveData.h"
#include "PlayerBackpack.h"
#include "PlayerLocation.h"
#include "PlayerParty.h"
#include "ReminiscenceBufferAbility.h"
#include "ReminiscenceBufferDopingParam.h"
#include "ReminiscenceBufferEquipment.h"
#include "ReminiscenceBufferExp.h"
#include "ReminiscenceBufferFollowNpc.h"
#include "ReminiscenceBufferItem.h"
#include "ReminiscenceBufferJP.h"
#include "ReminiscenceBufferJob.h"
#include "ReminiscenceBufferLearnAbility.h"
#include "ReminiscenceBufferMoney.h"
#include "ReminiscenceBufferPOT.h"
#include "ReminiscenceBufferTameMonster.h"
#include "ReminiscenceBufferTimeZone.h"
#include "ReminiscenceRestorePlacement.h"
#include "RevivalObjectSaveData.h"
#include "SaveBackPackItem.h"
#include "SaveDataGuild.h"
#include "SaveDataSubTitle.h"
#include "SaveEnemyData.h"
#include "SaveFollowNpcData.h"
#include "SaveMissionData.h"
#include "SavePlayerCharacterData.h"
#include "SoldOutShopItemData.h"
#include "TameMonsterData.h"
#include "TimeZoneSaveData.h"
#include "TownData.h"
#include "MJSaveData.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UMJSaveData : public USaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BitFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> EventPlayedFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> EventValueParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> EventCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLocation PlayerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ladderUpPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ladderDownPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ladderMovePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeZoneSaveData TimeZoneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSLanguage Voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> PreparationKnown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTressaInParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalMoneyByTressa;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LearnAbilityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTameMonsterData> TameMonsterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTameMonsterData> LegendMonsterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HunterPartner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TameMonsterMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SubMissionOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPartyChatSaveData> PartyChatSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MapChangeHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelChangeCounterForFinalChapterHintPartyChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> FixedFieldBgmMainStoryTaskIdTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastBgmID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstSelectCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ParticipationOrderCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRadarMapVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> SupportAilmentSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ShowMapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> VisitedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> VisitedWorldMapMaskArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> VisitedWorldMapPrologueMaskArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> VisitedWorldMapIslandLayerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> EnableSwitchIndoorTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingReminiscenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReminiscenceCharaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSPartySet CurrentPartySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerParty PlayerParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BackupMainMemberId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BackupSubMemberId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerBackpack PlayerBackpack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemAcquisitionHistory ItemAcquitisionHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveFollowNpcData> FollowNpcSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveFollowNpcData> FollowWaitingNpcSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveFollowNpcData> BackupFollowNpcList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveFollowNpcData> BackupFollowWaitingNpcList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerParty PlayerParty_Set1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerParty PlayerParty_Set2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerParty PlayerParty_Set3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerParty PlayerParty_Set4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerParty PlayerParty_Set5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LastAtlantisPartySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReminiscenceBufferMoney BackupMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReminiscenceBufferItem BackupItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReminiscenceBufferEquipment BackupEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReminiscenceBufferJob BackupJob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReminiscenceBufferAbility BackupAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReminiscenceBufferExp BackupExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReminiscenceBufferJP BackupJP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReminiscenceBufferDopingParam BackupDopingParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReminiscenceBufferLearnAbility BackupLearnAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReminiscenceBufferFollowNpc BackupFollowNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReminiscenceBufferTameMonster BackupTameMonster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReminiscenceBufferTimeZone BackupTimeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReminiscenceBufferPOT BackupPOT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DifficultyPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BackupDifficultyPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BackupCurrentHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BackupCurrentSP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLocation ReminiPlayerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReminiCameraLockPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ReminiCameraLockLvTrigId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReminiscenceRestorePlacement ReminiRestoreData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavePlayerCharacterData> PlayerMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleReplayData> Endroll_BattleReplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Endroll_ClearedMS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BattleHelpWindowOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentEncountTriggerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleSpeedStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FTownData> TownData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuData MenuData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSaveEnemyData> EnemyInfoData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraLockPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GamePlaySecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 equipEncountRevision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveMissionData> SubMissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMapData> MapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRevivalObjectSaveData> RevivalObjectSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterMoveMode MoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipLanternData EquipLanternData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FNpcEventData> NPCEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSoldOutShopItemData> SoldOutShopItemDataList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int8> NPCSpawnStartDelayCountList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int8> NPCSpawnEndDelayCountList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int8> NPCTZCangeSwoonRevivalCountList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CameraLockCurrentLevelTriggerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraLockCurrentLevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMainStorySaveData> MainStoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMainStoryTaskSaveData> MainStoryTaskData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoInterruptMainStory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoInterruptMainStory_Prologue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExtraStoryProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAchievementSaveData AchievementSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveDataGuild> GuildData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveDataSubTitle> SubTitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MyShipCustom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MyShipCustomFirstChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelDarkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LostWayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> HolyTorchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TutorialCanDisplayFlag;
    
public:
    UMJSaveData();
    UFUNCTION(BlueprintCallable)
    void ToggleBitFlag(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetVoice(EKSLanguage eLang);
    
    UFUNCTION(BlueprintCallable)
    void SetVisitedMap(bool SetBit, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetupOnStartReminiscence();
    
    UFUNCTION(BlueprintCallable)
    bool SetupFixedParty(const TArray<EPlayableCharacterID>& fixedCharaList);
    
    UFUNCTION(BlueprintCallable)
    void SetupBackpackAndMoneyToInitial(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable)
    bool SetupBackpackAndEquipmentForReminiscence(int32 reminisceceId);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeZoneData(const FTimeZoneSaveData& NewTimeZoneData);
    
    UFUNCTION(BlueprintCallable)
    void SetTameMonsterMode(ETameMonsterMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetTameMonsterList(TArray<FTameMonsterData> NewTameMonsterList);
    
    UFUNCTION(BlueprintCallable)
    void SetSubMissionRecordStartSelect(int32 StartSelect);
    
    UFUNCTION(BlueprintCallable)
    void SetShowMapIcon(bool SetBit, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetSaveEnemyData(int32 EnemyID, const FSaveEnemyData& SaveEnemyData);
    
    UFUNCTION(BlueprintCallable)
    void SetReminiscenceCharacterId(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void SetRecentCameraLockLevelTrigger(int32 levelId, uint8 LevelTriggerID);
    
    UFUNCTION(BlueprintCallable)
    void SetRadarMapVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayingReminiscenceId(int32 reminiscenceId);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerLocationBeforeReminiscence(const FPlayerLocation& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerLocation(const FPlayerLocation& NewPlayerLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetPartySupportAilmentSwitch(TArray<bool> SwitchList);
    
    UFUNCTION(BlueprintCallable)
    void SetParticipationOrderCharacterID(TArray<int32> IDList);
    
    UFUNCTION(BlueprintCallable)
    void SetNPCEventList(TMap<int32, FNpcEventData> NewNPCEventList);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveMode(EKSCharacterMoveMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetMapChangeHistory(int32 MapID);
    
    UFUNCTION(BlueprintCallable)
    int32 SetMainProgressPoint(int32 SetPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetMainMissionRecordStartSelect(int32 StartSelect);
    
    UFUNCTION(BlueprintCallable)
    void SetLegendMonsterList(TArray<FTameMonsterData> NewLegendMonsterList);
    
    UFUNCTION(BlueprintCallable)
    void SetLearnAbility(int32 Index, int32 AbilitySetID);
    
    UFUNCTION(BlueprintCallable)
    void SetLastBgmId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetLadderPosition(const FVector& NewLadderUpPos, const FVector& NewLadderDownPos, const FVector& NewLadderMovePos);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePlaySecond(int32 Second);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraMissionRecordStartSelect(int32 StartSelect);
    
    UFUNCTION(BlueprintCallable)
    void SetEventValueParam(int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEventtPlayedFlag(int32 Index, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    int32 SetEventCounter(int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEquipLanternData(FEquipLanternData Equip);
    
    UFUNCTION(BlueprintCallable)
    void SetEquipEncountRevision(int32 NewEquipEncountRevision);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSwitchIndoorTriggerList(TArray<int32> list);
    
    UFUNCTION(BlueprintCallable)
    int32 SetDifficultyPoint(int32 SetPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPartySet(EKSPartySet partySet);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentEncountTriggerID(int32 TriggerID);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraLockPos(const FVector& Pos);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraLockBeforeReminiscence(const FVector& NewCameraLockPos, uint8 TriggerID);
    
    UFUNCTION(BlueprintCallable)
    void SetBitFlagRange(int32 inStart, int32 inEnd, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetBitFlagArray(const TArray<int32>& IndexArray, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetBitFlag(int32 Index, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSpeedStep(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleHelpWindowOpen(bool Open);
    
    UFUNCTION(BlueprintCallable)
    bool ResumePartySetAfterAtlantis();
    
    UFUNCTION(BlueprintCallable)
    void RestoreOriginalData();
    
    UFUNCTION(BlueprintCallable)
    void RestoreDifficultyPoint();
    
    UFUNCTION(BlueprintCallable)
    bool ResetPartySetToSet1();
    
    UFUNCTION(BlueprintCallable)
    bool PreparePartySetBeforeAtlantis();
    
    UFUNCTION(BlueprintCallable)
    void MergeReminiscenceData();
    
    UFUNCTION(BlueprintCallable)
    void MergeDifficultyPoint();
    
    UFUNCTION(BlueprintCallable)
    void JoinPlayerCharacterToParty(EPlayableCharacterID CharacterID, bool& OutResult, bool& outIsAddMainMember);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRadarVisible();
    
    UFUNCTION(BlueprintCallable)
    void InitTownConnectionValue();
    
    UFUNCTION(BlueprintCallable)
    void InitTimezone();
    
    UFUNCTION(BlueprintCallable)
    void InitPlayerParty(TArray<int32> mainMember, TArray<int32> subMember);
    
    UFUNCTION(BlueprintCallable)
    void InitPlayerMembers();
    
    UFUNCTION(BlueprintCallable)
    void InitNewGameData();
    
    UFUNCTION(BlueprintCallable)
    void InitFollowNPC();
    
    UFUNCTION(BlueprintCallable)
    void InitEndroll();
    
    UFUNCTION(BlueprintCallable)
    void InitBackpackAndMoneyBuffer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSLanguage GetVoice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVisitedMap(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimeZoneSaveData GetTimeZoneData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETameMonsterMode GetTameMonsterMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTameMonsterData> GetTameMonsterList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSaveDataSubTitle> GetSubTitleData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubMissionRecordStartSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<int32, FSoldOutShopItemData> GetSoldOutShopitemDataList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowMapIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSaveEnemyData GetSaveEnemyData(int32 EnemyID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRevivalObjectSaveData> GetRevivalObjectSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReminiscenceCharacterId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetRecentCameraLockLevelTriggerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRecentCameraLockLevelID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayingReminiscenceId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerParty GetPlayerPartySet(EKSPartySet partySet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerParty GetPlayerParty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSavePlayerCharacterData> GetPlayerMember();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerLocation GetPlayerLocationBeforeReminiscence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerLocation GetPlayerLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSaveBackPackItem> GetPlayerBackpackItemList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<bool> GetPartySupportAilmentSwitch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetParticipationOrderCharacterID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<int32, FNpcEventData> GetNPCEventList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSCharacterMoveMode GetMoveMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetMapChangeHistory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<int32, FMainStoryTaskSaveData> GetMainStoryTaskSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMainStorySaveData> GetMainStory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMainProgressPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMainMissionRecordStartSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevelChangeCounterForFinalChapterHintPartyChat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTameMonsterData> GetLegendMonsterList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetLearnAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastPlayedBgmID();
    
    UFUNCTION(BlueprintCallable)
    void GetLadderPosition(FVector& outLadderUpPos, FVector& outLadderDownPos, FVector& outLadderMovePos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSaveDataGuild> GetGuildData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGamePlaySecond();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFirstSelectCharacterID(int32& FirstSelectCharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetExtraStoryProgressBuffer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExtraMissionRecordStartSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEventValueParam(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEventtPlayedFlag(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetEventPlayedFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEventCounter(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEquipLanternData GetEquipLanternData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquipEncountRevision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetEnableSwitchIndoorTriggerListRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetEnableSwitchIndoorTriggerList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDifficultyPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSPartySet GetCurrentPartySet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentEncountTriggerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraLockPosBeforeReminiscence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraLockPos();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetCameraLockLvTriggerIdBeforeReminiscence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBitFlag(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetBit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleSpeedStep();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBattleHelpWindowOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<int32, FTownData> GetAllTownData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<int32, FMapData> GetAllMapData();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteTameMonsterList(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FAcquisitionAbilityData CreateAcquitisionAdvancedAbilityData(int32 ArraySize);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FAcquisitionAbilityData> CreateAcquitisionAbilityData(int32 ArraySize);
    
    UFUNCTION(BlueprintCallable)
    void CopyPartySetDataOtherThanMember(EKSPartySet PartySetID);
    
    UFUNCTION(BlueprintCallable)
    void ClearReminiscenceCharacterId();
    
    UFUNCTION(BlueprintCallable)
    void ClearRecentCameraLockLevelTrigger();
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayingReminiscenceId();
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayerLocationBeforeReminiscence();
    
    UFUNCTION(BlueprintCallable)
    void ClearCameraLockBeforeReminiscence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLearnAbilityFull(int32& outEmptyIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangePartySet(EKSPartySet partySet);
    
    UFUNCTION(BlueprintCallable)
    void BackupDataBeforeReminiscence();
    
    UFUNCTION(BlueprintCallable)
    void BackupAndResetDifficultyPoint();
    
    UFUNCTION(BlueprintCallable)
    int32 AddMainProgressPoint(int32 AddPoint);
    
    UFUNCTION(BlueprintCallable)
    int32 AddEventValueParam(int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    int32 AddEventCounter(int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    int32 AddDifficultyPoint(int32 AddPoint);
    
};

