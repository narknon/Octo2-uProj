#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MapShipObjectBase.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class MAJESTY_API AMapShipObjectBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeDir_Go;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeOffset_Go;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeDir_Return;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeOffset_Return;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ShipMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MyShipFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventFlag_ForceDir_Go;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventFlag_ForceDir_Return;
    
public:
    AMapShipObjectBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void ResetRelativeTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplySailTexture(bool FirstChoice);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRelativeTransform(bool bGo);
    
    UFUNCTION(BlueprintCallable)
    void ApplyMyShipCustomizeFirstChoice();
    
    UFUNCTION(BlueprintCallable)
    void ApplyMyShipCustomize();
    
};

