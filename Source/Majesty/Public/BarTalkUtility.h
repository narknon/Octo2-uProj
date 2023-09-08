#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BarTalkDefine.h"
#include "EBPFuncReturnCode.h"
#include "LevelInfoData.h"
#include "BarTalkUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UBarTalkUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBarTalkUtility();
    UFUNCTION(BlueprintCallable)
    static void GetBarTalkDataByLevelInfo(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FBarTalkDefine& outBarTalkData, const FLevelInfoData& LevelInfoData);
    
};

