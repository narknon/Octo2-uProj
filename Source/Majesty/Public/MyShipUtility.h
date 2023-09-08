#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMYSHIP_CUSTOM_TYPE.h"
#include "MyShipUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UMyShipUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMyShipUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSailTextureResourceLabel(EMYSHIP_CUSTOM_TYPE SailType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetMyShipMeshResourceLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetMyShipFlipbook();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetMyShipFirstChoiceMeshResourceLabel();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyMyShipCustomizeFirstChoice();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyMyShipCustomize();
    
};

