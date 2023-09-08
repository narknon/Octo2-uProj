#pragma once
#include "CoreMinimal.h"
#include "CharacterCostumeInfo.generated.h"

USTRUCT(BlueprintType)
struct MAJESTY_API FCharacterCostumeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResourceLabel;
    
    FCharacterCostumeInfo();
};

