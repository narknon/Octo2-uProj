#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EKSSaveSlotName.h"
#include "ESaveDataLoadTarget.h"
#include "LoadGameDelegateDelegate.h"
#include "LoadSystemDataDelegateDelegate.h"
#include "SaveGameDelegateDelegate.h"
#include "SaveLoadFunction.generated.h"

class UKSSaveSystem;

UCLASS(Blueprintable)
class MAJESTY_API USaveLoadFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USaveLoadFunction();
    UFUNCTION(BlueprintCallable)
    static void Debug_SetIsForceSaveFailed(bool Val);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetIsForceAsyncSaveWaitTime(float Val);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetIsForceAsyncSave(bool Val);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetIsForceAsyncLoadWaitTime(float Val);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetIsForceAsyncLoad(bool Val);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_AcqSaveGameByFileName(const FString& Filename, const FSaveGameDelegate& SavedDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_AcqLoadGameByFileName(const FString& Filename, const FLoadGameDelegate& LoadedDelegate, ESaveDataLoadTarget LoadTarget);
    
    UFUNCTION(BlueprintCallable)
    static void AcqSaveSystemData(const FSaveGameDelegate& SavedDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void AcqSaveGame(EKSSaveSlotName SlotNo, const FSaveGameDelegate& SavedDelegate);
    
    UFUNCTION(BlueprintCallable)
    static UKSSaveSystem* AcqLoadSystemDataNoCallback(ESaveDataLoadTarget LoadTarget);
    
    UFUNCTION(BlueprintCallable)
    static void AcqLoadSystemData(const FLoadSystemDataDelegate& LoadedDelegate, ESaveDataLoadTarget LoadTarget);
    
    UFUNCTION(BlueprintCallable)
    static void AcqLoadGame(EKSSaveSlotName SlotNo, const FLoadGameDelegate& LoadedDelegate, ESaveDataLoadTarget LoadTarget);
    
};

