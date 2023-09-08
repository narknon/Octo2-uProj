#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EKSKeyConfigElement.h"
#include "EKSSaveDataFlagType.h"
#include "EKSSaveDataParamType.h"
#include "EKSSaveSlotName.h"
#include "EKeyboardLayoutType.h"
#include "KSSaveSlotData.h"
#include "KSSysSaveData.h"
#include "MJActivitySaveData.h"
#include "KSSaveSystem.generated.h"

class UKSSaveSystem;

UCLASS(Blueprintable)
class MAJESTY_API UKSSaveSystem : public USaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKSSysSaveData SystemSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKSSaveSlotData> SaveSlotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMJActivitySaveData ActivitySaveData;
    
public:
    UKSSaveSystem();
    UFUNCTION(BlueprintCallable)
    void SetSlotdata(EKSSaveSlotName SlotNo, FKSSaveSlotData slotData);
    
    UFUNCTION(BlueprintCallable)
    void SetParam(EKSSaveDataParamType ParamType, int32 Param);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyConfigParam(EKSKeyConfigElement ParamType, int32 Param);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardLayoutParam(EKeyboardLayoutType Param);
    
    UFUNCTION(BlueprintCallable)
    void SetFlag(EKSSaveDataFlagType flagType, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void MergeActivitySaveData(const UKSSaveSystem* Other);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSlotdata(EKSSaveSlotName SlotNo, FKSSaveSlotData& outSlotData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetParamArray(TArray<int32>& outParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetParam(EKSSaveDataParamType ParamType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKeyConfigParamArray(TArray<int32>& outParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKeyConfigParam(EKSKeyConfigElement ParamType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKeyboardLayoutType GetKeyboardLayoutParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFlagArray(TArray<int32>& outFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFlag(EKSSaveDataFlagType flagType) const;
    
    UFUNCTION(BlueprintCallable)
    void Debug_OutputAllData();
    
};

