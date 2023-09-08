#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LibMath.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ULibMath : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibMath();
    UFUNCTION(BlueprintCallable)
    static void ToggleBit(int32 Index, UPARAM(Ref) TArray<int32>& BitArray);
    
    UFUNCTION(BlueprintCallable)
    static void SetBit(int32 Index, UPARAM(Ref) TArray<int32>& BitArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBit(int32 Index, const TArray<int32>& BitArray);
    
    UFUNCTION(BlueprintCallable)
    static void ClearBit(int32 Index, UPARAM(Ref) TArray<int32>& BitArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitShiftRight(int32 Value, int32 Shift);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BitShiftLeft(int32 Value, int32 Shift);
    
};

