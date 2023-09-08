#include "VibrationStatics.h"

UVibrationStatics::UVibrationStatics() {
}

void UVibrationStatics::UnloadVibration() {
}

bool UVibrationStatics::StopVibration() {
    return false;
}

bool UVibrationStatics::PlayVibrationByLabel(FName vibLabel, float Power, bool Loop, int32 LoopInterval) {
    return false;
}

bool UVibrationStatics::PlayVibration2ByLabel(FName vibLabel, EVibrationPower Power, bool Loop, int32 LoopInterval) {
    return false;
}

bool UVibrationStatics::LoadVibration(const FString& PathName) {
    return false;
}


