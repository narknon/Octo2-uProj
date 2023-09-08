#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LoadAssetHandle.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ULoadAssetHandle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedObjects;
    
public:
    ULoadAssetHandle();
    UFUNCTION(BlueprintCallable)
    void CallLoadFinish();
    
    UFUNCTION(BlueprintCallable)
    void Callback(TArray<UObject*>& NewLoadedObjects);
    
};

