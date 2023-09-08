#include "GiftUtility.h"

UGiftUtility::UGiftUtility() {
}

bool UGiftUtility::TryReceiveGift(const FGiftData& GIFT, TArray<FName>& outFailedReceiveItems) {
    return false;
}

bool UGiftUtility::GetIsPreOrdered() {
    return false;
}

bool UGiftUtility::GetAvailablePreOrderGiftData(FGiftData& OutData) {
    return false;
}

void UGiftUtility::Debug_SetIsForcePreOrdered(bool Val) {
}


