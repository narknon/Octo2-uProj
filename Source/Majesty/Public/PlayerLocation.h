#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKSCharacterDir.h"
#include "PlayerLocation.generated.h"

USTRUCT(BlueprintType)
struct FPlayerLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName levelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 levelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RecentLevelTriggerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterDir Dir;
    
    MAJESTY_API FPlayerLocation();
};

