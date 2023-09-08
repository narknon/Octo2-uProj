#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EDBNoticeType.h"
#include "EWorldMapIconType.h"
#include "EWorldMapZoomType.h"
#include "WorldMapIconData.h"
#include "WorldMapIconDataUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UWorldMapIconDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UWorldMapIconDataUtility();
    UFUNCTION(BlueprintCallable)
    static void NotifyWorldMapIconDb(FName dbName, EDBNoticeType notice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetWorldMapIconTextureLabel(EWorldMapIconType icnoType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FWorldMapIconData GetWorldMapIconDataByType(EWorldMapIconType icnoType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsWorldMapIconVisibe(EWorldMapIconType icnoType, EWorldMapZoomType ZoomType);
    
};

