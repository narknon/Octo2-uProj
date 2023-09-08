#pragma once
#include "CoreMinimal.h"
#include "ESTORY_SELECT_STATE.h"
#include "KSUserWidgetBase.h"
#include "BarMenuStorySelectBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UBarMenuStorySelectBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BarMenuMode;
    
    UBarMenuStorySelectBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetWidgetState(ESTORY_SELECT_STATE Val);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupStoryData(const FName& WorldMapLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Setup(const FName& WorldMapLabel, bool bIsBarMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetUIParts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBarUIParts(FName TownNameLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenEvent(FName WorldMapLabel, bool IsBarMenu);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESTORY_SELECT_STATE GetWidgetState() const;
    
};

