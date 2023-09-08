#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemData.h"
#include "SaveBackPackItem.h"
#include "ItemUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UItemUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemUtility();
    UFUNCTION(BlueprintCallable)
    static void SortSaleItemByShopItemOrder(UPARAM(Ref) TArray<FSaveBackPackItem>& ItemList);
    
    UFUNCTION(BlueprintCallable)
    static void SortPurchaseItemByShopItemOrderForAnimalShop(UPARAM(Ref) TArray<FItemData>& ItemList);
    
    UFUNCTION(BlueprintCallable)
    static void SortPurchaseItemByShopItemOrder(UPARAM(Ref) TArray<FItemData>& ItemList);
    
    UFUNCTION(BlueprintCallable)
    static void SortItemByIdAndPriority(UPARAM(Ref) TArray<FSaveBackPackItem>& ItemList);
    
    UFUNCTION(BlueprintCallable)
    static void SortBattleItemById(UPARAM(Ref) TArray<FSaveBackPackItem>& ItemList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMusicRecord(const FName& ItemLabel);
    
    UFUNCTION(BlueprintPure)
    static int64 CalcShopItemOrder(int64 ItemId, int64 SortCategory, int64 itemPrice);
    
};

