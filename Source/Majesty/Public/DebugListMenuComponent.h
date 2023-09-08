#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugListMenuDecidedDelegate.h"
#include "DebugListMenuDelegateDelegate.h"
#include "DebugListMenuFilter.h"
#include "DebugListMenuItem.h"
#include "DebugListMenuComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UDebugListMenuComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDebugListMenuComponent();
    UFUNCTION(BlueprintCallable)
    void SetDelegateOnDecided(FDebugListMenuDecided onDecided);
    
    UFUNCTION(BlueprintCallable)
    void SetDelegateOnClosed(FDebugListMenuDelegate OnClosed);
    
    UFUNCTION(BlueprintCallable)
    void OpenMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable)
    void InitMenu(int32 filterColNum, int32 itemColNum);
    
    UFUNCTION(BlueprintCallable)
    void CloseMenu();
    
    UFUNCTION(BlueprintCallable)
    void ClearDelegateOnDecided();
    
    UFUNCTION(BlueprintCallable)
    void AddItemDataArray(const TArray<FDebugListMenuItem>& Data);
    
    UFUNCTION(BlueprintCallable)
    void AddItemData(const FDebugListMenuItem& Data);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterDataArray(const TArray<FDebugListMenuFilter>& Data);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterData(const FDebugListMenuFilter& Data);
    
    UFUNCTION(BlueprintCallable)
    void AddFilter(int32 Index, FText& Text, bool bChecked);
    
};

