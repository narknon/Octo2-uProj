#include "SpActMerchantUtility.h"

USpActMerchantUtility::USpActMerchantUtility() {
}

bool USpActMerchantUtility::MakeSpecialActionDataForMenu(FName spActLabel, FSpActionMerchant_MenuData& outSpActData) {
    return false;
}

FText USpActMerchantUtility::MakeDescriptionText(const FSpActionMerchant_Data& spActData) {
    return FText::GetEmpty();
}

void USpActMerchantUtility::GetSpActionTypeByLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSpActionMerchant_Type& outType, FName typeLabel) {
}

void USpActMerchantUtility::GetSpActionDataByNpcId(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSpActionMerchant_Data& OutData, int32 NPCID) {
}

void USpActMerchantUtility::GetSpActionDataByLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSpActionMerchant_Data& OutData, FName dataLabel) {
}

bool USpActMerchantUtility::ExecMerchantSpecialAction_WithoutNpc(FSpActMerchantResult& OutResult, ESPACT_MER_TRIGGER_TYPE Trigger, int32 originalPrice) {
    return false;
}

bool USpActMerchantUtility::ExecMerchantSpecialAction_WithNpc(FSpActMerchantResult& OutResult, int32 NPCID, ESPACT_MER_TRIGGER_TYPE Trigger, int32 originalPrice) {
    return false;
}

bool USpActMerchantUtility::CheckMerchantSpecialAction_WithoutNpc(ESPACT_MER_TRIGGER_TYPE Trigger) {
    return false;
}


