#include "TimeOperator.h"

UTimeOperator::UTimeOperator() {
    this->m_eTimeZoneType = ETimeZoneType::DAYTIME;
    this->m_eNextTimeZoneType = ETimeZoneType::DAYTIME;
    this->m_eDarkAreaState = ELEVEL_DARK_STATE::NORMAL;
    this->m_eTempTimeZoneType = ETimeZoneType::DAYTIME;
    this->m_pSequencer = NULL;
}

void UTimeOperator::SetTimeZoneChangeValueMax(const int32 nNewValue) {
}

void UTimeOperator::SetTimeZoneChangeValue(const int32 nNewValue) {
}

void UTimeOperator::SetManualAccelerationTime(const float fNewValue) {
}

void UTimeOperator::SetAutoAccelerationTime(const float fNewValue) {
}

ETimeZoneType UTimeOperator::IsNextTimeZoneCheck() {
    return ETimeZoneType::NONE;
}

int32 UTimeOperator::GetTimeZoneChangeValueMax() {
    return 0;
}

int32 UTimeOperator::GetTimeZoneChangeValue() {
    return 0;
}

bool UTimeOperator::GetReserveAutoChange() {
    return false;
}

float UTimeOperator::GetManualAccelerationTime() {
    return 0.0f;
}

ELEVEL_DARK_STATE UTimeOperator::GetDarkAreaState() {
    return ELEVEL_DARK_STATE::NORMAL;
}

float UTimeOperator::GetCurrentSeaquencerNormalizedTime() {
    return 0.0f;
}

float UTimeOperator::GetAutoAccelerationTime() {
    return 0.0f;
}


