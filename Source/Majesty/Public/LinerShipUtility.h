#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "LinerShipRouteData.h"
#include "LinerShipUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ULinerShipUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    ULinerShipUtility();
    UFUNCTION(BlueprintCallable)
    static void GetRouteDataByLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FLinerShipRouteData& outRouteData, FName routeLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllRouteDataInTown(TArray<FLinerShipRouteData>& outRouteData, FName levelName, bool swapLevelAB);
    
};

