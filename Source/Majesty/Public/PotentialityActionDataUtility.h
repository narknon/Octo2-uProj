#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EPlayableCharacterID.h"
#include "PotentialityActionData.h"
#include "PotentialityActionDataUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UPotentialityActionDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UPotentialityActionDataUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ReleasePotentialityAction(EPlayableCharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReleasePotentialityAction(EPlayableCharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPotentialityActionDataByPlayableCharacterID(FPotentialityActionData& OutData, EPlayableCharacterID CharacterID, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPotentialityActionData(FPotentialityActionData& OutData, FName TargetLabel, bool LogEnable);
    
};

