#include "MJSaveData.h"

UMJSaveData::UMJSaveData() {
    this->Voice = EKSLanguage::eJA;
    this->IsTressaInParty = false;
    this->TotalMoneyByTressa = 0;
    this->HunterPartner = 0;
    this->TameMonsterMode = 1;
    this->LevelChangeCounterForFinalChapterHintPartyChat = 0;
    this->LastBgmID = 0;
    this->FirstSelectCharacterID = 0;
    this->IsRadarMapVisible = false;
    this->PlayingReminiscenceId = 0;
    this->ReminiscenceCharaId = 0;
    this->CurrentPartySet = EKSPartySet::Set1;
    this->DifficultyPoint = 0;
    this->BackupDifficultyPoint = 0;
    this->ReminiCameraLockLvTrigId = 0;
    this->BattleHelpWindowOpen = false;
    this->CurrentEncountTriggerID = 0;
    this->BattleSpeedStep = 0;
    this->GamePlaySecond = 0;
    this->equipEncountRevision = 0;
    this->MoveMode = EKSCharacterMoveMode::WALK;
    this->CameraLockCurrentLevelTriggerID = 0;
    this->CameraLockCurrentLevelID = 0;
    this->AutoInterruptMainStory = 0;
    this->AutoInterruptMainStory_Prologue = 0;
    this->LevelDarkState = 0;
    this->LostWayCount = 0;
    this->TutorialCanDisplayFlag = 0;
}

void UMJSaveData::ToggleBitFlag(int32 Index) {
}

void UMJSaveData::SetVoice(EKSLanguage eLang) {
}

void UMJSaveData::SetVisitedMap(bool SetBit, int32 Index) {
}

void UMJSaveData::SetupOnStartReminiscence() {
}

bool UMJSaveData::SetupFixedParty(const TArray<EPlayableCharacterID>& fixedCharaList) {
    return false;
}

void UMJSaveData::SetupBackpackAndMoneyToInitial(int32 CharacterID) {
}

bool UMJSaveData::SetupBackpackAndEquipmentForReminiscence(int32 reminisceceId) {
    return false;
}

void UMJSaveData::SetTimeZoneData(const FTimeZoneSaveData& NewTimeZoneData) {
}

void UMJSaveData::SetTameMonsterMode(ETameMonsterMode Mode) {
}

void UMJSaveData::SetTameMonsterList(TArray<FTameMonsterData> NewTameMonsterList) {
}

void UMJSaveData::SetSubMissionRecordStartSelect(int32 StartSelect) {
}

void UMJSaveData::SetShowMapIcon(bool SetBit, int32 Index) {
}

void UMJSaveData::SetSaveEnemyData(int32 EnemyID, const FSaveEnemyData& SaveEnemyData) {
}

void UMJSaveData::SetReminiscenceCharacterId(int32 CharacterID) {
}

void UMJSaveData::SetRecentCameraLockLevelTrigger(int32 levelId, uint8 LevelTriggerID) {
}

void UMJSaveData::SetRadarMapVisible(bool bVisible) {
}

void UMJSaveData::SetPlayingReminiscenceId(int32 reminiscenceId) {
}

void UMJSaveData::SetPlayerLocationBeforeReminiscence(const FPlayerLocation& Location) {
}

void UMJSaveData::SetPlayerLocation(const FPlayerLocation& NewPlayerLocation) {
}

void UMJSaveData::SetPartySupportAilmentSwitch(TArray<bool> SwitchList) {
}

void UMJSaveData::SetParticipationOrderCharacterID(TArray<int32> IDList) {
}

void UMJSaveData::SetNPCEventList(TMap<int32, FNpcEventData> NewNPCEventList) {
}

void UMJSaveData::SetMoveMode(EKSCharacterMoveMode Mode) {
}

void UMJSaveData::SetMapChangeHistory(int32 MapID) {
}

int32 UMJSaveData::SetMainProgressPoint(int32 SetPoint) {
    return 0;
}

