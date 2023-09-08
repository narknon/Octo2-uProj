#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AcqUserObjectListEntry.generated.h"

UINTERFACE(MinimalAPI)
class UAcqUserObjectListEntry : public UUserObjectListEntry {
    GENERATED_BODY()
};

class IAcqUserObjectListEntry : public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScrolled();
    
};

