#include "ItemDataUtility.h"

UItemDataUtility::UItemDataUtility() {
}

void UItemDataUtility::SaveEquipmentDataLabelToId(const FSaveEquipmentData& saveEquipDataLabel, FSaveEquipmentDataID& outSaveEquipDataId) {
}

void UItemDataUtility::SaveEquipmentDataIdToLabel(const FSaveEquipmentDataID& saveEquipDataId, FSaveEquipmentData& outSaveEquipDataLabel) {
}

void UItemDataUtility::NotifyItemDataDB(FName dbName, EDBNoticeType notice) {
}

int32 UItemDataUtility::ItemLabelToID(FName ItemLabel) {
    return 0;
}

FName UItemDataUtility::ItemIDToLabel(int32 ItemId) {
    return NAME_None;
}

bool UItemDataUtility::IsUsableSpecialItemInMenu(FName spItemLabel) {
    return false;
}

bool UItemDataUtility::IsSpecialItem(FName ItemLabel) {
    return false;
}

bool UItemDataUtility::IsMeatItem(FName spItemLabel) {
    return false;
}

bool UItemDataUtility::IsItemExistsInDB(FName ItemLabel) {
    return false;
}

bool UItemDataUtility::IsHolyTorchItem(FName spItemLabel) {
    return false;
}

bool UItemDataUtility::IsDisplaySpecialItemInMenuByLabel(FName spItemLabel) {
    return false;
}

bool UItemDataUtility::IsDisplaySpecialItemInMenu(const FSpecialItemData& specialItem) {
    return false;
}

void UItemDataUtility::GetSpesialItemDataByItemLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSpecialItemData& outSpItemData, FName ItemLabel) {
}

void UItemDataUtility::GetSpesialItemData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSpecialItemData& outSpItemData, FName spItemLabel) {
}

void UItemDataUtility::GetSpecialItemLabelList(ESPECIAL_ITEM_TYPE spType, TArray<FName>& outList) {
}

EBATTLE_TARGET_TYPE UItemDataUtility::GetItemTarget(FName ItemLabel) {
    return EBATTLE_TARGET_TYPE::eSELF;
}

void UItemDataUtility::GetItemPossesionMaxTableByCategory(TMap<EItemCategoryData, int32>& outMaxTable) {
}

int32 UItemDataUtility::GetItemPossesionMaxByItemLabel(FName ItemLabel) {
    return 0;
}

int32 UItemDataUtility::GetItemPossesionMaxByItemId(int32 ItemId) {
    return 0;
}

int32 UItemDataUtility::GetItemPossesionMaxByCategory(EItemCategoryData Category) {
    return 0;
}

bool UItemDataUtility::GetItemNameTextWithIcon(FText& outItemName, FName ItemLabel) {
    return false;
}

bool UItemDataUtility::GetItemNameText(FText& outItemName, FName ItemLabel) {
    return false;
}

FName UItemDataUtility::GetItemNameID(FName ItemLabel) {
    return NAME_None;
}

int32 UItemDataUtility::GetItemMaxNum(FName ItemLabel) {
    return 0;
}

bool UItemDataUtility::GetItemLabelTextList(TArray<FText>& outLabelList) {
    return false;
}

TArray<FName> UItemDataUtility::GetItemLabelList() {
    return TArray<FName>();
}

int32 UItemDataUtility::GetItemID(FName ItemLabel) {
    return 0;
}

void UItemDataUtility::GetItemFontData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FItemIconText& outItemFontTextData, FName itemIconTextLabel) {
}

FName UItemDataUtility::GetItemEquipmentTextureLabel(FName ItemLabel) {
    return NAME_None;
}

EEquipmentCategory UItemDataUtility::GetItemEquipmentCategory(FName ItemLabel) {
    return EEquipmentCategory::eSWORD;
}

EITEM_DISPLAY_TYPE UItemDataUtility::GetItemDisplayType(FName ItemLabel) {
    return EITEM_DISPLAY_TYPE::eDISABLE;
}

FName UItemDataUtility::GetItemDetailTextID(FName ItemLabel) {
    return NAME_None;
}

bool UItemDataUtility::GetItemDataByItemID(FItemData& outItemData, int32 ItemId) {
    return false;
}

bool UItemDataUtility::GetItemData(FItemData& outItemData, FName ItemLabel) {
    return false;
}

UDataTable* UItemDataUtility::GetItemCommandEffecter(FName ItemLabel) {
    return NULL;
}

void UItemDataUtility::GetItemCategoryDataByEnum(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FItemCategory& outItemCategoryData, EItemCategoryData ItemCategory) {
}

EItemCategoryData UItemDataUtility::GetItemCategory(FName ItemLabel) {
    return EItemCategoryData::eCONSUMABLE;
}

EATTRIBUTE_TYPE UItemDataUtility::GetItemAttribute(FName ItemLabel) {
    return EATTRIBUTE_TYPE::eNONE;
}

bool UItemDataUtility::GetItemAilment(TArray<FAilmentHandler>& outAilment, FName ItemLabel) {
    return false;
}

void UItemDataUtility::GetEquipmentCategoryDataByEnum(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FEquipmentCategoryBase& outEquipCategoryData, EEquipmentCategory equipCategory) {
}

FName UItemDataUtility::EquipmentCategoryIDToLabel(int32 equipCategoryID) {
    return NAME_None;
}

bool UItemDataUtility::CheckItemCategory(FName ItemLabel, EItemCategoryData Category) {
    return false;
}


