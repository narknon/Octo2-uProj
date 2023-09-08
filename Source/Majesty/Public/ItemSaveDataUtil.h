#pragma once
#include "CoreMinimal.h"
#include "BackPackItemData.h"
#include "SaveDataUtilBase.h"
#include "SoldOutShopItemData.h"
#include "ItemSaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UItemSaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    UItemSaveDataUtil();
    UFUNCTION(BlueprintCallable)
    static void SetSoldOutShopItemDataByLabel(const FName& purchaseItemLabel, const FSoldOutShopItemData& Data);
    
    UFUNCTION(BlueprintCallable)
    static void SetSoldOutShopItemDataById(int32 purchaseItemId, const FSoldOutShopItemData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSoldOutShopItemByLabel(const FName& purchaseItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSoldOutShopItemById(int32 purchaseItemId);
    
    UFUNCTION(BlueprintCallable)
    static void GetSortedBackpackItemsForSale(TArray<FBackPackItemData>& outItems);
    
    UFUNCTION(BlueprintCallable)
    static void GetSortedBackpackItemsForBattle(TArray<FBackPackItemData>& outItems);
    
    UFUNCTION(BlueprintCallable)
    static void GetSortedBackpackItems(TArray<FBackPackItemData>& outItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMeetNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemNumInBackpackByLabel(const FName& ItemLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemNumInBackpackById(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemAcquisitionHistory(TArray<int32>& outHistory);
    
    UFUNCTION(BlueprintCallable)
    static void GetBackpackItems(TArray<FBackPackItemData>& outItems);
    
};

