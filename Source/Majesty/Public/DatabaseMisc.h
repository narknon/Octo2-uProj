#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DatabaseMisc.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UDatabaseMisc : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDatabaseMisc();
    UFUNCTION(BlueprintCallable)
    static void SetDatabaseNoticeDelegate();
    
};

