#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBPFuncReturnCode.h"
#include "EventListData.h"
#include "EventSoundData.h"
#include "EventTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UEventTableUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEventTableUtility();
    UFUNCTION(BlueprintCallable)
    static void GetEventSoundDataFromName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FEventSoundData& outEventSound, FName Label);
    
    UFUNCTION(BlueprintCallable)
    static void GetEventListDataFromName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FEventListData& outEventData, FName Label);
    
};

