#include "KSDebugMenuStatics.h"

UKSDebugMenuStatics::UKSDebugMenuStatics() {
}

void UKSDebugMenuStatics::NextBattleCalcText() {
}

bool UKSDebugMenuStatics::IsOutputPlayerAnimLog() {
    return false;
}

bool UKSDebugMenuStatics::IsOutputOtherAnimLog() {
    return false;
}

bool UKSDebugMenuStatics::IsLevelTriggerIntercept() {
    return false;
}

bool UKSDebugMenuStatics::IsEditor() {
    return false;
}

bool UKSDebugMenuStatics::IsDisableEmotion() {
    return false;
}

bool UKSDebugMenuStatics::IsDebugMenuOpen() {
    return false;
}

TArray<FString> UKSDebugMenuStatics::GetSpawnNpcListFromTextFile() {
    return TArray<FString>();
}

bool UKSDebugMenuStatics::GetPlacementLabelsForDebug(TArray<FName>& PlacementLabels, TArray<FText>& PlacementLabels_FText) {
    return false;
}

FString UKSDebugMenuStatics::GetEventFalgLabel(int32 ID) {
    return TEXT("");
}

FString UKSDebugMenuStatics::GetDebugMenuSortList() {
    return TEXT("");
}

uint8 UKSDebugMenuStatics::GetDebugDrawCounter() {
    return 0;
}

UUserWidget* UKSDebugMenuStatics::GetCurrentDebugMenuWidget() {
    return NULL;
}

FString UKSDebugMenuStatics::GetBattleCalcText(int32 nIndex) {
    return TEXT("");
}

bool UKSDebugMenuStatics::ExportUObjectAsJson(const UObject* Obj, FString& outExportedFilePath) {
    return false;
}

void UKSDebugMenuStatics::ExportTextFile(const FString& FilePath, const FString& Filename) {
}

bool UKSDebugMenuStatics::ExportSaveData(const UObject* Obj) {
    return false;
}

void UKSDebugMenuStatics::DebugDrawSwitch() {
}

void UKSDebugMenuStatics::CloseDebugMenu() {
}

void UKSDebugMenuStatics::ClearBattleCalcText() {
}

void UKSDebugMenuStatics::AppendBattleCalcText(const FString& pushText) {
}


