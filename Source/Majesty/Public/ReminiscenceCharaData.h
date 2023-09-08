#pragma once
#include "CoreMinimal.h"
#include "EPlayableCharacterID.h"
#include "ReminiscenceCharaData.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceCharaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayableCharacterID StartCharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayableCharacterID MergeCharaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    MAJESTY_API FReminiscenceCharaData();
};

