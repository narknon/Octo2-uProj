#include "NpcPropertyComponent.h"

UNpcPropertyComponent::UNpcPropertyComponent() {
    this->m_NpcUniqueID = 0;
    this->m_RequestID = 0;
    this->m_IsEnableMove = false;
    this->m_IsMoveNPC = false;
    this->m_IsNoReactionNPC = false;
    this->m_IsEnableFieldCommand = false;
    this->m_IsPlayingAutoTalk = false;
    this->m_AutoBalloonDistance = 0.00f;
}

void UNpcPropertyComponent::SetRequestID(int32 Val) {
}

void UNpcPropertyComponent::SetPlayingAutoTalk(bool Val) {
}

int32 UNpcPropertyComponent::SetNpcUniqueID(int32 Value) {
    return 0;
}

FName UNpcPropertyComponent::SetNpcLabel(FName Value) {
    return NAME_None;
}

void UNpcPropertyComponent::SetIsNoReactionNPC(bool Val) {
}

void UNpcPropertyComponent::SetIsMoveNPC(bool Val) {
}

void UNpcPropertyComponent::SetIsEnableMove(bool Val) {
}

void UNpcPropertyComponent::SetIsEnableFieldCommand(bool Val) {
}

void UNpcPropertyComponent::SetAutoBalloonDistance(float Distance) {
}

bool UNpcPropertyComponent::IsSwoon() const {
    return false;
}

bool UNpcPropertyComponent::IsSignBoard() {
    return false;
}

bool UNpcPropertyComponent::IsPlayingAutoTalk() const {
    return false;
}

bool UNpcPropertyComponent::IsGramoPhone() {
    return false;
}

int32 UNpcPropertyComponent::GetRequestID() const {
    return 0;
}

bool UNpcPropertyComponent::GetPurchaseData(FNPCPurchaseDataBase& OutData) {
    return false;
}

int32 UNpcPropertyComponent::GetNpcUniqueID() {
    return 0;
}

FName UNpcPropertyComponent::GetNpcLabel() {
    return NAME_None;
}

bool UNpcPropertyComponent::GetLeadData(FNPCLeadDataBase& OutData) {
    return false;
}

bool UNpcPropertyComponent::GetIsNoReactionNPC() const {
    return false;
}

bool UNpcPropertyComponent::GetIsMoveNPC() const {
    return false;
}

bool UNpcPropertyComponent::GetIsEnableMove() const {
    return false;
}

bool UNpcPropertyComponent::GetIsEnableFieldCommand() const {
    return false;
}

bool UNpcPropertyComponent::GetHearData(FNPCHearDataBase& OutData) {
    return false;
}

bool UNpcPropertyComponent::GetBattleData(FNPCBattleData& OutData) {
    return false;
}

float UNpcPropertyComponent::GetAutoBalloonDistance() const {
    return 0.0f;
}

bool UNpcPropertyComponent::CheckFieldCommandEnable() {
    return false;
}


