#pragma once
#include "CoreMinimal.h"
#include "CharacterActionResource.h"
#include "DataTableUtilityBase.h"
#include "CharactersActionTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UCharactersActionTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UCharactersActionTableUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetCharactersActionRowData(FCharacterActionResource& OutData, FName TargetLabel, bool EnableLog);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCharactersActionLabels(TArray<FName>& LabelList);
    
};

