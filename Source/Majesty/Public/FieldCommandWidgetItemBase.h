#pragma once
#include "CoreMinimal.h"
#include "FieldCommandWidgetBase.h"
#include "FieldCommandWidgetItemBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UFieldCommandWidgetItemBase : public UFieldCommandWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsExecuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSucceeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayEventLabel;
    
public:
    UFieldCommandWidgetItemBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenDialog(FName NPCLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlayEventLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetItemLabels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSucceeded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsExecuted() const;
    
};

