#pragma once
#include "CoreMinimal.h"
#include "DarkAreaData.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "DarkAreaDataUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UDarkAreaDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UDarkAreaDataUtility();
    UFUNCTION(BlueprintCallable)
    static void SetIsDarkendDarkArea(const FName& DarkAreaLabel, bool isDarkend);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsDarkendAllDarkArea(bool isDarkend);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLevelDarkend(const FName& levelLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLevelBelongDarkArea(const FName& levelLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDarkendDarkAreaLabel(const FName& DarkAreaLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDarkendAnyDarkArea();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAllowLostWayLevel(const FName& levelLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDarkendWorldMapLabels(TArray<FName>& outWorldMapLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDarkendLevelLabels(TArray<FName>& outLevelLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDarkendDarkAreaLabels(TArray<FName>& outDarkAreaLabel);
    
private:
    UFUNCTION(BlueprintCallable)
    static bool GetDarkAreaLabelByLevel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, const FName& levelLabel, FName& outDarkAreaLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDarkAreaByLevel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, const FName& levelLabel, FDarkAreaData& outDarkArea);
    
public:
    UFUNCTION(BlueprintCallable)
    static void GetAllDarkAreaLabels(TArray<FName>& outDarkAreaLabel);
    
};

