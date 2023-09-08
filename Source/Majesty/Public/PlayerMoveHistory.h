#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKSCharacterMoveMode.h"
#include "PlayerMoveHistory.generated.h"

USTRUCT(BlueprintType)
struct MAJESTY_API FPlayerMoveHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector vLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 nDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterMoveMode eMoveMode;
    
    FPlayerMoveHistory();
};

