#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "MainMenuBase.generated.h"

class UMainMenuListBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UMainMenuBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UMainMenuBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PreCloseActionFromPartyChat();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PreCloseAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenMissionRecordReOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenFastWorldMap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void IsFastWorldMapMode(bool& FastWorldMapMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UMainMenuListBase* GetMainMenuList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CanMainMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void CanCloseMainMenu(bool& CanClose);
    
};

