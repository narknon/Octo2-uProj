#pragma once
#include "CoreMinimal.h"
#include "PaperSprite.h"
#include "MJSpriteSocketData.generated.h"

USTRUCT(BlueprintType)
struct FMJSpriteSocketData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPaperSpriteSocket> SocketList;
    
    MAJESTY_API FMJSpriteSocketData();
};

