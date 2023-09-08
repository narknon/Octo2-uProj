#pragma once
#include "CoreMinimal.h"
#include "SubSeqData.generated.h"

class ALevelSequenceActor;

USTRUCT(BlueprintType)
struct FSubSeqData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    ALevelSequenceActor* Sequence;
    
    MAJESTY_API FSubSeqData();
};

