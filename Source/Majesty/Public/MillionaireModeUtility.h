#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "MillionaireModeData.h"
#include "MillionaireModeUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UMillionaireModeUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UMillionaireModeUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActiveMillionaireMode(const FName& millionaireModeLabel);
    
    UFUNCTION(BlueprintPure)
    static int64 GetMillionaireModePrice(const FName& millionaireModeLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMillionaireModeData(const FName& millionaireModeLabel, FMillionaireModeData& outMillionaireModeData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetActiveMillionaireModeData(FMillionaireModeData& outMillionaireModeData);
    
};

