#pragma once
#include "CoreMinimal.h"
#include "FontItemData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FFontItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> FontObjList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Loaded;
    
    MAJESTY_API FFontItemData();
};

