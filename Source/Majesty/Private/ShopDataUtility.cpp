#include "ShopDataUtility.h"

UShopDataUtility::UShopDataUtility() {
}

bool UShopDataUtility::GetShopTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames, EShopDataType Type) {
    return false;
}

bool UShopDataUtility::GetShopListRowData(FLabelListData& OutData, FName TargetLabel) {
    return false;
}

bool UShopDataUtility::GetShopInfoRowDataByID(FShopInfoData& OutData, int32 TargetID) {
    return false;
}

bool UShopDataUtility::GetShopInfoRowData(FShopInfoData& OutData, FName TargetLabel) {
    return false;
}

bool UShopDataUtility::GetPurchaseItemRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FPurchaseItemInfoData& OutData, int32 TargetID) {
    return false;
}

bool UShopDataUtility::GetPurchaseItemRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FPurchaseItemInfoData& OutData, FName TargetLabel) {
    return false;
}

FName UShopDataUtility::GetPurchaseItemLabelById(int32 ID) {
    return NAME_None;
}

int32 UShopDataUtility::GetPurchaseItemIdByLable(const FName& Label) {
    return 0;
}


