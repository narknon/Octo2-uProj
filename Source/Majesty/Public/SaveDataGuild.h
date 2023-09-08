#pragma once
#include "CoreMinimal.h"
#include "SaveDataGuild.generated.h"

USTRUCT(BlueprintType)
struct FSaveDataGuild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GuildId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcquiredLicense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Visited;
    
    MAJESTY_API FSaveDataGuild();
};

