#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LibImage.generated.h"

class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class MAJESTY_API ULibImage : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibImage();
    UFUNCTION(BlueprintCallable)
    static bool SaveImageToByteArray(UTextureRenderTarget2D* RenderTarget, const FLinearColor ClearColour, TArray<uint8>& outByteArray);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* LoadImageFromByteArray(const TArray<uint8>& ByteArray, int32 Width, int32 Height, bool& IsValid);
    
};

