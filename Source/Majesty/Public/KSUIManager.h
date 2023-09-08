#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "AcqManagerBase.h"
#include "EKSUIKind.h"
#include "EKSUIPartsKind.h"
#include "EWIDGET_CREATE_PHASE.h"
#include "KSUICommonDialogParam.h"
#include "KSUIManager.generated.h"

class UKSUserWidgetBase;
class ULetterBoxBase;
class ULoadAssetHandle;
class UUserWidget;
class UWidgetTemporaryHiddenComponent;

UCLASS(Blueprintable)
class MAJESTY_API AKSUIManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetTemporaryHiddenComponent* m_WidgetTemporalyHiddenComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ActiveStackUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ClosingStackUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UKSUserWidgetBase*> m_WidgetTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKSUIKind, FName> m_TypeToName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWIDGET_CREATE_PHASE, ULoadAssetHandle*> m_LoadHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULetterBoxBase* m_LetterWidget;
    
public:
    AKSUIManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void UnLockInputMode();
    
    UFUNCTION(BlueprintCallable)
    void SetLetterWidget(ULetterBoxBase* letterWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetHelpOpen(bool IsOpen);
    
    UFUNCTION(BlueprintCallable)
    void ResetHiddenFlag();
    
    UFUNCTION(BlueprintCallable)
    void ResetFromTitle();
    
    UFUNCTION(BlueprintCallable)
    void RemoveUIPartsList(EKSUIPartsKind Kind);
    
    UFUNCTION(BlueprintCallable)
    void RemoveList(EKSUIKind Kind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshWidget();
    
    UFUNCTION(BlueprintCallable)
    void RefreshTextLanguageAllWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RefreshTextLanguage() const;
    
    UFUNCTION(BlueprintCallable)
    int32 PushActive(UUserWidget* PushUI);
    
    UFUNCTION(BlueprintCallable)
    void PopActiveUIWith(UUserWidget* UI, bool& IsPop, UUserWidget*& PopUI);
    
    UFUNCTION(BlueprintCallable)
    void PopActive(UUserWidget*& PopUI);
    
    UFUNCTION(BlueprintCallable)
    int32 OpenRequest(UUserWidget* PushUI, bool UseStack);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UKSUserWidgetBase* OpenDialog(const FKSUICommonDialogParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    UKSUserWidgetBase* Open(EKSUIKind Kind);
    
    UFUNCTION(BlueprintCallable)
    bool NoticeCreatedWidget(EWIDGET_CREATE_PHASE CreatePhase);
    
    UFUNCTION(BlueprintCallable)
    void LockInputMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void IsWidgetRunning(bool& IsRunning, EKSUIKind Kind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStack(UUserWidget* CheckUI) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCreatedWidget(EKSUIKind UIType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosingStackFromWidget(UUserWidget* CheckUI) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosingStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBulkLoadedWidgets(EWIDGET_CREATE_PHASE CreatePhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, UKSUserWidgetBase*> GetWidgetTable();
    
    UFUNCTION(BlueprintCallable)
    static UKSUserWidgetBase* GetWidgetInstance(EKSUIKind UIType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKSUserWidgetBase* GetWidget(FName WidgetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetUIPartsList(EKSUIPartsKind Kind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetTemporaryHiddenComponent* GetTemporayHiddenComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftClassPtr<UUserWidget> GetPartsWidgetClass(EKSUIPartsKind Kind);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKSUserWidgetBase* GetList(EKSUIKind Kind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULetterBoxBase* GetLetterWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInputModeLock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHelpOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveStackCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetActiveStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ForceCloseMenuCommon(EKSUIKind Kind);
    
    UFUNCTION(BlueprintCallable)
    void DeleteStack(UUserWidget* DeleteUI);
    
    UFUNCTION(BlueprintCallable)
    void Debug_ShowDebugInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void Debug_ShowActiveUI_Stack();
    
    UFUNCTION(BlueprintCallable)
    void Debug_ForceClearActiveUI_Stack();
    
    UFUNCTION(BlueprintCallable)
    void Debug_EnableTextSizeInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void Debug_CreateWidget(FName WidgetName);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* CreateUIParts(EKSUIPartsKind Kind);
    
    UFUNCTION(BlueprintCallable)
    UKSUserWidgetBase* CreateTemporaryWidgets(EKSUIKind UIType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UUserWidget* CreateNonManagedWidgetByClassPtr(const TSoftClassPtr<UUserWidget>& Class, int32 ZOrder, ESlateVisibility InVisibility) const;
    
    UFUNCTION(BlueprintCallable)
    void CloseRequestFromKind(EKSUIKind Kind, bool ForceClose);
    
    UFUNCTION(BlueprintCallable)
    void CloseRequest(UUserWidget* PopUI, bool ForceClose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseMenuCommon(EKSUIKind Kind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseDialog(bool& outIsSelected, int32& outFocusIndex);
    
    UFUNCTION(BlueprintCallable)
    UKSUserWidgetBase* Close(EKSUIKind Kind);
    
    UFUNCTION(BlueprintCallable)
    bool BulkLoadWidgets(EWIDGET_CREATE_PHASE CreatePhase);
    
    UFUNCTION(BlueprintCallable)
    bool BulkCreateWidgets(EWIDGET_CREATE_PHASE CreatePhase);
    
    UFUNCTION(BlueprintCallable)
    bool AddUIPartsList(EKSUIPartsKind Kind, UUserWidget* UIParts);
    
    UFUNCTION(BlueprintCallable)
    void AddToViewport(UUserWidget* Target, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    void AddToPlayerScreen(UUserWidget* Target, int32 ZOrder);
    
};

