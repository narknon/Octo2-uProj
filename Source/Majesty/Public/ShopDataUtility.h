#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "EShopDataType.h"
#include "LabelListData.h"
#include "PurchaseItemInfoData.h"
#include "ShopInfoData.h"
#include "ShopDataUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UShopDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UShopDataUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetShopTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames, EShopDataType Type);
    
    UFUNCTION(BlueprintCallable)
    static bool GetShopListRowData(FLabelListData& OutData, FName TargetLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetShopInfoRowDataByID(FShopInfoData& OutData, int32 TargetID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetShopInfoRowData(FShopInfoData& OutData, FName TargetLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPurchaseItemRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FPurchaseItemInfoData& OutData, int32 TargetID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPurchaseItemRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FPurchaseItemInfoData& OutData, FName TargetLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetPurchaseItemLabelById(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPurchaseItemIdByLable(const FName& Label);
    
};

