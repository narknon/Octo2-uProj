#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "FastTravelChangeDestination.h"
#include "FastTravelChangeDestTableUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UFastTravelChangeDestTableUtil : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UFastTravelChangeDestTableUtil();
    UFUNCTION(BlueprintCallable)
    static bool GetChangedDestinationByEventFlag(FName levelLabel, FFastTravelChangeDestination& NewDestination);
    
};

