#include "WorldMapIconDataUtility.h"

UWorldMapIconDataUtility::UWorldMapIconDataUtility() {
}

void UWorldMapIconDataUtility::NotifyWorldMapIconDb(FName dbName, EDBNoticeType notice) {
}

FName UWorldMapIconDataUtility::GetWorldMapIconTextureLabel(EWorldMapIconType icnoType) {
    return NAME_None;
}

FWorldMapIconData UWorldMapIconDataUtility::GetWorldMapIconDataByType(EWorldMapIconType icnoType) {
    return FWorldMapIconData{};
}

bool UWorldMapIconDataUtility::GetIsWorldMapIconVisibe(EWorldMapIconType icnoType, EWorldMapZoomType ZoomType) {
    return false;
}


