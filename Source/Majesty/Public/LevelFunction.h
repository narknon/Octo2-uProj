#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "CameraLockParams.h"
#include "ELevelTriggerID.h"
#include "LEVEL_AREA_TYPE.h"
#include "PlayerLocation.h"
#include "LevelFunction.generated.h"

class AActor;
class ALevelTriggerActor;
class UObject;

UCLASS(Blueprintable)
class MAJESTY_API ULevelFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelFunction();
    UFUNCTION(BlueprintCallable)
    static FPlayerLocation MakeCurrentPlayerLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSameLevelArea(UObject* WorldContextObject, FVector Pos, LEVEL_AREA_TYPE AreaType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayableLevelChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetTimeZoneChangeSeLabelInCurrentLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FCameraLockParams GetLevelTriggerCameraLockParams(UObject* WorldContextObject, ELevelTriggerID LevelTriggerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static LEVEL_AREA_TYPE GetLevelArea(UObject* WorldContextObject, FVector CheckPos);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetLandObject(UObject* WorldContextObject, FVector StartLocation, float Length, AActor*& HitActor, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ALevelTriggerActor* FindLevelTriggerByTriggerId(UObject* WorldContextObject, ELevelTriggerID LevelTriggerID);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetExcludeSpecifiyMapVisited(bool bVisited, FName levelLabel);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetAllMapVisited(bool bVisited);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_GetAllMapLabels(TArray<FName>& OutMapLabels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static LEVEL_AREA_TYPE CheckContainedLevelArea(const FVector& CheckPos);
    
};

