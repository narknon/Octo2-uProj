#pragma once
#include "CoreMinimal.h"
#include "CharacterParamBeforeAfterData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterParamBeforeAfterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ParamText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeforeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AfterParam;
    
    MAJESTY_API FCharacterParamBeforeAfterData();
};

