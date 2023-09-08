#include "NarrationDataTableUtility.h"

UNarrationDataTableUtility::UNarrationDataTableUtility() {
}

int32 UNarrationDataTableUtility::NarrationDataLabelToID(FName NarrationDataLabel) {
    return 0;
}

FName UNarrationDataTableUtility::NarrationDataIDToLabel(int32 NarrationDataID) {
    return NAME_None;
}

bool UNarrationDataTableUtility::GetNarrationDataRowNames(TArray<FName>& OutRowNames) {
    return false;
}

bool UNarrationDataTableUtility::GetNarrationData(FName RowName, FNarrationDataBase& outRowData) {
    return false;
}


