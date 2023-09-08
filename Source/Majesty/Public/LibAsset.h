#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LibAsset.generated.h"

class UObject;

UCLASS(Blueprintable)
class ULibAsset : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibAsset();
    UFUNCTION(BlueprintCallable)
    static bool LevelExists(const FString& AssetPath);
    
    UFUNCTION(BlueprintCallable)
    static bool AssetExistsFromSoftReference(const TSoftObjectPtr<UObject> softAssetData);
    
    UFUNCTION(BlueprintCallable)
    static bool AssetExists(const FString& AssetPath);
    
};

