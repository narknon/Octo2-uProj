#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WorldMapTable.h"
#include "WorldMapFunction.generated.h"

class UMovieSceneSequence;
class UObject;

UCLASS(Blueprintable)
class MAJESTY_API UWorldMapFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWorldMapFunction();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RoundByDigit(float A, int32 Digit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator RotatorTo360(const FRotator& rot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D LerpVector2D(const FVector2D& Start, const FVector2D& End, const float& Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameTime LerpFrameTime(const FFrameTime& Start, const FFrameTime& End, const float& Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsVisitedLocation(UObject* WorldContextObject, const FWorldMapTable& WorldMapData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCurrentLocation(const FWorldMapTable& WorldMapData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFrameTime GetMarkedFrameNumberByLabel(const UMovieSceneSequence* MovieSceneSequence, const FString& InLabel, bool& IsFound, float& AsSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetIsFlatEarthMode(bool Val);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetIsDrawDebugLine(bool Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_GetIsFlatEarthMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_GetIsDrawDebugLine();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ConvertWorldPosToWidgetPosForZoom(UObject* WorldContextObject, const FVector& WorldPos, FVector2D& outWidgetPos);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ConvertWorldPosToWidgetPosForIcon(UObject* WorldContextObject, const FVector& WorldPos, FVector2D& outWidgetPos);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ConvertWidgetPosToWorldPosOnWorldMapForZoom(UObject* WorldContextObject, const FVector2D& WidgetPos, FVector& outWorldPos, bool IsDebugDraw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanDisplayLocation(UObject* WorldContextObject, const FWorldMapTable& WorldMapData);
    
};

