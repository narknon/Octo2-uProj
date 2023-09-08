#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CharacterParam.h"
#include "ECHARACTER_PARAM_TYPE.h"
#include "CharacterParamUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UCharacterParamUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCharacterParamUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCharacterParam Sub_CharacterParam_CharacterParam(FCharacterParam A, FCharacterParam B);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterParamProperty(UPARAM(Ref) FCharacterParam& CharaParam, ECHARACTER_PARAM_TYPE ParamType, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCharacterParam Multiply_CharacterParam_RevisionParam(FCharacterParam Base, FCharacterParam Revision);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCharacterParam Multiply_CharacterParam_Float_ExceptMinus(FCharacterParam Base, float Revision);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCharacterParam Multiply_CharacterParam_Float(FCharacterParam Base, float Revision);
    
    UFUNCTION(BlueprintCallable)
    static void MinusParamFromBool(const FCharacterParam Base, TArray<bool>& retList);
    
    UFUNCTION(BlueprintCallable)
    static FCharacterParam InversionMinusParameter(FCharacterParam Base);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharacterParamProperty(const FCharacterParam& CharaParam, ECHARACTER_PARAM_TYPE ParamType);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_OutputCharacterParam(const FCharacterParam& Val);
    
    UFUNCTION(BlueprintCallable)
    static FString Debug_MakeCharacterParamString(const FCharacterParam& Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCharacterParam Add_CharacterParam_CharacterParam(FCharacterParam A, FCharacterParam B);
    
};

