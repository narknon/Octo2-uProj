#pragma once
#include "CoreMinimal.h"
#include "FieldCommandWidgetSwoonBase.h"
#include "MonsterListData.h"
#include "FieldCommandWidgetMonsterBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UFieldCommandWidgetMonsterBase : public UFieldCommandWidgetSwoonBase {
    GENERATED_BODY()
public:
    UFieldCommandWidgetMonsterBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenMonsterReleaseDialogInBattle(const TArray<FMonsterListData>& ShowMonsterList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenMonsterReleaseDialog(const TArray<FMonsterListData>& ShowMonsterList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetReleaseMonsterList(TArray<int32>& ReleaseMonsterList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseMonsterReleaseDialog();
    
};

