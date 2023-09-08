#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GiftData.h"
#include "GiftUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UGiftUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGiftUtility();
    UFUNCTION(BlueprintCallable)
    static bool TryReceiveGift(const FGiftData& GIFT, TArray<FName>& outFailedReceiveItems);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsPreOrdered();
    
    UFUNCTION(BlueprintCallable)
    static bool GetAvailablePreOrderGiftData(FGiftData& OutData);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetIsForcePreOrdered(bool Val);
    
};

