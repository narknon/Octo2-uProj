#include "LibAsset.h"

ULibAsset::ULibAsset() {
}

bool ULibAsset::LevelExists(const FString& AssetPath) {
    return false;
}

bool ULibAsset::AssetExistsFromSoftReference(const TSoftObjectPtr<UObject> softAssetData) {
    return false;
}

bool ULibAsset::AssetExists(const FString& AssetPath) {
    return false;
}