void UMJSaveData::SetMainMissionRecordStartSelect(int32 StartSelect) {
}

void UMJSaveData::SetLegendMonsterList(TArray<FTameMonsterData> NewLegendMonsterList) {
}

void UMJSaveData::SetLearnAbility(int32 Index, int32 AbilitySetID) {
}

void UMJSaveData::SetLastBgmId(int32 ID) {
}

void UMJSaveData::SetLadderPosition(const FVector& NewLadderUpPos, const FVector& NewLadderDownPos, const FVector& NewLadderMovePos) {
}

void UMJSaveData::SetGamePlaySecond(int32 Second) {
}

void UMJSaveData::SetExtraMissionRecordStartSelect(int32 StartSelect) {
}

void UMJSaveData::SetEventValueParam(int32 Index, int32 Value) {
}

void UMJSaveData::SetEventtPlayedFlag(int32 Index, bool Flag) {
}

int32 UMJSaveData::SetEventCounter(int32 Index, int32 Value) {
    return 0;
}

void UMJSaveData::SetEquipLanternData(FEquipLanternData Equip) {
}

void UMJSaveData::SetEquipEncountRevision(int32 NewEquipEncountRevision) {
}

void UMJSaveData::SetEnableSwitchIndoorTriggerList(TArray<int32> list) {
}

int32 UMJSaveData::SetDifficultyPoint(int32 SetPoint) {
    return 0;
}

void UMJSaveData::SetCurrentPartySet(EKSPartySet partySet) {
}

void UMJSaveData::SetCurrentEncountTriggerID(int32 TriggerID) {
}

void UMJSaveData::SetCameraLockPos(const FVector& Pos) {
}

void UMJSaveData::SetCameraLockBeforeReminiscence(const FVector& NewCameraLockPos, uint8 TriggerID) {
}

void UMJSaveData::SetBitFlagRange(int32 inStart, int32 inEnd, bool Flag) {
}

void UMJSaveData::SetBitFlagArray(const TArray<int32>& IndexArray, bool Flag) {
}

void UMJSaveData::SetBitFlag(int32 Index, bool Flag) {
}

void UMJSaveData::SetBattleSpeedStep(int32 Value) {
}

void UMJSaveData::SetBattleHelpWindowOpen(bool Open) {
}

bool UMJSaveData::ResumePartySetAfterAtlantis() {
    return false;
}

void UMJSaveData::RestoreOriginalData() {
}

void UMJSaveData::RestoreDifficultyPoint() {
}

bool UMJSaveData::ResetPartySetToSet1() {
    return false;
}

bool UMJSaveData::PreparePartySetBeforeAtlantis() {
    return false;
}

void UMJSaveData::MergeReminiscenceData() {
}

void UMJSaveData::MergeDifficultyPoint() {
}

void UMJSaveData::JoinPlayerCharacterToParty(EPlayableCharacterID CharacterID, bool& OutResult, bool& outIsAddMainMember) {
}

bool UMJSaveData::IsRadarVisible() {
    return false;
}

void UMJSaveData::InitTownConnectionValue() {
}

void UMJSaveData::InitTimezone() {
}

void UMJSaveData::InitPlayerParty(TArray<int32> mainMember, TArray<int32> subMember) {
}

void UMJSaveData::InitPlayerMembers() {
}

void UMJSaveData::InitNewGameData() {
}

void UMJSaveData::InitFollowNPC() {
}

void UMJSaveData::InitEndroll() {
}

void UMJSaveData::InitBackpackAndMoneyBuffer() {
}

EKSLanguage UMJSaveData::GetVoice() const {
    return EKSLanguage::eJA;
}

bool UMJSaveData::GetVisitedMap(int32 Index) {
    return false;
}

FTimeZoneSaveData UMJSaveData::GetTimeZoneData() const {
    return FTimeZoneSaveData{};
}

ETameMonsterMode UMJSaveData::GetTameMonsterMode() {
    return ETameMonsterMode::Manual;
}

