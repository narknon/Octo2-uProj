#include "PartySaveDataUtil.h"

UPartySaveDataUtil::UPartySaveDataUtil() {
}

bool UPartySaveDataUtil::UpdateCurrentPartySet() {
    return false;
}

bool UPartySaveDataUtil::IsPartySolo() {
    return false;
}

bool UPartySaveDataUtil::IsBattleMember(EPlayableCharacterID CharaID) {
    return false;
}

TArray<int32> UPartySaveDataUtil::GetSubMemberCharacterIDs() {
    return TArray<int32>();
}

TArray<int32> UPartySaveDataUtil::GetSubMemberArrayIndex() {
    return TArray<int32>();
}

TArray<FSavePlayerCharacterData> UPartySaveDataUtil::GetSubMember() {
    return TArray<FSavePlayerCharacterData>();
}

EPlayableCharacterID UPartySaveDataUtil::GetPartyTopCharacterID() {
    return EPlayableCharacterID::eNONE;
}

TArray<FSavePlayerCharacterData> UPartySaveDataUtil::GetMemberFromMainMenu() {
    return TArray<FSavePlayerCharacterData>();
}

TArray<int32> UPartySaveDataUtil::GetMainMemberCharacterIDs() {
    return TArray<int32>();
}

TArray<int32> UPartySaveDataUtil::GetMainMemberArrayIndex() {
    return TArray<int32>();
}

TArray<int32> UPartySaveDataUtil::GetLastAtlantisPartySet(EKSPartySet partySet) {
    return TArray<int32>();
}

TArray<FSavePlayerCharacterData> UPartySaveDataUtil::GetBattleMember() {
    return TArray<FSavePlayerCharacterData>();
}

bool UPartySaveDataUtil::CheckInSubParty(EPlayableCharacterID CharaID) {
    return false;
}

bool UPartySaveDataUtil::CheckInPartySet(EPlayableCharacterID CharaID, EKSPartySet partySet) {
    return false;
}

bool UPartySaveDataUtil::CheckInParty(EPlayableCharacterID CharaID) {
    return false;
}


