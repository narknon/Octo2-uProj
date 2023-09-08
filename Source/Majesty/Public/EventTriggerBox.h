#pragma once
#include "CoreMinimal.h"
#include "ERADARMAP_ICON_TYPE.h"
#include "MJBoxTrigger.h"
#include "PlacementData.h"
#include "EventTriggerBox.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API AEventTriggerBox : public AMJBoxTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredNPCIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequiredItemLabel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PlacementLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlacementData m_PlacementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsSubStory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERADARMAP_ICON_TYPE m_RadarMapIconType;
    
public:
    AEventTriggerBox(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetupTriggerAfterSpawn(FName PlacementLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayEvent(const FString& TalkEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsTalkEventCheck(FString& TalkEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubStoryTrigger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTriggerEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERADARMAP_ICON_TYPE GetRadarMapIconType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlacementLabel() const;
    
};

