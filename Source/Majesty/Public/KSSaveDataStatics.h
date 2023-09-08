#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EKSKeyConfigElement.h"
#include "EKSSaveDataFlagType.h"
#include "EKSSaveDataParamType.h"
#include "EKSSaveSlotName.h"
#include "ESaveDataLoadTarget.h"
#include "SaveGameDelegateDelegate.h"
#include "KSSaveDataStatics.generated.h"

class UKSSaveSystem;
class UMJSaveData;
class UObject;

UCLASS(Blueprintable)
class MAJESTY_API UKSSaveDataStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKSSaveDataStatics();
    UFUNCTION(BlueprintCallable)
    static bool StartAutoSave(const FSaveGameDelegate& AutoSavedDelegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSysSaveDataParam(UObject* WorldContextObject, EKSSaveDataParamType ParamType, int32 Param);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSysSaveDataKeyConfigParam(UObject* WorldContextObject, EKSKeyConfigElement ParamType, int32 Param);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSysSaveDataFlag(UObject* WorldContextObject, EKSSaveDataFlagType flagType, bool Flag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSysSaveData(UObject* WorldContextObject, UKSSaveSystem* sysSaveData);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextLoadTarget(ESaveDataLoadTarget Target);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGameSaveData(UObject* WorldContextObject, UMJSaveData* gameSaveData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDefaultOptionParam(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDefaultGraphicsOptionParam(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetActivitySubTaskStatus(int32 MainStoryId, int32 Status);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> ResizeArraywithBlank(TArray<int32> InputPin, int32 ReturnArrayLength, int32 InitValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString MakeSystemDataFileName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString MakeGameDataFileNameByEnum(EKSSaveSlotName SlotNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString MakeGameDataFileName(int32 SlotNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsVoiceLangJapanese(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoSaving();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetSysSaveDataParamArray(TArray<int32>& outParam, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSysSaveDataParam(UObject* WorldContextObject, EKSSaveDataParamType ParamType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetSysSaveDataKeyConfigArray(TArray<int32>& outParam, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetSysSaveDataFlagArray(TArray<int32>& outFlag, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetSysSaveDataFlag(UObject* WorldContextObject, EKSSaveDataFlagType flagType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKSSaveSystem* GetSysSaveData(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static ESaveDataLoadTarget GetNextLoadTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMJSaveData* GetGameSaveData(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentPlayTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetActivitySubTaskStatus(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesExistsTrialGameData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesExistsPS4GameData();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_OutputActivitySaveData();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_CheckContainerSizeInSaveData();
    
};

