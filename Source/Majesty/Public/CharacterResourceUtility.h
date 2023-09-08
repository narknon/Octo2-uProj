#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CharacterResourceUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class MAJESTY_API UCharacterResourceUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCharacterResourceUtility();
    UFUNCTION(BlueprintCallable)
    static void GetNPCResourceLabelFromLevelName(TArray<FName>& OutData, FName levelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCurrentSubPartyResourceLabel(TArray<FName>& OutData, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCurrentPartyResourceLabel(TArray<FName>& OutData, UObject* WorldContextObject);
    
};

