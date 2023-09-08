#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EWorldMapGlobeState.h"
#include "EWorldMapZoomType.h"
#include "WorldMapDarkAreaEffectParam.h"
#include "WorldMapActorBase.generated.h"

class AWorldMapGlobeActorBase;
class UCurveFloat;
class UDarkAreaParticleComponent;
class UParticleSystem;
class USceneComponent;
class UWorldMapPivotComponentBase;

UCLASS(Blueprintable)
class MAJESTY_API AWorldMapActorBase : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWorldMapActorNotice);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldMapActorNotice OnFinishedSetup;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWorldMapPivotComponentBase*> m_PivotComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UWorldMapPivotComponentBase*> m_WorldMapLabelToPivotComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_GlobeRotationLimit_Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldMapZoomType, FVector2D> m_GlobeRotationLimit_Define;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentNormalizedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SelectingPivotLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldMapGlobeState m_WorldMapGlobeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float m_BlurStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float m_WidgetOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float m_WidgetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float m_FrameWidgetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_DarkEffectParticleTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SacredFireParticleTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SacredFireLineParticleTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UDarkAreaParticleComponent*> m_DarkAreaPartcleComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AutoRotateCurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AutoRotateDurationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AutoRotateAnimCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_AutoRotateTarget;
    
public:
    AWorldMapActorBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateZoom(float DeltaTime, bool IsMovedCursor, FVector2D& rotationDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartCameraZoomIfPossible(EWorldMapZoomType NewZoomType, FVector2D GazePoint);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldMapGlobeState(EWorldMapGlobeState NewState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupDarkAreaEffect();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSelectingPivotLable(const FName& WorldMapLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGlobeRotation(const FRotator& NewRotation, FRotator& outClanpedNewRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGlobeLocation(const FVector& NewLocation, FVector& outClanpedNewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentNormalizedTime(float NewCurrentNormalizedTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RotateToCenterByLebelWithAnim(FName WorldMapLabel, UCurveFloat* AnimCurve, float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RotateToCenterByLebel(FName WorldMapLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RotateGlobe(FVector2D RotateDelta, FVector2D& outClampedRotateDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestStartCameraZoom(EWorldMapZoomType NewZoomType, FVector2D GazePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshWorldMapMaskInPlayerSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshWorldMapMask();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOpenSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOpenPlayerSelectSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCloseSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayClosePlayerSelectSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OverrideGazePoint(FVector2D GazePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenWorldMapActor(EWorldMapZoomType initZoomType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void IsReachedGlobeInRotationLimit(bool& isReachedX, bool& isReachedY);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayingZoomSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayingTimeZoneSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayingOpenSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayingOpenPlayerSelectSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayingCloseSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayingClosePlayerSelectSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayingAnySequencer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideAllDarkAreaEffect();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetZoomAlpha();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWorldMapGlobeState GetWorldMapGlobeState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWidgetScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWidgetOpacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UWorldMapPivotComponentBase*> GetSortedPivotComponentsByYaw();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    EWorldMapZoomType GetPrevZoomState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UWorldMapPivotComponentBase*> GetPivotComponents() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDarkAreaParticleComponent* GetOrCreateDarkAreaEffectComponent(const FName& RowName, const FWorldMapDarkAreaEffectParam& EffectParam);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    EWorldMapZoomType GetNextZoomState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetIsZooming();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetGlobeWorldPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FRotator GetGlobeRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetGlobeLocation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USceneComponent* GetGlobeComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AWorldMapGlobeActorBase* GetGlobeActor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFrameWidgetScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EWorldMapZoomType GetCurrentZoomState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetClosePlayerSelectSequencerDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlurStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorldMapPivotComponentBase* FindPivotComponent(const FName& WorldMapLabel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseWorldMapActor();
    
};

