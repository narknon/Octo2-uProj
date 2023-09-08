#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBPFuncReturnCode.h"
#include "ELevelTriggerID.h"
#include "LevelInfoData.h"
#include "LevelTriggerParams.h"
#include "LevelTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ULevelTableUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelTableUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MakeLevelTriggerLabel(FName levelName, ELevelTriggerID TriggerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LevelLabelToID(FName levelLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LevelIDToLabel(int32 levelId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSeaLevel(FName levelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInGameLevel(const FLevelInfoData& levelData);
    
    UFUNCTION(BlueprintCallable)
    static void GetLevelTriggerParamsByRowName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FLevelTriggerParams& outLevelTrgData, FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELevelTriggerID GetLevelTriggerID(FName levelTriggerLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetLevelRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetLevelInfoDataByRowName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FLevelInfoData& outLevelData, FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetLevelInfoDataByLevelName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FLevelInfoData& outLevelData, FName levelName);
    
    UFUNCTION(BlueprintCallable)
    static void GetLevelInfoDataByLevelID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FLevelInfoData& outLevelData, int32 levelId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ExistsInLevelDb(FName levelLabel);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_OutputRegionVisited();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_OutputMapVisited();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_ContainsInLevelDB(FName levelName);
    
};

