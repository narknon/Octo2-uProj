#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EDBNoticeType.h"
#include "FlagOverrideUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UFlagOverrideUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UFlagOverrideUtility();
    UFUNCTION(BlueprintCallable)
    static void NotifyFlagOverrideDB(FName dbName, EDBNoticeType notice);
    
};

