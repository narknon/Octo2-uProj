#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AcqUserWidget.h"
#include "EMAIN_STORY_CATEGORY.h"
#include "EWorldMapZoomType.h"
#include "WorldMapDestinationData.h"
#include "WorldMapIconData.h"
#include "WorldMapTable.h"
#include "WorldMapIconBase.generated.h"

class UVerticalBox;
class UWorldMapStoryInfoDisplayBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UWorldMapIconBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldMapTable m_WorldMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_WorldMapDataLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_GuildIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsCurrentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsDestinationLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsExistsGuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldMapDestinationData> m_OccurringStoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsSelecting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsPlayingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FinishOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AnimDurationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AnimElapseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWorldMapStoryInfoDisplayBase*> m_StoryInfoDisplays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_StoryInfoVerticalBox;
    
public:
    UWorldMapIconBase();
    UFUNCTION(BlueprintCallable)
    bool UpdateVisibility(bool IsInScreen);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnimation(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartStoryInfoDisplayAnimIfNeeded(EWorldMapZoomType ZoomType, bool isFast);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartIcconVisibilityTransitionByZoomType(EWorldMapZoomType ZoomType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartFocus(bool IsFocus, bool isFast);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartEnable(bool isFast);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartDisable(bool isFast);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldMapData(FName Label);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupStoryInfoDisplays(const TArray<FWorldMapDestinationData>& StoryList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupIconImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupIconColor();
    
    UFUNCTION(BlueprintCallable)
    void SetupIcon();
    
    UFUNCTION(BlueprintCallable)
    FVector2D SetPosition(const FVector2D& newPos);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelecting(bool IsSelecting);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDestinationLocation(bool IsDestinationLocation);
    
    UFUNCTION(BlueprintCallable)
    void ScrubAnimation(float ElapsedTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisitedGuild() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisited();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayableIcon(EWorldMapZoomType ZoomType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InitVisibility(EWorldMapZoomType ZoomType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitIsFocusOfStoryInfoDisplays(EWorldMapZoomType ZoomType);
    
    UFUNCTION(BlueprintCallable)
    float IconAnimInterpolation(const float& Start, const float& End, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideAllStoryInfoWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWorldMapIconData GetWorldMapIconData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetWorldMapDataLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWorldMapTable GetWorldMapData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UWorldMapStoryInfoDisplayBase*> GetVisibleStoryInfoWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetSnapPosition() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPosition() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector2D GetOverlapArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSelecting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPlayeingAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOnlyOccurringMerchantSubStory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOccurringStoryByCategory(EMAIN_STORY_CATEGORY StoryCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOccurringMainStory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOccurringAnyStory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDestinationLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCurrentLocation() const;
    
};

