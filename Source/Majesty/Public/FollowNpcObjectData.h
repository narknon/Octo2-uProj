#pragma once
#include "CoreMinimal.h"
#include "MJFieldCommandType.h"
#include "FollowNpcObjectData.generated.h"

class AKSCharacterBase;

USTRUCT(BlueprintType)
struct MAJESTY_API FFollowNpcObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    MJFieldCommandType FieldCommandType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKSCharacterBase* FollowCharacter;
    
    FFollowNpcObjectData();
};

