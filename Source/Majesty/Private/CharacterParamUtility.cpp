#include "CharacterParamUtility.h"

UCharacterParamUtility::UCharacterParamUtility() {
}

FCharacterParam UCharacterParamUtility::Sub_CharacterParam_CharacterParam(FCharacterParam A, FCharacterParam B) {
    return FCharacterParam{};
}

void UCharacterParamUtility::SetCharacterParamProperty(FCharacterParam& CharaParam, ECHARACTER_PARAM_TYPE ParamType, int32 Value) {
}

FCharacterParam UCharacterParamUtility::Multiply_CharacterParam_RevisionParam(FCharacterParam Base, FCharacterParam Revision) {
    return FCharacterParam{};
}

FCharacterParam UCharacterParamUtility::Multiply_CharacterParam_Float_ExceptMinus(FCharacterParam Base, float Revision) {
    return FCharacterParam{};
}

FCharacterParam UCharacterParamUtility::Multiply_CharacterParam_Float(FCharacterParam Base, float Revision) {
    return FCharacterParam{};
}

void UCharacterParamUtility::MinusParamFromBool(const FCharacterParam Base, TArray<bool>& retList) {
}

FCharacterParam UCharacterParamUtility::InversionMinusParameter(FCharacterParam Base) {
    return FCharacterParam{};
}

int32 UCharacterParamUtility::GetCharacterParamProperty(const FCharacterParam& CharaParam, ECHARACTER_PARAM_TYPE ParamType) {
    return 0;
}

void UCharacterParamUtility::Debug_OutputCharacterParam(const FCharacterParam& Val) {
}

FString UCharacterParamUtility::Debug_MakeCharacterParamString(const FCharacterParam& Val) {
    return TEXT("");
}

FCharacterParam UCharacterParamUtility::Add_CharacterParam_CharacterParam(FCharacterParam A, FCharacterParam B) {
    return FCharacterParam{};
}


