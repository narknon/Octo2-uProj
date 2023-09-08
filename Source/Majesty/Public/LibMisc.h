#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELogErrorType.h"
#include "LibMisc.generated.h"

class AActor;
class APlayerController;
class UActorComponent;
class UObject;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class MAJESTY_API ULibMisc : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibMisc();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorByClassAssetId(UObject* WorldContextObject, const TSoftClassPtr<UObject>& classAssetId, const FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    static void SortNameArrayInt64Order(UPARAM(Ref) TArray<FName>& nameArray, UPARAM(Ref) TArray<int64>& orderArray, bool isAscending);
    
    UFUNCTION(BlueprintCallable)
    static void SortNameArrayByFloatOrder(UPARAM(Ref) TArray<FName>& nameArray, UPARAM(Ref) TArray<float>& orderArray, bool isAscending);
    
    UFUNCTION(BlueprintCallable)
    static void SortNameArray(UPARAM(Ref) TArray<FName>& nameArray, UPARAM(Ref) TArray<int32>& orderArray, bool isAscending);
    
    UFUNCTION(BlueprintCallable)
    static void SortIntArray(UPARAM(Ref) TArray<int32>& intArray, UPARAM(Ref) TArray<int32>& orderArray, bool isAscending);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetShowCollision(UObject* WorldContextObject, bool bShow);
    
    UFUNCTION(BlueprintCallable)
    static void SetGamma(float Value);
    
    UFUNCTION(BlueprintCallable)
    static void Reserve_NameArray(UPARAM(Ref) TArray<FName>& taregtArray, int32 Size);
    
    UFUNCTION(BlueprintCallable)
    static void Reserve_Map(const TMap<int32, int32>& TargetMap, int32 Size);
    
    UFUNCTION(BlueprintCallable)
    static void Reserve_IntArray(UPARAM(Ref) TArray<int32>& targetArray, int32 Size);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseSlateResource(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void PrintBPCallstack();
    
    UFUNCTION(BlueprintCallable)
    static void OutputMessageLog(ELogErrorType ErrorType, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void OutputLog(ELogErrorType ErrorType, const FString& Log, float TimeToDisplay);
    
    UFUNCTION(BlueprintCallable)
    static void LogError(const FString& Log, float TimeToDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDebugCameraRunning(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoftObjectPath GetSpriteAssetPath(const TSoftObjectPtr<UObject>& cSoftObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetShowCollision(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGamma();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetDataTableRowNum(const FString& AssetPath);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCommandLineValue(const FString& Key, bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* CreateUserWidgetByClassAssetId(APlayerController* OwningPlayer, const TSoftClassPtr<UObject>& classAssetId);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddActorComponent(AActor* cSelf, UClass* cActorComponentClass);
    
};

