#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AcqListViewWidgetEventPayload.h"
#include "AcqUserWidget.h"
#include "Templates/SubclassOf.h"
#include "AcqListViewWidget.generated.h"

class UAcqListView;
class UAcqListViewEntryItemBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAJESTY_API UAcqListViewWidget : public UAcqUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDecideEvent, FAcqListViewWidgetEventPayload, payload);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCancelEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecideEvent DecideEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelEvent CancelEventDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAcqListView* m_ListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentCursorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint m_CurrentDisplayItemRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAcqUserWidget> m_EntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemDisplayNum;
    
public:
    UAcqListViewWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(const TArray<UAcqListViewEntryItemBase*>& entryItems);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectedIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScrollOffset(float scrollOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEntryItems(const TArray<UAcqListViewEntryItemBase*>& entryItems);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetSelectedIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetScrollOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UAcqListView* GetListView();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<UAcqListViewEntryItemBase*> GetEntryItems();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetEntryItemNum();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearEntryItems();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float AddScrollOffset(float Delta);
    
};

