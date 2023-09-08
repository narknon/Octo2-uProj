#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KSDebugMenuStatics.generated.h"

class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class MAJESTY_API UKSDebugMenuStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKSDebugMenuStatics();
    UFUNCTION(BlueprintCallable)
    static void NextBattleCalcText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOutputPlayerAnimLog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOutputOtherAnimLog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLevelTriggerIntercept();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDisableEmotion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugMenuOpen();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetSpawnNpcListFromTextFile();
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlacementLabelsForDebug(TArray<FName>& PlacementLabels, TArray<FText>& PlacementLabels_FText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetEventFalgLabel(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDebugMenuSortList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetDebugDrawCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUserWidget* GetCurrentDebugMenuWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBattleCalcText(int32 nIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool ExportUObjectAsJson(const UObject* Obj, FString& outExportedFilePath);
    
    UFUNCTION(BlueprintCallable)
    static void ExportTextFile(const FString& FilePath, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static bool ExportSaveData(const UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    static void DebugDrawSwitch();
    
    UFUNCTION(BlueprintCallable)
    static void CloseDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    static void ClearBattleCalcText();
    
    UFUNCTION(BlueprintCallable)
    static void AppendBattleCalcText(const FString& pushText);
    
};

