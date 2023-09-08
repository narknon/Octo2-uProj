#include "KSGameInstance.h"

UKSGameInstance::UKSGameInstance() {
    this->m_bDebugMode = false;
    this->IsCreateFCv2 = false;
}


void UKSGameInstance::SetPlayInTestLevel(bool bInTestLevel) {
}

void UKSGameInstance::SetGameSuspend(bool isSuspend) {
}


void UKSGameInstance::SetDisableWorldRendering(bool bDisable) {
}



void UKSGameInstance::LoadFonts() {
}

void UKSGameInstance::LoadFont(EKSLanguage lang) {
}

void UKSGameInstance::KSSetLang(EKSLanguage eLang) {
}

bool UKSGameInstance::IsPlayInTestLevel() const {
    return false;
}

bool UKSGameInstance::IsGamePlayMode() {
    return false;
}



UKSGameInstance* UKSGameInstance::GetInstance() {
    return NULL;
}


bool UKSGameInstance::GetDebugMode() {
    return false;
}

AKSCharacterManager* UKSGameInstance::GetCharacterManager_Implementation() {
    return NULL;
}

void UKSGameInstance::Debug_SetOverwritePlatformFontType(int32 Type) {
}


