#include "WorldMapFunction.h"

UWorldMapFunction::UWorldMapFunction() {
}

float UWorldMapFunction::RoundByDigit(float A, int32 Digit) {
    return 0.0f;
}

FRotator UWorldMapFunction::RotatorTo360(const FRotator& rot) {
    return FRotator{};
}

FVector2D UWorldMapFunction::LerpVector2D(const FVector2D& Start, const FVector2D& End, const float& Alpha) {
    return FVector2D{};
}

FFrameTime UWorldMapFunction::LerpFrameTime(const FFrameTime& Start, const FFrameTime& End, const float& Alpha) {
    return FFrameTime{};
}

bool UWorldMapFunction::IsVisitedLocation(UObject* WorldContextObject, const FWorldMapTable& WorldMapData) {
    return false;
}

bool UWorldMapFunction::IsCurrentLocation(const FWorldMapTable& WorldMapData) {
    return false;
}

FFrameTime UWorldMapFunction::GetMarkedFrameNumberByLabel(const UMovieSceneSequence* MovieSceneSequence, const FString& InLabel, bool& IsFound, float& AsSeconds) {
    return FFrameTime{};
}

void UWorldMapFunction::Debug_SetIsFlatEarthMode(bool Val) {
}

void UWorldMapFunction::Debug_SetIsDrawDebugLine(bool Val) {
}

bool UWorldMapFunction::Debug_GetIsFlatEarthMode() {
    return false;
}

bool UWorldMapFunction::Debug_GetIsDrawDebugLine() {
    return false;
}

bool UWorldMapFunction::ConvertWorldPosToWidgetPosForZoom(UObject* WorldContextObject, const FVector& WorldPos, FVector2D& outWidgetPos) {
    return false;
}

bool UWorldMapFunction::ConvertWorldPosToWidgetPosForIcon(UObject* WorldContextObject, const FVector& WorldPos, FVector2D& outWidgetPos) {
    return false;
}

bool UWorldMapFunction::ConvertWidgetPosToWorldPosOnWorldMapForZoom(UObject* WorldContextObject, const FVector2D& WidgetPos, FVector& outWorldPos, bool IsDebugDraw) {
    return false;
}

bool UWorldMapFunction::CanDisplayLocation(UObject* WorldContextObject, const FWorldMapTable& WorldMapData) {
    return false;
}


