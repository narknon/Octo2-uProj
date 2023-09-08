#include "ShopUtility.h"

UShopUtility::UShopUtility() {
}

bool UShopUtility::IsLineUpItemInShop(const FPurchaseItemInfoData& purchaseItemData) {
    return false;
}

ESHOP_CATEGORY_TYPE UShopUtility::GetShopCategoryByItemData(const FItemData& ItemData) {
    return ESHOP_CATEGORY_TYPE::eAll;
}

void UShopUtility::CreateShopItemListDataForAnimalShop(const FName& ShopLabel, TArray<FMJListWidgetItemData>& outListWidgetDataList, TArray<FName>& outItemLabelList, TArray<FPurchaseItemInfoData>& outPurchaseItemDataList) {
}

void UShopUtility::CreateShopItemListData(const FName& ShopLabel, TArray<FMJListWidgetItemData>& outListWidgetDataList, TArray<FName>& outItemLabelList, TArray<FPurchaseItemInfoData>& outPurchaseItemDataList) {
}


