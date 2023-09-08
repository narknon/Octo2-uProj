#include "KSSaveDataStatics.h"

UKSSaveDataStatics::UKSSaveDataStatics() {
}

bool UKSSaveDataStatics::StartAutoSave(const FSaveGameDelegate& AutoSavedDelegate) {
    return false;
}

void UKSSaveDataStatics::SetSysSaveDataParam(UObject* WorldContextObject, EKSSaveDataParamType ParamType, int32 Param) {
}

void UKSSaveDataStatics::SetSysSaveDataKeyConfigParam(UObject* WorldContextObject, EKSKeyConfigElement ParamType, int32 Param) {
}

void UKSSaveDataStatics::SetSysSaveDataFlag(UObject* WorldContextObject, EKSSaveDataFlagType flagType, bool Flag) {
}

void UKSSaveDataStatics::SetSysSaveData(UObject* WorldContextObject, UKSSaveSystem* sysSaveData) {
}

void UKSSaveDataStatics::SetNextLoadTarget(ESaveDataLoadTarget Target) {
}

void UKSSaveDataStatics::SetGameSaveData(UObject* WorldContextObject, UMJSaveData* gameSaveData) {
}

void UKSSaveDataStatics::SetDefaultOptionParam(UObject* WorldContextObject) {
}

void UKSSaveDataStatics::SetDefaultGraphicsOptionParam(UObject* WorldContextObject) {
}

void UKSSaveDataStatics::SetActivitySubTaskStatus(int32 MainStoryId, int32 Status) {
}

TArray<int32> UKSSaveDataStatics::ResizeArraywithBlank(TArray<int32> InputPin, int32 ReturnArrayLength, int32 InitValue) {
    return TArray<int32>();
}

FString UKSSaveDataStatics::MakeSystemDataFileName() {
    return TEXT("");
}

FString UKSSaveDataStatics::MakeGameDataFileNameByEnum(EKSSaveSlotName SlotNo) {
    return TEXT("");
}

FString UKSSaveDataStatics::MakeGameDataFileName(int32 SlotNo) {
    return TEXT("");
}

bool UKSSaveDataStatics::IsVoiceLangJapanese(UObject* WorldContextObject) {
    return false;
}

bool UKSSaveDataStatics::IsAutoSaving() {
    return false;
}

void UKSSaveDataStatics::GetSysSaveDataParamArray(TArray<int32>& outParam, UObject* WorldContextObject) {
}

int32 UKSSaveDataStatics::GetSysSaveDataParam(UObject* WorldContextObject, EKSSaveDataParamType ParamType) {
    return 0;
}

void UKSSaveDataStatics::GetSysSaveDataKeyConfigArray(TArray<int32>& outParam, UObject* WorldContextObject) {
}

void UKSSaveDataStatics::GetSysSaveDataFlagArray(TArray<int32>& outFlag, UObject* WorldContextObject) {
}

bool UKSSaveDataStatics::GetSysSaveDataFlag(UObject* WorldContextObject, EKSSaveDataFlagType flagType) {
    return false;
}

UKSSaveSystem* UKSSaveDataStatics::GetSysSaveData(UObject* WorldContextObject) {
    return NULL;
}

ESaveDataLoadTarget UKSSaveDataStatics::GetNextLoadTarget() {
    return ESaveDataLoadTarget::Normal;
}

UMJSaveData* UKSSaveDataStatics::GetGameSaveData(UObject* WorldContextObject) {
    return NULL;
}

int32 UKSSaveDataStatics::GetCurrentPlayTime() {
    return 0;
}

int32 UKSSaveDataStatics::GetActivitySubTaskStatus(int32 MainStoryId) {
    return 0;
}

bool UKSSaveDataStatics::DoesExistsTrialGameData() {
    return false;
}

bool UKSSaveDataStatics::DoesExistsPS4GameData() {
    return false;
}

void UKSSaveDataStatics::Debug_OutputActivitySaveData() {
}

void UKSSaveDataStatics::Debug_CheckContainerSizeInSaveData() {
}


