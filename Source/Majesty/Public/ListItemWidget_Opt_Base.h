#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ListItemExWidgetInterface.h"
#include "MJListItemWidget.h"
#include "OptionItemData.h"
#include "ListItemWidget_Opt_Base.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UListItemWidget_Opt_Base : public UMJListItemWidget, public IListItemExWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionItemData m_OptionItemData;
    
public:
    UListItemWidget_Opt_Base();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupWindowResolution(FIntPoint currentResolution);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpacerEnable(bool Enable);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOptionItemData(const FOptionItemData& OptionItemData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshUI();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RefreshGuideData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOptionItemData GetOptionItemData();
    
    
    // Fix for true pure virtual functions not being implemented
};

