#pragma once
#include "CoreMinimal.h"
#include "LoadedObject.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MAJESTY_API FLoadedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedObject;
    
    FLoadedObject();
};

