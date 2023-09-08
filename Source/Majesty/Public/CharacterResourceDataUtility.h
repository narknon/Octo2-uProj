#pragma once
#include "CoreMinimal.h"
#include "CharacterResourceData.h"
#include "DataTableUtilityBase.h"
#include "CharacterResourceDataUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UCharacterResourceDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UCharacterResourceDataUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetCharacterResourceRowData(FCharacterResourceData& OutData, FName TargetLabel, bool EnableLog);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCharacterResourceLabelNames(TArray<FName>& OutData);
    
};