TArray<FTameMonsterData> UMJSaveData::GetTameMonsterList() {
    return TArray<FTameMonsterData>();
}

TArray<FSaveDataSubTitle> UMJSaveData::GetSubTitleData() {
    return TArray<FSaveDataSubTitle>();
}

int32 UMJSaveData::GetSubMissionRecordStartSelect() {
    return 0;
}

TMap<int32, FSoldOutShopItemData> UMJSaveData::GetSoldOutShopitemDataList() {
    return TMap<int32, FSoldOutShopItemData>();
}

bool UMJSaveData::GetShowMapIcon(int32 Index) {
    return false;
}

FSaveEnemyData UMJSaveData::GetSaveEnemyData(int32 EnemyID) {
    return FSaveEnemyData{};
}

TArray<FRevivalObjectSaveData> UMJSaveData::GetRevivalObjectSaveData() {
    return TArray<FRevivalObjectSaveData>();
}

int32 UMJSaveData::GetReminiscenceCharacterId() {
    return 0;
}

uint8 UMJSaveData::GetRecentCameraLockLevelTriggerID() {
    return 0;
}

int32 UMJSaveData::GetRecentCameraLockLevelID() {
    return 0;
}

int32 UMJSaveData::GetPlayingReminiscenceId() {
    return 0;
}

FPlayerParty UMJSaveData::GetPlayerPartySet(EKSPartySet partySet) {
    return FPlayerParty{};
}

FPlayerParty UMJSaveData::GetPlayerParty() {
    return FPlayerParty{};
}

TArray<FSavePlayerCharacterData> UMJSaveData::GetPlayerMember() {
    return TArray<FSavePlayerCharacterData>();
}

FPlayerLocation UMJSaveData::GetPlayerLocationBeforeReminiscence() const {
    return FPlayerLocation{};
}

FPlayerLocation UMJSaveData::GetPlayerLocation() const {
    return FPlayerLocation{};
}

TArray<FSaveBackPackItem> UMJSaveData::GetPlayerBackpackItemList() {
    return TArray<FSaveBackPackItem>();
}

TArray<bool> UMJSaveData::GetPartySupportAilmentSwitch() {
    return TArray<bool>();
}

TArray<int32> UMJSaveData::GetParticipationOrderCharacterID() {
    return TArray<int32>();
}

TMap<int32, FNpcEventData> UMJSaveData::GetNPCEventList() {
    return TMap<int32, FNpcEventData>();
}

EKSCharacterMoveMode UMJSaveData::GetMoveMode() {
    return EKSCharacterMoveMode::WALK;
}

TArray<int32> UMJSaveData::GetMapChangeHistory() {
    return TArray<int32>();
}

TMap<int32, FMainStoryTaskSaveData> UMJSaveData::GetMainStoryTaskSaveData() {
    return TMap<int32, FMainStoryTaskSaveData>();
}

TArray<FMainStorySaveData> UMJSaveData::GetMainStory() {
    return TArray<FMainStorySaveData>();
}

int32 UMJSaveData::GetMainProgressPoint() const {
    return 0;
}

int32 UMJSaveData::GetMainMissionRecordStartSelect() {
    return 0;
}

int32 UMJSaveData::GetLevelChangeCounterForFinalChapterHintPartyChat() {
    return 0;
}

TArray<FTameMonsterData> UMJSaveData::GetLegendMonsterList() {
    return TArray<FTameMonsterData>();
}

TArray<int32> UMJSaveData::GetLearnAbility() {
    return TArray<int32>();
}

int32 UMJSaveData::GetLastPlayedBgmID() {
    return 0;
}

void UMJSaveData::GetLadderPosition(FVector& outLadderUpPos, FVector& outLadderDownPos, FVector& outLadderMovePos) {
}

TArray<FSaveDataGuild> UMJSaveData::GetGuildData() {
    return TArray<FSaveDataGuild>();
}

int32 UMJSaveData::GetGamePlaySecond() {
    return 0;
}

