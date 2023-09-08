#include "KSSaveDataManager.h"

AKSSaveDataManager::AKSSaveDataManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveGame = NULL;
    this->SaveSystem = NULL;
    this->m_IsCreatedsystemSaveData = false;
}

bool AKSSaveDataManager::ValidateAtlantisPartySet() {
    return false;
}


bool AKSSaveDataManager::SubItemFromBackpack(FName ItemLabel, int32 Num) {
    return false;
}

bool AKSSaveDataManager::StartAutoSave_Implementation(const FSaveGameDelegate& AutoSavedDelegate) {
    return false;
}

bool AKSSaveDataManager::SetupReminiscenceParty_Implementation(EPlayableCharacterID CharacterID) {
    return false;
}

bool AKSSaveDataManager::SetupLastDungeonParty_Implementation(TArray<int32>& Party1, TArray<int32>& Party2) {
    return false;
}

bool AKSSaveDataManager::SetupLastDungeonMode(TArray<int32>& Party1, TArray<int32>& Party2) {
    return false;
}

bool AKSSaveDataManager::SetupFixedParty(const TArray<EPlayableCharacterID>& fixedCharaList) {
    return false;
}

void AKSSaveDataManager::SetupBackpackItemList(const TArray<FSaveBackPackItem>& saveBackpackItemList) {
}

void AKSSaveDataManager::SetupAtlantisPartySet(EKSPartySet PartySetID, const TArray<int32>& mainMember, const TArray<int32>& subMember) {
}

void AKSSaveDataManager::SetNewGame(bool NewIsNewGame) {
}

void AKSSaveDataManager::SetLastAccessSlotIndex(EKSSaveSlotName slotIdx) {
}

void AKSSaveDataManager::SetIsCreatedsystemSaveData(bool IsCreatedsystemSaveData) {
}

void AKSSaveDataManager::SetGameSaveData_Native(UMJSaveData* saveData) {
}


void AKSSaveDataManager::SetGameSaveData(UMJSaveData* saveData) {
}

void AKSSaveDataManager::SetEventPlayedFlag(int32 Index, bool Flag) {
}

void AKSSaveDataManager::SetEventFlag(int32 Index, bool Flag) {
}

void AKSSaveDataManager::SetEventCounter(int32 Index, int32 Value) {
}


void AKSSaveDataManager::SetBattleSpeed_Implementation() {
}

void AKSSaveDataManager::SetBackpackItem(const int32 ItemId, const int32 ItemNum) {
}

void AKSSaveDataManager::SetAutoSavePlayerLocation(FVector PlayerLocation) {
}

void AKSSaveDataManager::SetAutoSaveEnable(bool Enable) {
}

void AKSSaveDataManager::SetAutoSaved(bool NewIsAutoSaved) {
}

bool AKSSaveDataManager::ResumeNormalPartySet() {
    return false;
}

bool AKSSaveDataManager::RestoreParty_Implementation() {
    return false;
}

bool AKSSaveDataManager::ResetPartySet() {
    return false;
}


void AKSSaveDataManager::RefreshBackpackSaveData() {
}

bool AKSSaveDataManager::PrepareAtlantisPartySet() {
    return false;
}

void AKSSaveDataManager::OnFinishAutoSaveSystemData(const FString& SlotName, const int32 UserIndex, bool IsSuccesss) {
}

void AKSSaveDataManager::OnFinishAutoSaveGameData(const FString& SlotName, const int32 UserIndex, bool IsSuccesss) {
}

void AKSSaveDataManager::OnEndAutoSave_Implementation() {
}

bool AKSSaveDataManager::MergePartyData_Implementation() {
    return false;
}

bool AKSSaveDataManager::IsValidEventFlag(TEnumAsByte<EBPIsValidReturnCode::Type>& returnCode, int32 Index) {
    return false;
}

bool AKSSaveDataManager::IsNewGame() const {
    return false;
}

bool AKSSaveDataManager::IsAutoSaved() const {
    return false;
}


bool AKSSaveDataManager::InitPartyData(EPlayableCharacterID CharacterID) {
    return false;
}


UKSSaveSystem* AKSSaveDataManager::GetSysSaveData() const {
    return NULL;
}

void AKSSaveDataManager::GetSaveBackpackDataWithBuffer(int32 BufferSize, TArray<FSaveBackPackItem>& outBackPackitemsWithBuffer) {
}

void AKSSaveDataManager::GetSaveBackpackData(TArray<FSaveBackPackItem>& outBackPackItems) {
}

EKSSaveSlotName AKSSaveDataManager::GetLastAccessSlotIndex() {
    return EKSSaveSlotName::AUTO_SAVE;
}

AKSSaveDataManager* AKSSaveDataManager::GetInstance() {
    return NULL;
}

UMJSaveData* AKSSaveDataManager::GetGameSaveData() const {
    return NULL;
}

bool AKSSaveDataManager::GetEventPlayedFlag(int32 Index) {
    return false;
}

bool AKSSaveDataManager::GetEventFlagByName(FName FlagLabel) {
    return false;
}

bool AKSSaveDataManager::GetEventFlag(int32 Index) {
    return false;
}

int32 AKSSaveDataManager::GetEventCounter(int32 Index) {
    return 0;
}

EKSPartySet AKSSaveDataManager::GetCurrentPartySet() const {
    return EKSPartySet::Set1;
}


bool AKSSaveDataManager::GetBackpackItem(int32& ItemNum, const int32 ItemId) {
    return false;
}

FVector AKSSaveDataManager::GetAutoSavePlayerLocation() const {
    return FVector{};
}

bool AKSSaveDataManager::FinishLastDungeonMode() {
    return false;
}

bool AKSSaveDataManager::FinishFixedParty() {
    return false;
}

void AKSSaveDataManager::FindItemFromBackpack(FName ItemLabel, bool& isFind, int32& Num) {
}

void AKSSaveDataManager::Debug_SetupAtlantisPartySetRandom() {
}

void AKSSaveDataManager::Debug_SetRandomParticipationOrder() {
}

void AKSSaveDataManager::Debug_ResumeNormalPartySet() {
}

void AKSSaveDataManager::Debug_PrintItemAcquisitionHistory() {
}

void AKSSaveDataManager::Debug_ClearParticipationOrder() {
}

bool AKSSaveDataManager::CheckEventFlag(int32 Index) {
    return false;
}

bool AKSSaveDataManager::ChangePartySet(EKSPartySet PartySetID) {
    return false;
}


bool AKSSaveDataManager::AddItemToBackpack(FName ItemLabel, int32 Num) {
    return false;
}

bool AKSSaveDataManager::AddItemsToBackpack(const TMap<FName, int32>& itemAndNum) {
    return false;
}

void AKSSaveDataManager::AddEventCounter(int32 Index, int32 Value) {
}


