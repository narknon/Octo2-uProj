#include "KSPlayerController.h"

AKSPlayerController::AKSPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputMode = EKSInputMode::MODE_CHARA;
    this->IsPlayerCharacterInput = true;
    this->InputAxisX = 0.00f;
    this->InputAxisY = 0.00f;
    this->AxisX = 0.00f;
    this->AxisY = 0.00f;
    this->RAxisX = 0.00f;
    this->RAxisY = 0.00f;
    this->RSholderHold = false;
    this->FrameInputFlag = false;
    this->m_IsGamePadAttached = false;
    this->UseInputType = EKSUseInputType::CONTROLLER;
    this->UseControllerInputType = EControllerInputType::TYPE_XBOX_360;
    this->bChangeUseInputType = false;
    this->EnableMouseMove = false;
    this->m_IsSystemUiOverlaid = false;
    this->ClickEventKeys.AddDefaulted(1);
}

void AKSPlayerController::SetPlayerCharacterInput(bool Enable) {
}

void AKSPlayerController::SetKSInputMode(EKSInputMode Mode) {
}

void AKSPlayerController::SetDefaultControllerKeyConfig() {
}

bool AKSPlayerController::SetConfigKey(EKSKeyConfigElement Elem, const FKey Key) {
    return false;
}

void AKSPlayerController::ResetToDefaultKeyConfig(EKSKeyConfigType Type) {
}


void AKSPlayerController::ResetConfigKeyList() {
}

void AKSPlayerController::ReflectSystemDataKeyConfig() {
}

void AKSPlayerController::ReflectKeyboardLayoutType() {
}

void AKSPlayerController::RebuildKeyMappings(const FKSKeyConfigMappingDatum& MappingData) {
}

void AKSPlayerController::RebuildInputKeyMappingsByKeyConfigElement(EKSKeyConfigElement Elem) {
}

void AKSPlayerController::OnOptionApplyComplete(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs) {
}



bool AKSPlayerController::IsSetConfigKey(EKSKeyConfigElement Elem, const FKey Key) {
    return false;
}

bool AKSPlayerController::IsPressedEventSkip() {
    return false;
}

bool AKSPlayerController::IsPressedEventDoubleSpeed() {
    return false;
}

bool AKSPlayerController::IsKeyConfigCancelKey(EKSKeyConfigElement Elem, const FKey Key) const {
    return false;
}

bool AKSPlayerController::IsChangeUseInputType() const {
    return false;
}

void AKSPlayerController::InitializeConfigKeyList() {
}

void AKSPlayerController::Initialize() {
}

EKSUseInputType AKSPlayerController::GetUseInputType() const {
    return EKSUseInputType::CONTROLLER;
}

int32 AKSPlayerController::GetTypeHashByKeyConfigElement(EKSKeyConfigElement Elem) {
    return 0;
}

bool AKSPlayerController::GetRSholderHold() const {
    return false;
}

FVector2D AKSPlayerController::GetRAxis() const {
    return FVector2D{};
}

bool AKSPlayerController::GetPlayerCharacterInput() const {
    return false;
}

FVector2D AKSPlayerController::GetLAxis() const {
    return FVector2D{};
}

EKSInputMode AKSPlayerController::GetKSInputMode() const {
    return EKSInputMode::MODE_CHARA;
}

FName AKSPlayerController::GetKeyNameByKeyConfigElement(EKSKeyConfigElement Elem) {
    return NAME_None;
}

FKey AKSPlayerController::GetKeyByKeyConfigElement(EKSKeyConfigElement Elem) const {
    return FKey{};
}

bool AKSPlayerController::GetGamePadAttached() const {
    return false;
}

bool AKSPlayerController::GetFrameInputFlag() const {
    return false;
}

void AKSPlayerController::GetDirectInputKey(const FKey XInputKey, FKey& DirectInputKey) {
}

FKey AKSPlayerController::GetDefaultKeyConfigElement(EKSKeyConfigElement Elem) const {
    return FKey{};
}

void AKSPlayerController::DebugSetFixedInputMode(EKSUseInputType inputType, bool isFixed) {
}


void AKSPlayerController::DebugEnableMouseInput(bool Enable) {
}

void AKSPlayerController::DebugChangeOldKeyConfigList(bool ChangeOldSetting) {
}


void AKSPlayerController::CleanMoveParam() {
}


void AKSPlayerController::ChangeDefaultKeyboardConfigKey() {
}

void AKSPlayerController::ApplyDefaultKeyConfigToSystemData() {
}

void AKSPlayerController::ApplyDefaultKeyConfig() {
}

void AKSPlayerController::AddInputNotificationActor(AActor* TargetActor) {
}


