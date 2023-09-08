#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AcqUserWidget.h"
#include "WorldMapCursorBase.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UWorldMapCursorBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsSnapping;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CursorImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_CursorPositionLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_FastRotaionLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_SnapTargetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_SnapStartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SnapDurationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SnapElapseTime;
    
public:
    UWorldMapCursorBase();
    UFUNCTION(BlueprintCallable)
    bool UpdateSnap(float DeltaTime, FVector2D& outCouldNotMoveValue);
    
    UFUNCTION(BlueprintCallable)
    void StartSnap(FVector2D SnapTargetPos, float SnapDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector2D SnapInterpolation(const FVector2D& Start, const FVector2D& End, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    FVector2D SetPosition(const FVector2D& newPos, bool keepDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetFastRotaionLinet(const FVector2D& FastRotaionLine);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorPositionLimit(const FVector2D& CursorPositionLimit);
    
    UFUNCTION(BlueprintCallable)
    void OverrideSnapPosition(const FVector2D& newCursorPos, const FVector2D& newTargetPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D MoveSursorToCenter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPosition() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelSnap();
    
    UFUNCTION(BlueprintCallable)
    FVector2D AddCursorPosition(const FVector2D& deltaPos);
    
};

