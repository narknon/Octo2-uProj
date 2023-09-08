#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "WorldMapDarkAreaEffectParam.h"
#include "DarkAreaParticleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UDarkAreaParticleComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_BaseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_ScaleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldMapDarkAreaEffectParam m_DarkAreaEffectParam;
    
public:
    UDarkAreaParticleComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void SetTransformOffset(const FVector& LocationOffset, const FRotator& RotationOffset, const FVector& ScaleOffset);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnableEffect(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetDarkAreaEffectParam(const FWorldMapDarkAreaEffectParam& newParam);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseLocation(const FVector& baseLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetWorldMapLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDarkAreaLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWorldMapDarkAreaEffectParam GetDarkAreaEffectParam() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyTransform();
    
};

