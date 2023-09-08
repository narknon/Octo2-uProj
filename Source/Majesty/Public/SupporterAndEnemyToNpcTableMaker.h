#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SupporterAndEnemyToNpcTableMaker.generated.h"

UCLASS(Abstract, Blueprintable)
class MAJESTY_API USupporterAndEnemyToNpcTableMaker : public UObject {
    GENERATED_BODY()
public:
    USupporterAndEnemyToNpcTableMaker();
    UFUNCTION(BlueprintCallable)
    bool GetTable(TMap<FName, FName>& outSupporterLabelToNpcLableTable, TMap<FName, FName>& outEnemyLabelToNpcLableTable);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetEnemyLabelsByEnemyGroup(TArray<FName>& outEnemeyLabels, FName EnemyGroupLabel);
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginMakeTable();
    
};

