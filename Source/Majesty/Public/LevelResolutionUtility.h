#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "LevelResolutioData.h"
#include "LevelResolutionUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class MAJESTY_API ULevelResolutionUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    ULevelResolutionUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetFixCurrentLevelResolution(const UObject* WorldContextObject, const FName& levelName);
    
    UFUNCTION(BlueprintCallable)
    static void GetLevelScreenParcentage(const FName& levelName, float& fSceenPercent, float& fSeparateTranslucencyScreenPercent);
    
    UFUNCTION(BlueprintCallable)
    static bool GetLevelResolutionLabelNames(TArray<FName>& OutData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetLevelResolution(FLevelResolutioData& OutData, FName TargetLabel, bool EnableLog);
    
};

