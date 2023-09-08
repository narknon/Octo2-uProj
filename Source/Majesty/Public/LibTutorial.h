#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CloseFinishDelegateBPDelegate.h"
#include "ETUTORIAL_TYPE.h"
#include "LibTutorial.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ULibTutorial : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibTutorial();
    UFUNCTION(BlueprintCallable)
    static void SetTutorialFinishFlag(ETUTORIAL_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static void OpenTutorialWithCloseCallback(ETUTORIAL_TYPE Type, bool ForceOpen, int32 CharaID, FCloseFinishDelegateBP CloseFinishCallback, bool& IsOpen);
    
    UFUNCTION(BlueprintCallable)
    static void OpenTutorial(ETUTORIAL_TYPE Type, bool ForceOpen, int32 CharaID, bool& IsOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunningTutorial();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckProlouge(int32& CharaID);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckMultiStory(int32& CharaID);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckMerchant(int32& CharaID);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckCoupling_Sin(int32& CharaID);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckCoupling_Odo(int32& CharaID);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckCoupling_Kus(int32& CharaID);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckCoupling_Gak(int32& CharaID);
    
};

