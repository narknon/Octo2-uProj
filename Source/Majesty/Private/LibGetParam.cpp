#include "LibGetParam.h"

ULibGetParam::ULibGetParam() {
}

bool ULibGetParam::GetGameParamToVector4(FVector4& OutData, FName RowName, bool LogEnable) {
    return false;
}

bool ULibGetParam::GetGameParamToVector2D(FVector2D& OutData, FName RowName, bool LogEnable) {
    return false;
}

bool ULibGetParam::GetGameParamToVector(FVector& OutData, FName RowName, bool LogEnable) {
    return false;
}

void ULibGetParam::GetGameParamToInt(FName RowName, int32& Min, int32& Max, int32& Init, int32& Param) {
}

bool ULibGetParam::GetGameParamToFName(FName& Min, FName& Max, FName& Init, FName& Param, FName RowName, bool LogEnable) {
    return false;
}

void ULibGetParam::GetGameParamToFloatV4(FName RowName, FVector4& OutParams) {
}

void ULibGetParam::GetGameParamToFloat(FName RowName, float& Min, float& Max, float& Init, float& Param) {
}

void ULibGetParam::GetGameParamOnlyToInt(FName RowName, int32& Param) {
}

float ULibGetParam::GetGameParamOnlyToFloat(const FName& RowName) {
    return 0.0f;
}

bool ULibGetParam::GetGameParamMinToInt32(int32& OutData, FName RowName, bool LogEnable) {
    return false;
}

bool ULibGetParam::GetGameParamMaxToInt32(int32& OutData, FName RowName, bool LogEnable) {
    return false;
}

bool ULibGetParam::GetGameParamDataToGuid(FGuid& OutData, FName RowName, bool LogEnable) {
    return false;
}

bool ULibGetParam::GetBattleParamMinToInt32(int32& OutData, FName RowName, bool LogEnable) {
    return false;
}

bool ULibGetParam::GetBattleParamMaxToInt32(int32& OutData, FName RowName, bool LogEnable) {
    return false;
}

bool ULibGetParam::GetBattleParamDataToGuid(FGuid& OutData, FName RowName, bool LogEnable) {
    return false;
}


