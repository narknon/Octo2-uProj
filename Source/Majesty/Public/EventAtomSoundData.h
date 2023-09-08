#pragma once
#include "CoreMinimal.h"
#include "EventAtomSoundData.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FEventAtomSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    USoundAtomCue* uAtomCue;
    
    MAJESTY_API FEventAtomSoundData();
};

