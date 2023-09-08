#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EColor.h"
#include "EGameColor.h"
#include "LibColor.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ULibColor : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibColor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToHtmlStringRGBA(const FColor& cColor, bool lower);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToHtmlString(uint8 Val, bool lower);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTextColorChangeCodeToGameColor(const FString& TargetSource, EGameColor ColorType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTextColorChangeCode(const FString& TargetSource, FColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetColor(EColor EColor);
    
};

