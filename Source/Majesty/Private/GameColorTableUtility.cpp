#include "GameColorTableUtility.h"

UGameColorTableUtility::UGameColorTableUtility() {
}

void UGameColorTableUtility::NotifyGameColorDb(FName dbName, EDBNoticeType notice) {
}

void UGameColorTableUtility::GetGameColorAsSlateColor(EGameColor gameColor, FSlateColor& outSlateColor) {
}

FLinearColor UGameColorTableUtility::GetGameColor(EGameColor gameColor) {
    return FLinearColor{};
}


