#pragma once
#include "CoreMinimal.h"
#include "FieldCommandWidgetSwoonBase.h"
#include "FieldCommandWidgetBattleBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UFieldCommandWidgetBattleBase : public UFieldCommandWidgetSwoonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForgetAbilityIndex;
    
    UFieldCommandWidgetBattleBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenLearnAbilityDialog(FName NPCLabelName, bool IsAbilityFull);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenForgetAbilityDialog(FName NPCLabel, const TArray<int32>& SelectAbilityList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenConfirmAbilityDialog(const TArray<int32>& SelectAbilityList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void IsExecLearnAbility(bool& ExecLearnAbility);
    
};

