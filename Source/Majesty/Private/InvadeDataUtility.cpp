#include "InvadeDataUtility.h"

UInvadeDataUtility::UInvadeDataUtility() {
}

int32 UInvadeDataUtility::InvadeDataLabelToId(FName Label) {
    return 0;
}

FName UInvadeDataUtility::InvadeDataIdToLabel(int32 ID) {
    return NAME_None;
}

bool UInvadeDataUtility::InvadeDataExistsByLabel(FName Label) {
    return false;
}

TArray<FName> UInvadeDataUtility::GetInvadeDataLabelList() {
    return TArray<FName>();
}

void UInvadeDataUtility::GetInvadeDataByLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FInvadeData& outInvadeData, FName Label) {
}


