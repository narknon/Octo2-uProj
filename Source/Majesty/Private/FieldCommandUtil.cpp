#include "FieldCommandUtil.h"

UFieldCommandUtil::UFieldCommandUtil() {
}

void UFieldCommandUtil::SetIsFcV2(bool Val) {
}

void UFieldCommandUtil::OpenFieldCommandPreviewMenu() {
}

void UFieldCommandUtil::OpenFieldCommandMenu() {
}

bool UFieldCommandUtil::IsUseFieldCommandsAllwaysTimeZone(TArray<MJFieldCommandType> Type, AKSCharacterBase* TargetChara, bool IsDayTime) {
    return false;
}

bool UFieldCommandUtil::IsUseFieldCommandAllwaysTimeZone(MJFieldCommandType Type, AKSCharacterBase* TargetChara, bool IsDayTime) {
    return false;
}

bool UFieldCommandUtil::IsSwoonFc(MJFieldCommandType Type) {
    return false;
}

bool UFieldCommandUtil::IsPlayingFieldCommand() {
    return false;
}

bool UFieldCommandUtil::IsPlayingBadConnectionFieldCommand() {
    return false;
}

bool UFieldCommandUtil::IsOpenFieldCommandMenu(UObject* WorldContextObject, AKSCharacterBase* refTalk) {
    return false;
}

bool UFieldCommandUtil::IsItemFc(MJFieldCommandType Type) {
    return false;
}

bool UFieldCommandUtil::IsInformationFc(MJFieldCommandType Type) {
    return false;
}

bool UFieldCommandUtil::IsFollowFc(MJFieldCommandType Type) {
    return false;
}

bool UFieldCommandUtil::IsFieldCommandTargetNpc(AKSCharacterBase* NPC) {
    return false;
}

bool UFieldCommandUtil::IsBadConnectionNPC(FName NPCLabel) {
    return false;
}

bool UFieldCommandUtil::IsBadConnection(int32 TownID) {
    return false;
}

TArray<MJFieldCommandType> UFieldCommandUtil::GetSwoonFcTypes() {
    return TArray<MJFieldCommandType>();
}

void UFieldCommandUtil::GetPartyFieldCommand(bool AvaiableOnly, AKSCharacterBase* TargetChara, bool& CanUseCommand, TArray<MJFieldCommandType>& FieldCommandList) {
}

TArray<MJFieldCommandType> UFieldCommandUtil::GetItemFcTypes() {
    return TArray<MJFieldCommandType>();
}

bool UFieldCommandUtil::GetIsGameOverWhenLoose() {
    return false;
}

bool UFieldCommandUtil::GetIsFcV2() {
    return false;
}

TArray<MJFieldCommandType> UFieldCommandUtil::GetInformationFcTypes() {
    return TArray<MJFieldCommandType>();
}

TArray<MJFieldCommandType> UFieldCommandUtil::GetFollowFcTypes() {
    return TArray<MJFieldCommandType>();
}

void UFieldCommandUtil::Debug_SetIsForceSuccessFC(bool Val) {
}

void UFieldCommandUtil::Debug_SetIsForceFailureFC(bool Val) {
}

bool UFieldCommandUtil::Debug_GetIsForceSuccessFC() {
    return false;
}

bool UFieldCommandUtil::Debug_GetIsForceFailureFC() {
    return false;
}

bool UFieldCommandUtil::CanExecFieldCommand(FName NPCLabel, MJFieldCommandType FCType) {
    return false;
}


