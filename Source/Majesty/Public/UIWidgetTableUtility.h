#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBPFuncReturnCode.h"
#include "UIWidgetReferenceData.h"
#include "UIWidgetTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UUIWidgetTableUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIWidgetTableUtility();
    UFUNCTION(BlueprintCallable)
    static void GetWidgetDataFromName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FUIWidgetReferenceData& OutWidgetData, FName Label);
    
};

