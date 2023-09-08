#pragma once
#include "CoreMinimal.h"
#include "EPlayableCharacterID.h"
#include "CharacterGridPanelParam.generated.h"

USTRUCT(BlueprintType)
struct FCharacterGridPanelParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayableCharacterID PlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGrayOut;
    
    MAJESTY_API FCharacterGridPanelParam();
};

