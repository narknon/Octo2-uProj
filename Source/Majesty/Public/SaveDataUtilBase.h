#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveDataUtilBase.generated.h"

class UMJSaveData;

UCLASS(Blueprintable)
class MAJESTY_API USaveDataUtilBase : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USaveDataUtilBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMJSaveData* GetSaveData();
    
};

