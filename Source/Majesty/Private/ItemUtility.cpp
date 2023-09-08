#include "ItemUtility.h"

UItemUtility::UItemUtility() {
}

void UItemUtility::SortSaleItemByShopItemOrder(TArray<FSaveBackPackItem>& ItemList) {
}

void UItemUtility::SortPurchaseItemByShopItemOrderForAnimalShop(TArray<FItemData>& ItemList) {
}

void UItemUtility::SortPurchaseItemByShopItemOrder(TArray<FItemData>& ItemList) {
}

void UItemUtility::SortItemByIdAndPriority(TArray<FSaveBackPackItem>& ItemList) {
}

void UItemUtility::SortBattleItemById(TArray<FSaveBackPackItem>& ItemList) {
}

bool UItemUtility::IsMusicRecord(const FName& ItemLabel) {
    return false;
}

int64 UItemUtility::CalcShopItemOrder(int64 ItemId, int64 SortCategory, int64 itemPrice) {
    return 0;
}


