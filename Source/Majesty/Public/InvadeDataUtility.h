#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "InvadeData.h"
#include "InvadeDataUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UInvadeDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UInvadeDataUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 InvadeDataLabelToId(FName Label);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName InvadeDataIdToLabel(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InvadeDataExistsByLabel(FName Label);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetInvadeDataLabelList();
    
    UFUNCTION(BlueprintCallable)
    static void GetInvadeDataByLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FInvadeData& outInvadeData, FName Label);
    
};