void UMJSaveData::GetFirstSelectCharacterID(int32& FirstSelectCharaID) {
}

TArray<int32> UMJSaveData::GetExtraStoryProgressBuffer() {
    return TArray<int32>();
}

int32 UMJSaveData::GetExtraMissionRecordStartSelect() {
    return 0;
}

int32 UMJSaveData::GetEventValueParam(int32 Index) {
    return 0;
}

bool UMJSaveData::GetEventtPlayedFlag(int32 Index) {
    return false;
}

TArray<int32> UMJSaveData::GetEventPlayedFlag() const {
    return TArray<int32>();
}

int32 UMJSaveData::GetEventCounter(int32 Index) {
    return 0;
}

FEquipLanternData UMJSaveData::GetEquipLanternData() {
    return FEquipLanternData{};
}

int32 UMJSaveData::GetEquipEncountRevision() {
    return 0;
}

TArray<int32> UMJSaveData::GetEnableSwitchIndoorTriggerListRef() {
    return TArray<int32>();
}

TArray<int32> UMJSaveData::GetEnableSwitchIndoorTriggerList() {
    return TArray<int32>();
}

int32 UMJSaveData::GetDifficultyPoint() const {
    return 0;
}

EKSPartySet UMJSaveData::GetCurrentPartySet() const {
    return EKSPartySet::Set1;
}

int32 UMJSaveData::GetCurrentEncountTriggerID() {
    return 0;
}

FVector UMJSaveData::GetCameraLockPosBeforeReminiscence() const {
    return FVector{};
}

FVector UMJSaveData::GetCameraLockPos() {
    return FVector{};
}

uint8 UMJSaveData::GetCameraLockLvTriggerIdBeforeReminiscence() const {
    return 0;
}

bool UMJSaveData::GetBitFlag(int32 Index) const {
    return false;
}

TArray<int32> UMJSaveData::GetBit() const {
    return TArray<int32>();
}

int32 UMJSaveData::GetBattleSpeedStep() {
    return 0;
}

bool UMJSaveData::GetBattleHelpWindowOpen() {
    return false;
}

TMap<int32, FTownData> UMJSaveData::GetAllTownData() {
    return TMap<int32, FTownData>();
}

TMap<int32, FMapData> UMJSaveData::GetAllMapData() {
    return TMap<int32, FMapData>();
}

bool UMJSaveData::DeleteTameMonsterList(int32 Index) {
    return false;
}

FAcquisitionAbilityData UMJSaveData::CreateAcquitisionAdvancedAbilityData(int32 ArraySize) {
    return FAcquisitionAbilityData{};
}

TArray<FAcquisitionAbilityData> UMJSaveData::CreateAcquitisionAbilityData(int32 ArraySize) {
    return TArray<FAcquisitionAbilityData>();
}

void UMJSaveData::CopyPartySetDataOtherThanMember(EKSPartySet PartySetID) {
}

void UMJSaveData::ClearReminiscenceCharacterId() {
}

void UMJSaveData::ClearRecentCameraLockLevelTrigger() {
}

void UMJSaveData::ClearPlayingReminiscenceId() {
}

void UMJSaveData::ClearPlayerLocationBeforeReminiscence() {
}

void UMJSaveData::ClearCameraLockBeforeReminiscence() {
}

bool UMJSaveData::CheckLearnAbilityFull(int32& outEmptyIndex) {
    return false;
}

void UMJSaveData::ChangePartySet(EKSPartySet partySet) {
}

void UMJSaveData::BackupDataBeforeReminiscence() {
}

void UMJSaveData::BackupAndResetDifficultyPoint() {
}

int32 UMJSaveData::AddMainProgressPoint(int32 AddPoint) {
    return 0;
}

int32 UMJSaveData::AddEventValueParam(int32 Index, int32 Value) {
    return 0;
}

int32 UMJSaveData::AddEventCounter(int32 Index, int32 Value) {
    return 0;
}

int32 UMJSaveData::AddDifficultyPoint(int32 AddPoint) {
    return 0;
}


