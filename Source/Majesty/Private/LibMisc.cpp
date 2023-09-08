#include "LibMisc.h"

ULibMisc::ULibMisc() {
}

AActor* ULibMisc::SpawnActorByClassAssetId(UObject* WorldContextObject, const TSoftClassPtr<UObject>& classAssetId, const FTransform Transform) {
    return NULL;
}

void ULibMisc::SortNameArrayInt64Order(TArray<FName>& nameArray, TArray<int64>& orderArray, bool isAscending) {
}

void ULibMisc::SortNameArrayByFloatOrder(TArray<FName>& nameArray, TArray<float>& orderArray, bool isAscending) {
}

void ULibMisc::SortNameArray(TArray<FName>& nameArray, TArray<int32>& orderArray, bool isAscending) {
}

void ULibMisc::SortIntArray(TArray<int32>& intArray, TArray<int32>& orderArray, bool isAscending) {
}

void ULibMisc::SetShowCollision(UObject* WorldContextObject, bool bShow) {
}

void ULibMisc::SetGamma(float Value) {
}

void ULibMisc::Reserve_NameArray(TArray<FName>& taregtArray, int32 Size) {
}

void ULibMisc::Reserve_Map(const TMap<int32, int32>& TargetMap, int32 Size) {
}

void ULibMisc::Reserve_IntArray(TArray<int32>& targetArray, int32 Size) {
}

void ULibMisc::ReleaseSlateResource(UWidget* Widget) {
}

void ULibMisc::PrintBPCallstack() {
}

void ULibMisc::OutputMessageLog(ELogErrorType ErrorType, const FString& Message) {
}

void ULibMisc::OutputLog(ELogErrorType ErrorType, const FString& Log, float TimeToDisplay) {
}

void ULibMisc::LogError(const FString& Log, float TimeToDisplay) {
}

bool ULibMisc::IsDebugCameraRunning(UObject* WorldContextObject) {
    return false;
}

FSoftObjectPath ULibMisc::GetSpriteAssetPath(const TSoftObjectPtr<UObject>& cSoftObject) {
    return FSoftObjectPath{};
}

bool ULibMisc::GetShowCollision(UObject* WorldContextObject) {
    return false;
}

float ULibMisc::GetGamma() {
    return 0.0f;
}

int32 ULibMisc::GetDataTableRowNum(const FString& AssetPath) {
    return 0;
}

FString ULibMisc::GetCommandLineValue(const FString& Key, bool& bSucceeded) {
    return TEXT("");
}

UUserWidget* ULibMisc::CreateUserWidgetByClassAssetId(APlayerController* OwningPlayer, const TSoftClassPtr<UObject>& classAssetId) {
    return NULL;
}

UActorComponent* ULibMisc::AddActorComponent(AActor* cSelf, UClass* cActorComponentClass) {
    return NULL;
}


