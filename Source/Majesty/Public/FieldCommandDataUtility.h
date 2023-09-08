#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "FieldCommandData.h"
#include "MJFieldCommandType.h"
#include "Templates/SubclassOf.h"
#include "FieldCommandDataUtility.generated.h"

class AFieldCommandFlowBase;

UCLASS(Blueprintable)
class MAJESTY_API UFieldCommandDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UFieldCommandDataUtility();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetFieldCommandStatusMenuIconLabel(MJFieldCommandType FCType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetFieldCommandNameLabel(MJFieldCommandType FCType);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetFieldCommandIconLabel(MJFieldCommandType FCType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFieldCommandFlowClassType(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TSubclassOf<AFieldCommandFlowBase>& FlowClass, MJFieldCommandType FCType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetFieldCommandDetailLabel(MJFieldCommandType FCType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFieldCommandDataByType(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FFieldCommandData& OutData, MJFieldCommandType FCType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFieldCommandDataByRowName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FFieldCommandData& OutData, FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFieldCommandActionWaitTime(MJFieldCommandType FCType);
    
};

