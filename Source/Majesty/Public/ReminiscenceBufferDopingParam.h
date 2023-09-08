#pragma once
#include "CoreMinimal.h"
#include "CharacterParam.h"
#include "ReminiscenceBufferBase.h"
#include "ReminiscenceBufferDopingParam.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceBufferDopingParam : public FReminiscenceBufferBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterParam> Org_DopingParam;
    
public:
    MAJESTY_API FReminiscenceBufferDopingParam();
};

