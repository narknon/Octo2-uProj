#include "StreamingLevels.h"

UStreamingLevels::UStreamingLevels() {
}

bool UStreamingLevels::SetStreamingLevel(ELEVEL_TYPE eLevelType, ULevelStreamingDynamic* Stream) {
    return false;
}

void UStreamingLevels::RemoveLevel(ULevelStreamingDynamic* UnloadLevel) {
}

void UStreamingLevels::RemoveAllLevel() {
}

void UStreamingLevels::RemoveAllFieldLevel() {
}

void UStreamingLevels::RemoveAllBattleLevel() {
}

void UStreamingLevels::Init(int32 nFieldArrayBuffer, int32 nBattleArrayBuffer) {
}

ULevelStreamingDynamic* UStreamingLevels::GetStreamingLevel(ELEVEL_TYPE eLevelType, int32 nIndex) {
    return NULL;
}

TArray<ULevelStreamingDynamic*> UStreamingLevels::GetLevels(ELEVEL_TYPE eLevelType) {
    return TArray<ULevelStreamingDynamic*>();
}


