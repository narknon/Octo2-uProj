#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDEBUGMENU_STATE.h"
#include "ENOTICE_TYPE.h"
#include "NoticeArgs.h"
#include "KSDebugMenuManager.generated.h"

class AKSDebugMenuManager;
class UUserWidget;

UCLASS(Blueprintable)
class MAJESTY_API AKSDebugMenuManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDEBUGMENU_STATE DebugMenuState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* CurrentWidget;
    
    AKSDebugMenuManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ToggleFCViewer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTutorialAutoCapture(const FString& ResourceName, int32 targetLang, int32 targetPlatform, const FString& fileName_TutorialType, const FString& fileName_ImageNo, const FString& fileName_Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReLocateNPC(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenFCViewer(bool IsOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AKSDebugMenuManager* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseMenu();
    
};

