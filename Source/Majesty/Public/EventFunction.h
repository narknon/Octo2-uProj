#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Channels/MovieSceneEvent.h"
#include "EKSCharacterDir.h"
#include "ETIMEZONE_TRIGGER_TYPE.h"
#include "PlacementData.h"
#include "JsonFieldData.h"
#include "MovieSceneAtomSection.h"
#include "RequestDelegateDelegate.h"
#include "EventFunction.generated.h"

class AKSCharacterBase;
class UMovieScene;

UCLASS(Blueprintable)
class MAJESTY_API UEventFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEventFunction();
    UFUNCTION(BlueprintCallable)
    static bool SetTheaterEventData(FRequestDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void SetNpcTalkDir(AKSCharacterBase* targetNpc, int32 ParamDir);
    
    UFUNCTION(BlueprintCallable)
    static bool SetJsonData(TArray<FString>& outEventData, UJsonFieldData* jsonData, const FString& Command, const FString& eventJsonName);
    
    UFUNCTION(BlueprintCallable)
    static bool SetEventData(FRequestDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayEventTheater(FName EventName, int32 OverrideTimeZone);
    
    UFUNCTION(BlueprintCallable)
    static void MakeActiveEventLabelList(TArray<FName>& outEventLabelList, const FPlacementData& placeData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEventSkipEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEventPlayTheater();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEventPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEventBattleDefeatNextEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEventActive(int32 StartFlag, int32 EndFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActiveByEventFlag(int32 StartFlag, int32 EndFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetThiefChokerFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetThiefActionLabelPartyChat(int32 PartyChatId, bool bTheater);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetThiefActionLabelName(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetThiefActionLabelMainStory(int32 StoryTaskID, bool bTheater);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlayingEventName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMovieSectionsCount(UMovieScene* Movie);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMovieSceneEventTriggerSection* GetMovieSectionData(UMovieScene* Movie, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMovieSceneAtomSection* GetMovieSectionAtomData(UMovieScene* Movie, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMovieSceneEvent GetEventTriggerParam(UMovieSceneEventTriggerSection* Section, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEventTriggerNum(UMovieSceneEventTriggerSection* Section);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AKSCharacterBase* GetEventTargetCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEventMemoryObjectFlag(int32 StoryTaskID, int32 FlagID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EKSCharacterDir GetEventDir(int32 ParamDir);
    
    UFUNCTION(BlueprintCallable)
    static bool EventPlay(FName EventName, AKSCharacterBase* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EventFlagRefresh(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckCurrentTimeByTimeZoneTriggerType(ETIMEZONE_TRIGGER_TYPE timeZoneTrgType);
    
};

