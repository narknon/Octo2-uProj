#pragma once
#include "CoreMinimal.h"
#include "WorldMapNameOverride.generated.h"

USTRUCT(BlueprintType)
struct FWorldMapNameOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EncounterLevelLabel;
    
    MAJESTY_API FWorldMapNameOverride();
};

