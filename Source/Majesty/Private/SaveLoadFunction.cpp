#include "SaveLoadFunction.h"

USaveLoadFunction::USaveLoadFunction() {
}

void USaveLoadFunction::Debug_SetIsForceSaveFailed(bool Val) {
}

void USaveLoadFunction::Debug_SetIsForceAsyncSaveWaitTime(float Val) {
}

void USaveLoadFunction::Debug_SetIsForceAsyncSave(bool Val) {
}

void USaveLoadFunction::Debug_SetIsForceAsyncLoadWaitTime(float Val) {
}

void USaveLoadFunction::Debug_SetIsForceAsyncLoad(bool Val) {
}

void USaveLoadFunction::Debug_AcqSaveGameByFileName(const FString& Filename, const FSaveGameDelegate& SavedDelegate) {
}

void USaveLoadFunction::Debug_AcqLoadGameByFileName(const FString& Filename, const FLoadGameDelegate& LoadedDelegate, ESaveDataLoadTarget LoadTarget) {
}

void USaveLoadFunction::AcqSaveSystemData(const FSaveGameDelegate& SavedDelegate) {
}

void USaveLoadFunction::AcqSaveGame(EKSSaveSlotName SlotNo, const FSaveGameDelegate& SavedDelegate) {
}

UKSSaveSystem* USaveLoadFunction::AcqLoadSystemDataNoCallback(ESaveDataLoadTarget LoadTarget) {
    return NULL;
}

void USaveLoadFunction::AcqLoadSystemData(const FLoadSystemDataDelegate& LoadedDelegate, ESaveDataLoadTarget LoadTarget) {
}

void USaveLoadFunction::AcqLoadGame(EKSSaveSlotName SlotNo, const FLoadGameDelegate& LoadedDelegate, ESaveDataLoadTarget LoadTarget) {
}


