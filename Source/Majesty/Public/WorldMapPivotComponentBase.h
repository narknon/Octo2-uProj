#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ArrowComponent.h"
#include "EWorldMapMode.h"
#include "WorldMapPivotComponentBase.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UWorldMapPivotComponentBase : public UArrowComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PivotLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PivotRadius;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorldMapLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldMapMode WorldMapMode;
    
public:
    UWorldMapPivotComponentBase();
    UFUNCTION(BlueprintCallable)
    void SetWorldMapMode(EWorldMapMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void OnOpenWorldMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetWorldMapLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcWorldPositionOnGlobe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CalcScreenPositionOnMap(FVector2D& outScreenPos) const;
    
};

