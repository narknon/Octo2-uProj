#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LibGetParam.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ULibGetParam : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibGetParam();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGameParamToVector4(FVector4& OutData, FName RowName, bool LogEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGameParamToVector2D(FVector2D& OutData, FName RowName, bool LogEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGameParamToVector(FVector& OutData, FName RowName, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static void GetGameParamToInt(FName RowName, int32& Min, int32& Max, int32& Init, int32& Param);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGameParamToFName(FName& Min, FName& Max, FName& Init, FName& Param, FName RowName, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static void GetGameParamToFloatV4(FName RowName, FVector4& OutParams);
    
    UFUNCTION(BlueprintCallable)
    static void GetGameParamToFloat(FName RowName, float& Min, float& Max, float& Init, float& Param);
    
    UFUNCTION(BlueprintCallable)
    static void GetGameParamOnlyToInt(FName RowName, int32& Param);
    
    UFUNCTION(BlueprintCallable)
    static float GetGameParamOnlyToFloat(const FName& RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGameParamMinToInt32(int32& OutData, FName RowName, bool LogEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGameParamMaxToInt32(int32& OutData, FName RowName, bool LogEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGameParamDataToGuid(FGuid& OutData, FName RowName, bool LogEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBattleParamMinToInt32(int32& OutData, FName RowName, bool LogEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBattleParamMaxToInt32(int32& OutData, FName RowName, bool LogEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBattleParamDataToGuid(FGuid& OutData, FName RowName, bool LogEnable);
    
};

