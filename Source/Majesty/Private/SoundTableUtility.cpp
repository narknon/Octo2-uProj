#include "SoundTableUtility.h"

USoundTableUtility::USoundTableUtility() {
}

bool USoundTableUtility::GetVoiceJaRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSoundVoiceData& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

bool USoundTableUtility::GetVoiceEnRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSoundVoiceData& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

bool USoundTableUtility::GetSoundTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames, ESoundTableType Type) {
    return false;
}

bool USoundTableUtility::GetSeRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSoundSEData& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

bool USoundTableUtility::GetCueSheetRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FKSCueSheetData& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}

bool USoundTableUtility::GetBgmRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FBgmInfoData& OutData, FName TargetLabel, bool LogEnable) {
    return false;
}


