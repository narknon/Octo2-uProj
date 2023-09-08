#include "LibKey.h"

ULibKey::ULibKey() {
}

void ULibKey::SaveInputSetting() {
}

void ULibKey::RemoveAxisMappingByName(const FName InAxisName) {
}

void ULibKey::RemoveActionMappingByName(const FName InActionName) {
}

FName ULibKey::KeyToName(const FKey Key) {
    return NAME_None;
}

bool ULibKey::IsInputKeyDownByActionMappings(APlayerController* PlayerController, const FName InActionName) {
    return false;
}

int32 ULibKey::GetTypeHashFromFKey(const FKey Key) {
    return 0;
}

EKeyboardLayoutType ULibKey::GetKeyboardLayoutType() {
    return EKeyboardLayoutType::TYPE_NORMAL;
}

FString ULibKey::GetKeyBoardCode() {
    return TEXT("");
}

FKey ULibKey::GetInputKeyDownFKeyConfigFilter(APlayerController* PlayerController) {
    return FKey{};
}

FKey ULibKey::GetInputKeyDownFKey(APlayerController* PlayerController) {
    return FKey{};
}

FKey ULibKey::GetFKeyFromTypeHash(int32 TypeHash) {
    return FKey{};
}

EControllerInputType ULibKey::GetControllerInputType() {
    return EControllerInputType::TYPE_UNKNOWN;
}

EControllerInputType ULibKey::GetControllerInputCurrentType() {
    return EControllerInputType::TYPE_UNKNOWN;
}

void ULibKey::DebugLogTypeHashFromKey() {
}

void ULibKey::DebugLogCodesFromKey() {
}

void ULibKey::DebugLogAxisMappingByName(const FName InAxisName) {
}

void ULibKey::DebugLogAllAxisMapping() {
}

void ULibKey::DebugLogAllActionMapping() {
}

void ULibKey::DebugLogActionMappingByName(const FName InActionName) {
}

FKey ULibKey::CheckInputKeyDown(APlayerController* PlayerController) {
    return FKey{};
}

bool ULibKey::CheckInputAnyKeyboardKeyJustPressed(APlayerController* PlayerController) {
    return false;
}

void ULibKey::AddAxisMapping(const FName InAxisName, const FKey Key, const float Scale) {
}

void ULibKey::AddActionMapping(const FName InActionName, const FKey Key) {
}


