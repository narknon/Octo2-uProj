#include "TimeZoneUtility.h"

UTimeZoneUtility::UTimeZoneUtility() {
}

bool UTimeZoneUtility::IsNightTime() {
    return false;
}

bool UTimeZoneUtility::IsDayTime() {
    return false;
}

ETimeZoneType UTimeZoneUtility::GetTimeZoneTypeBeforeLostWay() {
    return ETimeZoneType::NONE;
}

ETimeZoneType UTimeZoneUtility::GetCurrentTimeZoneType() {
    return ETimeZoneType::NONE;
}


