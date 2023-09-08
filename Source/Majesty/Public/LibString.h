#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LibString.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ULibString : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibString();
    UFUNCTION(BlueprintCallable)
    static void SortFText(UPARAM(Ref) TArray<FText>& TargetArrayRef, bool IsDescending);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReplaceFStringWithRegex(const FString& SourceString, const FString& RegexString, const FString& To);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString JoinFTextArray(const TArray<FText>& SourceArray, const FString& Separator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString JoinFNameArray(const TArray<FName>& SourceArray, const FString& Separator, bool IsIgnoreNone);
    
};

