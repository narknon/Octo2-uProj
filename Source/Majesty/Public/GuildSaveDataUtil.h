#pragma once
#include "CoreMinimal.h"
#include "SaveDataUtilBase.h"
#include "GuildSaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UGuildSaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    UGuildSaveDataUtil();
    UFUNCTION(BlueprintCallable)
    static void SetVisitedGuild(int32 GuildId, bool bVisited);
    
    UFUNCTION(BlueprintCallable)
    static void SetAcquiredLicense(int32 GuildId, int32 licenseIndex, bool bAcquired);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVisitedGuild(int32 GuildId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAcquiredLicense(int32 GuildId, int32 licenseIndex);
    
};

