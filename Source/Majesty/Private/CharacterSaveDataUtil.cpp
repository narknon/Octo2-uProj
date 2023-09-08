#include "CharacterSaveDataUtil.h"

UCharacterSaveDataUtil::UCharacterSaveDataUtil() {
}

bool UCharacterSaveDataUtil::UpdateFollowNpcSupportLimit(MJFieldCommandType FieldCommandType, int32 SupportLimit) {
    return false;
}

void UCharacterSaveDataUtil::SubPlayerMoney(int32 SubMoney) {
}

void UCharacterSaveDataUtil::SetTameMonsterMode(ETameMonsterMode Mode) {
}

void UCharacterSaveDataUtil::SetTameMonsterData(int32 Index, FTameMonsterData NewTameMonster) {
}

void UCharacterSaveDataUtil::SetPlayerMoney(int32 Money) {
}

void UCharacterSaveDataUtil::SetMyShipCustomFirstChoice(EMYSHIP_CUSTOM_PART Part, EMYSHIP_CUSTOM_TYPE Type) {
}

void UCharacterSaveDataUtil::SetMyShipCustom(EMYSHIP_CUSTOM_PART Part, EMYSHIP_CUSTOM_TYPE Type) {
}

void UCharacterSaveDataUtil::SetLegendMonsterData(int32 Index, FTameMonsterData NewLegendMonster) {
}

void UCharacterSaveDataUtil::SetHunterPartner(EHUNTER_PARTNER_ID partnerID) {
}

bool UCharacterSaveDataUtil::SetFollowWaitingNpc(int32 NPCID, int32 SupportLimitCount, MJFieldCommandType FieldCommandType, EPlayableCharacterID CharaID) {
    return false;
}

bool UCharacterSaveDataUtil::SetFollowNpc(int32 NPCID, int32 SupportLimitCount, MJFieldCommandType FieldCommandType, EPlayableCharacterID CharaID) {
    return false;
}

void UCharacterSaveDataUtil::SetFirstEquipment(EPlayableCharacterID PlayerCharaId) {
}

void UCharacterSaveDataUtil::SetCharacterRawMP(int32 PlayerCharaId, int32 MP) {
}

void UCharacterSaveDataUtil::SetCharacterRawHP(int32 PlayerCharaId, int32 HP) {
}

void UCharacterSaveDataUtil::SetCharacterLevelAndExp(int32 PlayerCharaId, int32 Level, int32 Exp) {
}

void UCharacterSaveDataUtil::SetCharacterJobPoint(int32 PlayerCharaId, int32 JP) {
}

void UCharacterSaveDataUtil::SetCharacterData(int32 CharacterIndex, const FSavePlayerCharacterData& CharacterData) {
}

void UCharacterSaveDataUtil::SetBackpackItemList(const TArray<FSaveBackPackItem>& ItemList) {
}

void UCharacterSaveDataUtil::SetAdvancedAbility(int32 CharacterID, int32 AbilityIndex, bool IsLearn) {
}

void UCharacterSaveDataUtil::SetAbility(int32 CharacterID, int32 JobID, int32 AbilityIndex, bool IsLearn) {
}

void UCharacterSaveDataUtil::MergePlayerMoney(int32 ReminiMoney) {
}

bool UCharacterSaveDataUtil::IsLearnAdvancedAbility(int32 CharacterID, int32 AbilityIndex) {
    return false;
}

int32 UCharacterSaveDataUtil::GetTameMonsterNum() {
    return 0;
}

ETameMonsterMode UCharacterSaveDataUtil::GetTameMonsterMode() {
    return ETameMonsterMode::Manual;
}

int32 UCharacterSaveDataUtil::GetSecondJobID_FromSaveCharacterData(int32 CharacterID) {
    return 0;
}

int32 UCharacterSaveDataUtil::GetRawPOT_FromSaveCharacterData(int32 CharacterID) {
    return 0;
}

int32 UCharacterSaveDataUtil::GetRawMP_FromSaveCharacterData(int32 CharacterID) {
    return 0;
}

int32 UCharacterSaveDataUtil::GetRawHP_FromSaveCharacterData(int32 CharacterID) {
    return 0;
}

int32 UCharacterSaveDataUtil::GetPriorityJobID_FromSaveCharacterData(int32 CharacterID) {
    return 0;
}

int32 UCharacterSaveDataUtil::GetPlayerMoney() {
    return 0;
}

EMYSHIP_CUSTOM_TYPE UCharacterSaveDataUtil::GetMyShipCustomFirstChoice(EMYSHIP_CUSTOM_PART Part) {
    return EMYSHIP_CUSTOM_TYPE::NONE;
}

EMYSHIP_CUSTOM_TYPE UCharacterSaveDataUtil::GetMyShipCustom(EMYSHIP_CUSTOM_PART Part) {
    return EMYSHIP_CUSTOM_TYPE::NONE;
}

int32 UCharacterSaveDataUtil::GetLevel_FromSaveCharacterData(int32 CharacterID) {
    return 0;
}

int32 UCharacterSaveDataUtil::GetLegendMonsterNum() {
    return 0;
}

int32 UCharacterSaveDataUtil::GetJobPoint_FromSaveCharacterData(int32 CharacterID) {
    return 0;
}

