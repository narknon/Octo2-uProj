#include "FieldCommandDataUtility.h"
#include "Templates/SubclassOf.h"

UFieldCommandDataUtility::UFieldCommandDataUtility() {
}

FName UFieldCommandDataUtility::GetFieldCommandStatusMenuIconLabel(MJFieldCommandType FCType) {
    return NAME_None;
}

FName UFieldCommandDataUtility::GetFieldCommandNameLabel(MJFieldCommandType FCType) {
    return NAME_None;
}

FName UFieldCommandDataUtility::GetFieldCommandIconLabel(MJFieldCommandType FCType) {
    return NAME_None;
}

bool UFieldCommandDataUtility::GetFieldCommandFlowClassType(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TSubclassOf<AFieldCommandFlowBase>& FlowClass, MJFieldCommandType FCType) {
    return false;
}

FName UFieldCommandDataUtility::GetFieldCommandDetailLabel(MJFieldCommandType FCType) {
    return NAME_None;
}

bool UFieldCommandDataUtility::GetFieldCommandDataByType(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FFieldCommandData& OutData, MJFieldCommandType FCType) {
    return false;
}

bool UFieldCommandDataUtility::GetFieldCommandDataByRowName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FFieldCommandData& OutData, FName RowName) {
    return false;
}

float UFieldCommandDataUtility::GetFieldCommandActionWaitTime(MJFieldCommandType FCType) {
    return 0.0f;
}


