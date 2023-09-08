#include "GuildDataUtility.h"

UGuildDataUtility::UGuildDataUtility() {
}

void UGuildDataUtility::SetAcquiredJobLicense(int32 GuildId, int32 licenseIndex, bool bAcquired) {
}

bool UGuildDataUtility::IsAcquiredJobLicense(int32 GuildId, int32 licenseIndex) {
    return false;
}

void UGuildDataUtility::GetGuildNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames) {
}

void UGuildDataUtility::GetGuildDataByLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FGuildData& outGuildData, FName guildLabel) {
}

void UGuildDataUtility::FindGuildInWorldMapLocation(TArray<int32>& outGuildId, FName WorldMapLabel) {
}

void UGuildDataUtility::FindGuildDataByNpcLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FGuildData& outGuildData, FName NPCLabel) {
}

bool UGuildDataUtility::CheckAchievedJobLicense(int32 GuildId, int32 licenseIndex) {
    return false;
}