EHUNTER_PARTNER_ID UCharacterSaveDataUtil::GetHunterPartner() {
    return EHUNTER_PARTNER_ID::NONE;
}

void UCharacterSaveDataUtil::GetFollowWaitingNpcUniqueId(TArray<int32>& outUniqId) {
}

bool UCharacterSaveDataUtil::GetFollowWaitingNPCDataByType(int32& NPCID, int32& SupportLimit, MJFieldCommandType FieldCommandType) {
    return false;
}

bool UCharacterSaveDataUtil::GetFollowWaitingNpcByFieldCommandType(MJFieldCommandType FieldCommandType, FSaveFollowNpcData& Output) {
    return false;
}

void UCharacterSaveDataUtil::GetFollowNpcUniqueId(TArray<int32>& outUniqId) {
}

bool UCharacterSaveDataUtil::GetFollowNPCDataByType(int32& NPCID, int32& SupportLimit, MJFieldCommandType FieldCommandType) {
    return false;
}

bool UCharacterSaveDataUtil::GetFollowNpcByNpcUniqueId(int32 NPCID, FSaveFollowNpcData& Output) {
    return false;
}

bool UCharacterSaveDataUtil::GetFollowNpcByFieldCommandType(MJFieldCommandType FieldCommandType, FSaveFollowNpcData& Output) {
    return false;
}

bool UCharacterSaveDataUtil::GetFollowNpcByCharacterIdAndFieldCommandType(EPlayableCharacterID CharaID, MJFieldCommandType Type, FSaveFollowNpcData& Output) {
    return false;
}

bool UCharacterSaveDataUtil::GetFollowNpcByCharacterID(EPlayableCharacterID CharaID, FSaveFollowNpcData& Output) {
    return false;
}

void UCharacterSaveDataUtil::GetFollowNpcAndWaitingNpcUniqueId(TArray<int32>& outUniqId) {
}

TArray<FSaveFollowNpcData> UCharacterSaveDataUtil::GetFollowNpc() {
    return TArray<FSaveFollowNpcData>();
}

int32 UCharacterSaveDataUtil::GetFirstJobID_FromSaveCharacterData(int32 CharacterID) {
    return 0;
}

int32 UCharacterSaveDataUtil::GetExp_FromSaveCharacterData(int32 CharacterID) {
    return 0;
}

TArray<int32> UCharacterSaveDataUtil::GetEquipSupportSkill_FromSaveCharacterData(int32 CharacterID) {
    return TArray<int32>();
}

FSaveEquipmentDataID UCharacterSaveDataUtil::GetEquipment_FromSaveCharacterData(int32 CharacterID) {
    return FSaveEquipmentDataID{};
}

int32 UCharacterSaveDataUtil::GetCharacterID_FromSaveCharacterData(int32 CharacterID) {
    return 0;
}

bool UCharacterSaveDataUtil::GetCharacterFixedEquipment(int32 CharacterID, EEQUIPMENT_PART Part) {
    return false;
}

FName UCharacterSaveDataUtil::GetCharacterEquipmentPartLabel(int32 CharacterID, EEQUIPMENT_PART Part) {
    return NAME_None;
}

TArray<FName> UCharacterSaveDataUtil::GetCharacterEquipmentLabels(int32 CharacterID) {
    return TArray<FName>();
}

FSaveEquipmentData UCharacterSaveDataUtil::GetCharacterEquipmentLabel(int32 CharacterID) {
    return FSaveEquipmentData{};
}

FSavePlayerCharacterData UCharacterSaveDataUtil::GetCharacterData(int32 CharacterID) {
    return FSavePlayerCharacterData{};
}

bool UCharacterSaveDataUtil::FindCharacterFromPlayerMember(int32 CharacterID, int32& FoundIndex, FSavePlayerCharacterData& FoundCharacter, TEnumAsByte<EBPFuncReturnCode::Type>& returnCode) {
    return false;
}

bool UCharacterSaveDataUtil::DeleteTameMonsterInvadeID(int32 TargetInvadeID) {
    return false;
}

bool UCharacterSaveDataUtil::DeleteTameMonster(int32 Index) {
    return false;
}

bool UCharacterSaveDataUtil::DeleteLegendMonster(int32 Index) {
    return false;
}

bool UCharacterSaveDataUtil::DeleteFollowWaitingNpc(MJFieldCommandType FieldCommandType) {
    return false;
}

bool UCharacterSaveDataUtil::DeleteFollowNpcByCharacterID(EPlayableCharacterID CharaID) {
    return false;
}

bool UCharacterSaveDataUtil::DeleteFollowNpc(MJFieldCommandType FieldCommandType) {
    return false;
}

void UCharacterSaveDataUtil::Debug_SetAllAbility(int32 CharacterID, bool FullOpen) {
}

bool UCharacterSaveDataUtil::CheckCharacterAlive_SpecialActionType(int32 SpecialActionType) {
    return false;
}

bool UCharacterSaveDataUtil::CanShowHunterPartnerInParty() {
    return false;
}

bool UCharacterSaveDataUtil::AddTameMonster(FTameMonsterData TameMonster) {
    return false;
}

void UCharacterSaveDataUtil::AddPlayerMoney(int32 AddMoney) {
}

bool UCharacterSaveDataUtil::AddLegendMonster(FTameMonsterData LegendMonster) {
    return false;
}


