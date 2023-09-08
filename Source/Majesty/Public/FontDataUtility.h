#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FontDataUtility.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class MAJESTY_API UFontDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFontDataUtility();
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetTalkFontStyleDB();
    
};

