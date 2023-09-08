#pragma once
#include "CoreMinimal.h"
#include "AISACCtrlParam.generated.h"

USTRUCT(BlueprintType)
struct FAISACCtrlParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AISACName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fVolume;
    
    MAJESTY_API FAISACCtrlParam();
};

