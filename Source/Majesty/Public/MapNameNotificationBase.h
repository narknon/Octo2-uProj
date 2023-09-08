#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EMAP_NAME_NOTIFICATION_OPEN_OWNER.h"
#include "KSUserWidgetBase.h"
#include "MapNameNotificationBase.generated.h"

class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UMapNameNotificationBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMAP_NAME_NOTIFICATION_OPEN_OWNER m_OpenOwner;
    
public:
    UMapNameNotificationBase();
    UFUNCTION(BlueprintCallable)
    void SetOpenOwner(EMAP_NAME_NOTIFICATION_OPEN_OWNER Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetLevelChangeVisible(ESlateVisibility IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetNotification();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OpenEventAreaUI(FName RegionName, FName MapName, UTexture* EmblemTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OpenAreaUI(FName RegionName, FName MapName, int32 EncounterLevel, int32 DangerLevel, bool IsOpenKeep, UTexture* EmblemTexture, FName NotificationFormat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseAreaUIDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseAreaUI();
    
};

