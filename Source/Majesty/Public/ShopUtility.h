#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESHOP_CATEGORY_TYPE.h"
#include "ItemData.h"
#include "MJListWidgetItemData.h"
#include "PurchaseItemInfoData.h"
#include "ShopUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UShopUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UShopUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLineUpItemInShop(const FPurchaseItemInfoData& purchaseItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESHOP_CATEGORY_TYPE GetShopCategoryByItemData(const FItemData& ItemData);
    
    UFUNCTION(BlueprintCallable)
    static void CreateShopItemListDataForAnimalShop(const FName& ShopLabel, TArray<FMJListWidgetItemData>& outListWidgetDataList, TArray<FName>& outItemLabelList, TArray<FPurchaseItemInfoData>& outPurchaseItemDataList);
    
    UFUNCTION(BlueprintCallable)
    static void CreateShopItemListData(const FName& ShopLabel, TArray<FMJListWidgetItemData>& outListWidgetDataList, TArray<FName>& outItemLabelList, TArray<FPurchaseItemInfoData>& outPurchaseItemDataList);
    
};

