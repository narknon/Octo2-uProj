#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "GuildData.h"
#include "GuildDataUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UGuildDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UGuildDataUtility();
    UFUNCTION(BlueprintCallable)
    static void SetAcquiredJobLicense(int32 GuildId, int32 licenseIndex, bool bAcquired);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAcquiredJobLicense(int32 GuildId, int32 licenseIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetGuildDataByLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FGuildData& outGuildData, FName guildLabel);
    
    UFUNCTION(BlueprintCallable)
    static void FindGuildInWorldMapLocation(TArray<int32>& outGuildId, FName WorldMapLabel);
    
    UFUNCTION(BlueprintCallable)
    static void FindGuildDataByNpcLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FGuildData& outGuildData, FName NPCLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckAchievedJobLicense(int32 GuildId, int32 licenseIndex);
    
};

