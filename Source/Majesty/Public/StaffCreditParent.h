#pragma once
#include "CoreMinimal.h"
#include "ECreditBgType.h"
#include "ECreditWidgetType.h"
#include "EStaffCreditState.h"
#include "KSUserWidgetWithState.h"
#include "StaffCreditParent.generated.h"

class UDataTable;
class UStaffCreditWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UStaffCreditParent : public UKSUserWidgetWithState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaffCreditWidgetBase*> CreditPartsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* creditTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float totalStagingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewportHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisolvePartsTime;
    
public:
    UStaffCreditParent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool WipeOut(float PlayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool WipeIn(float PlayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartStaging();
    
    UFUNCTION(BlueprintCallable)
    bool SetupStaffCredit();
    
    UFUNCTION(BlueprintCallable)
    void SetTotalStagingTime(float NewTotalStagingTime);
    
    UFUNCTION(BlueprintCallable)
    void SetNextState_Local(EStaffCreditState NextState);
    
    UFUNCTION(BlueprintCallable)
    void SetDataTable(UDataTable* NewCreditTable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBackground(ECreditBgType bgType, FName imageName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReleaseAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsWidgetOutOfViewport(UStaffCreditWidgetBase* CreditWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayDebugInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStaffCreditState GetPrevState_Local() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStaffCreditState GetCurrentState_Local() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStaffCreditWidgetBase* CreateCreditWidget(ECreditWidgetType WidgetType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCompleteScroll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddCreditWidgetToScrollList(UStaffCreditWidgetBase* CreditWidget);
    
};

