#include "ItemSaveDataUtil.h"

UItemSaveDataUtil::UItemSaveDataUtil() {
}

void UItemSaveDataUtil::SetSoldOutShopItemDataByLabel(const FName& purchaseItemLabel, const FSoldOutShopItemData& Data) {
}

void UItemSaveDataUtil::SetSoldOutShopItemDataById(int32 purchaseItemId, const FSoldOutShopItemData& Data) {
}

bool UItemSaveDataUtil::IsSoldOutShopItemByLabel(const FName& purchaseItemLabel) {
    return false;
}

bool UItemSaveDataUtil::IsSoldOutShopItemById(int32 purchaseItemId) {
    return false;
}

void UItemSaveDataUtil::GetSortedBackpackItemsForSale(TArray<FBackPackItemData>& outItems) {
}

void UItemSaveDataUtil::GetSortedBackpackItemsForBattle(TArray<FBackPackItemData>& outItems) {
}

void UItemSaveDataUtil::GetSortedBackpackItems(TArray<FBackPackItemData>& outItems) {
}

int32 UItemSaveDataUtil::GetMeetNum() {
    return 0;
}

int32 UItemSaveDataUtil::GetItemNumInBackpackByLabel(const FName& ItemLabel) {
    return 0;
}

int32 UItemSaveDataUtil::GetItemNumInBackpackById(const int32 ID) {
    return 0;
}

void UItemSaveDataUtil::GetItemAcquisitionHistory(TArray<int32>& outHistory) {
}

void UItemSaveDataUtil::GetBackpackItems(TArray<FBackPackItemData>& outItems) {
}


