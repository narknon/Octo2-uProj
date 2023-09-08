#include "LibSound.h"

ULibSound::ULibSound() {
}

FName ULibSound::ReplaceBattleResultBgmByCondition(FName currentBattleBgmLabel, FName jingleBgmLabel) {
    return NAME_None;
}

FName ULibSound::ReplaceBattleBgmByCondition(FName BgmLabel) {
    return NAME_None;
}

bool ULibSound::PlaySeByLabel(FName SELabel) {
    return false;
}

bool ULibSound::IsCheckNormalMapInOverAllChapterAndBgmNull() {
    return false;
}

bool ULibSound::IsAtomPlaying(EKSAudioComponentType CompType) {
    return false;
}

FName ULibSound::CheckShouldPlayBgm(const FLevelInfoData& rLevelInfo, bool bCheckReserveTimeZone, bool forceNonDarkening) {
    return NAME_None;
}


