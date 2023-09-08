#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AilmentHandler.h"
#include "EATTRIBUTE_TYPE.h"
#include "EBATTLE_TARGET_TYPE.h"
#include "EBPFuncReturnCode.h"
#include "EDBNoticeType.h"
#include "EEquipmentCategory.h"
#include "EITEM_DISPLAY_TYPE.h"
#include "EItemCategoryData.h"
#include "ESPECIAL_ITEM_TYPE.h"
#include "EquipmentCategoryBase.h"
#include "ItemCategory.h"
#include "ItemData.h"
#include "ItemIconText.h"
#include "SaveEquipmentData.h"
#include "SaveEquipmentDataID.h"
#include "SpecialItemData.h"
#include "ItemDataUtility.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class MAJESTY_API UItemDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemDataUtility();
    UFUNCTION(BlueprintCallable)
    static void SaveEquipmentDataLabelToId(const FSaveEquipmentData& saveEquipDataLabel, UPARAM(Ref) FSaveEquipmentDataID& outSaveEquipDataId);
    
    UFUNCTION(BlueprintCallable)
    static void SaveEquipmentDataIdToLabel(const FSaveEquipmentDataID& saveEquipDataId, UPARAM(Ref) FSaveEquipmentData& outSaveEquipDataLabel);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyItemDataDB(FName dbName, EDBNoticeType notice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ItemLabelToID(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ItemIDToLabel(int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsableSpecialItemInMenu(FName spItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSpecialItem(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMeatItem(FName spItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemExistsInDB(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHolyTorchItem(FName spItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDisplaySpecialItemInMenuByLabel(FName spItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDisplaySpecialItemInMenu(const FSpecialItemData& specialItem);
    
    UFUNCTION(BlueprintCallable)
    static void GetSpesialItemDataByItemLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSpecialItemData& outSpItemData, FName ItemLabel);
    
    UFUNCTION(BlueprintCallable)
    static void GetSpesialItemData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSpecialItemData& outSpItemData, FName spItemLabel);
    
    UFUNCTION(BlueprintCallable)
    static void GetSpecialItemLabelList(ESPECIAL_ITEM_TYPE spType, TArray<FName>& outList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBATTLE_TARGET_TYPE GetItemTarget(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemPossesionMaxTableByCategory(TMap<EItemCategoryData, int32>& outMaxTable);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetItemPossesionMaxByItemLabel(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetItemPossesionMaxByItemId(int32 ItemId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetItemPossesionMaxByCategory(EItemCategoryData Category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetItemNameTextWithIcon(FText& outItemName, FName ItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetItemNameText(FText& outItemName, FName ItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetItemNameID(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemMaxNum(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemLabelTextList(UPARAM(Ref) TArray<FText>& outLabelList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetItemLabelList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemID(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemFontData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FItemIconText& outItemFontTextData, FName itemIconTextLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetItemEquipmentTextureLabel(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EEquipmentCategory GetItemEquipmentCategory(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EITEM_DISPLAY_TYPE GetItemDisplayType(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetItemDetailTextID(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemDataByItemID(UPARAM(Ref) FItemData& outItemData, int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetItemData(FItemData& outItemData, FName ItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetItemCommandEffecter(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemCategoryDataByEnum(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FItemCategory& outItemCategoryData, EItemCategoryData ItemCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EItemCategoryData GetItemCategory(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EATTRIBUTE_TYPE GetItemAttribute(FName ItemLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemAilment(UPARAM(Ref) TArray<FAilmentHandler>& outAilment, FName ItemLabel);
    
    UFUNCTION(BlueprintCallable)
    static void GetEquipmentCategoryDataByEnum(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FEquipmentCategoryBase& outEquipCategoryData, EEquipmentCategory equipCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName EquipmentCategoryIDToLabel(int32 equipCategoryID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckItemCategory(FName ItemLabel, EItemCategoryData Category);
    
};

