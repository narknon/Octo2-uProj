#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AcqUserWidget.h"
#include "EWorldMapMode.h"
#include "EWorldMapState.h"
#include "EWorldMapZoomType.h"
#include "VectorsToIcon.h"
#include "WorldMapWidgetBase.generated.h"

class AWorldMapActorBase;
class AWorldMapFastTraveler;
class UCurveFloat;
class UWorldMapAreaLabelBase;
class UWorldMapCursorBase;
class UWorldMapIconBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UWorldMapWidgetBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWorldMapEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldMapEvent OnOpenBeginEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldMapEvent OnOpenEndEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldMapEvent OnCloseBeginEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldMapEvent OnCloseEndEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldMapMode WorldMapMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldMapState m_WorldMapState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldMapZoomType m_InitZoomType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UWorldMapIconBase*> m_IconWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVectorsToIcon> m_VectorsToIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWorldMapActorBase* m_WorldMapActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWorldMapFastTraveler* m_WorldMapFastTraveler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsBackGroundMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_CullingMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapCursorBase* m_CursorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapAreaLabelBase* m_AreaLabelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapIconBase* m_SelectedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapIconBase* m_LastActiveSelectedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_CursorInputValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_PrevCursorInputValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_EasedCursorInputValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CursorMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CursorStartMovingEaseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CursorStartMovingEaseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CursorStopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CursorStopMovingEaseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CursorStopMovingEaseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_LastMoveCursorVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FastRotateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartFastRotationEaseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_StartFastRotationEaseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NonFastRotateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartNonFastRotationEaseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_StartNonFastRotationEaseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AutoRotateEaseCurve;
    
public:
    UWorldMapWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateVectorsToIcon();
    
    UFUNCTION(BlueprintCallable)
    void UpdateOverlapWidgetVisibility();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMapIcon();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetWorldMapState(EWorldMapState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetupMapIconStoryInfo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OutFocusWorldMap(bool isFast);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenWorldMapInternal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWorldMap();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsOpening();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsClosing();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsClosed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector2D GetCenterPosition() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FocusWorldMap(bool isFast);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool FindNearestIcon(UWorldMapIconBase*& outIcon, float& outLength) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool FindCurrentLocationWorldMapLabel(FName& WorldMapLabel) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FastCloseWorldMap();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseWorldMapInternal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWorldMap();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckOpenTutorial();
    
};

