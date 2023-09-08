#include "LibTutorial.h"

ULibTutorial::ULibTutorial() {
}

void ULibTutorial::SetTutorialFinishFlag(ETUTORIAL_TYPE Type) {
}

void ULibTutorial::OpenTutorialWithCloseCallback(ETUTORIAL_TYPE Type, bool ForceOpen, int32 CharaID, FCloseFinishDelegateBP CloseFinishCallback, bool& IsOpen) {
}

void ULibTutorial::OpenTutorial(ETUTORIAL_TYPE Type, bool ForceOpen, int32 CharaID, bool& IsOpen) {
}

bool ULibTutorial::IsRunningTutorial() {
    return false;
}

bool ULibTutorial::CheckProlouge(int32& CharaID) {
    return false;
}

bool ULibTutorial::CheckMultiStory(int32& CharaID) {
    return false;
}

bool ULibTutorial::CheckMerchant(int32& CharaID) {
    return false;
}

bool ULibTutorial::CheckCoupling_Sin(int32& CharaID) {
    return false;
}

bool ULibTutorial::CheckCoupling_Odo(int32& CharaID) {
    return false;
}

bool ULibTutorial::CheckCoupling_Kus(int32& CharaID) {
    return false;
}

bool ULibTutorial::CheckCoupling_Gak(int32& CharaID) {
    return false;
}


