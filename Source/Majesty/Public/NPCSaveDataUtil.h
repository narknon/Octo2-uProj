#pragma once
#include "CoreMinimal.h"
#include "ENpcSwoonType.h"
#include "NpcEventData.h"
#include "SaveDataUtilBase.h"
#include "NPCSaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UNPCSaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    UNPCSaveDataUtil();
    UFUNCTION(BlueprintCallable)
    static bool SetNPCTZChangeSwoonRevivalCount(int32 nNPCIndex, int32 nTimeZoneCnt);
    
    UFUNCTION(BlueprintCallable)
    static bool SetNPCSwoonFlag(FName NPCLabel, bool Flag, ENpcSwoonType SwoonType, int32& NPCIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool SetNPCEventData(int32 NPCID, FNpcEventData NpcEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSwoonNPC(FName NPCLabel);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNPCTZChangeSwoonRevivalCount(int32 nNPCIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetNPCEventDataByLabel(FName NPCLabel, FNpcEventData& NpcEventData, int32& NPCID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetNPCEventDataByID(int32 NPCID, FNpcEventData& Out);
    
    UFUNCTION(BlueprintCallable)
    static void DEBUG_ClearNpcPurchasedItems(FName NPCLabel);
    
    UFUNCTION(BlueprintCallable)
    static void DEBUG_ClearNpcHearFlag(FName NPCLabel);
    
    UFUNCTION(BlueprintCallable)
    static void DEBUG_ClearAllNpcPurchasedItems();
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> DEBUG_ClearAllNpcHearFlag();
    
};

