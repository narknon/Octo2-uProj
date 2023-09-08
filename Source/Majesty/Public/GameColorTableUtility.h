#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
#include "DataTableUtilityBase.h"
#include "EDBNoticeType.h"
#include "EGameColor.h"
#include "GameColorTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UGameColorTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UGameColorTableUtility();
    UFUNCTION(BlueprintCallable)
    static void NotifyGameColorDb(FName dbName, EDBNoticeType notice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGameColorAsSlateColor(EGameColor gameColor, FSlateColor& outSlateColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetGameColor(EGameColor gameColor);
    
};

