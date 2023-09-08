#include "LibDisplay.h"

ULibDisplay::ULibDisplay() {
}

bool ULibDisplay::SetWindowResolution(TEnumAsByte<EWindowMode::Type> InFullScreenMode, FIntPoint Resolution) {
    return false;
}

bool ULibDisplay::SetFPS(float Fps) {
    return false;
}

void ULibDisplay::RefreshDisplayInformation() {
}

FVector2D ULibDisplay::GetWindowLetterBoxSize(UObject* WorldContextObject, bool IsRemoveDpiScale) {
    return FVector2D{};
}

void ULibDisplay::GetWindowedResolutions(TArray<FIntPoint>& Resolutions) {
}

FVector2D ULibDisplay::GetWidgetSpaceSize(UObject* WorldContextObject) {
    return FVector2D{};
}

void ULibDisplay::GetFullscreenResolutions(TArray<FIntPoint>& Resolutions) {
}

TEnumAsByte<EWindowMode::Type> ULibDisplay::GetCurrentWindowMode() {
    return EWindowMode::Fullscreen;
}

FIntPoint ULibDisplay::GetCurrentScreenResolutionFromConfig() {
    return FIntPoint{};
}

FIntPoint ULibDisplay::GetCurrentScreenResolutionEx() {
    return FIntPoint{};
}

FIntPoint ULibDisplay::GetCurrentScreenResolution() {
    return FIntPoint{};
}

float ULibDisplay::GetCurrentFPS() {
    return 0.0f;
}

bool ULibDisplay::DisplayLog() {
    return false;
}


