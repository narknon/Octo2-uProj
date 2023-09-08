#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AcqUserWidget.h"
#include "ECreditWidgetType.h"
#include "StaffCreditTable.h"
#include "StaffCreditWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UStaffCreditWidgetBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WidgetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsScrollWidget;
    
public:
    UStaffCreditWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateStaging(float stagingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Setup(UPARAM(Ref) TArray<FStaffCreditTable>& itemArray);
    
    UFUNCTION(BlueprintCallable)
    void SetStagingTime(float StartTime, float stagingTime);
    
    UFUNCTION(BlueprintCallable)
    void SetStagingPositionY(float startY, float endY);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollWidget(bool isScroll);
    
    UFUNCTION(BlueprintCallable)
    void SetCreditWidgetType(ECreditWidgetType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetCanvasPosition(UPARAM(Ref) FVector2D& Pos);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool NewIsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScrollWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWidgetWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetWidgetSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWidgetHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECreditWidgetType GetCreditWidgetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCanvasPosition() const;
    
    UFUNCTION(BlueprintCallable)
    void CalcWidgetSize();
    
};

