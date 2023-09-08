#include "SpecialActionDataUtility.h"

USpecialActionDataUtility::USpecialActionDataUtility() {
}

int32 USpecialActionDataUtility::SpecialActionLabelToID(FName Label) {
    return 0;
}

FName USpecialActionDataUtility::SpecialActionIDToLabel(int32 ID) {
    return NAME_None;
}

bool USpecialActionDataUtility::GetSpecialActionTableRowDataByEnum(FSpecialActionData& OutData, ESpecialActionType SpecialActionType) {
    return false;
}

bool USpecialActionDataUtility::GetSpecialActionTableRowData(FSpecialActionData& OutData, FName Label) {
    return false;
}

bool USpecialActionDataUtility::GetProcessItemNumData(FProcessItemNum& OutData, int32 ID) {
    return false;
}

int32 USpecialActionDataUtility::GetProcessItemNum(int32 ID, int32 remainCallNum) {
    return 0;
}

int32 USpecialActionDataUtility::GetLegendSeaMonsterIndex(int32 Normal, int32 Awake, int32 awakeAfter) {
    return 0;
}

FName USpecialActionDataUtility::GetHunterPartnerMonsterLabelById(EHUNTER_PARTNER_ID partnerID, bool ignoreAwakening) {
    return NAME_None;
}

FName USpecialActionDataUtility::GetHunterPartnerMonsterLabel() {
    return NAME_None;
}

FName USpecialActionDataUtility::GetHunterPartnerActionLabelById(EHUNTER_PARTNER_ID partnerID) {
    return NAME_None;
}

FName USpecialActionDataUtility::GetHunterPartnerActionLabel() {
    return NAME_None;
}


