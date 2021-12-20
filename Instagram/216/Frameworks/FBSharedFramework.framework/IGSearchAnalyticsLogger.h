//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSearchSession, IGSessionTracker, IGUserSession, NSMutableArray, NSString;

@interface IGSearchAnalyticsLogger : NSObject
{
    IGUserSession *_userSession;
    NSMutableArray *_recommendationIds;
    NSMutableArray *_recommendationNames;
    NSMutableArray *_recommendationTypes;
    IGSearchSession *_searchSession;
    IGSessionTracker *_shoppingSearchSessionTracker;
    IGSessionTracker *_serpSessionTracker;
    NSString *_priorSerpSessionId;
    NSString *_priorQuery;
}

+ (id)resultTypeList:(id)arg1;
+ (id)resultsList:(id)arg1;
+ (void)logSearchBeginWithModule:(id)arg1 analyticsLogger:(id)arg2;
+ (void)logSearchClickEventWithSearchString:(id)arg1 sessionId:(id)arg2 userId:(id)arg3 likelyPosition:(unsigned long long)arg4 module:(id)arg5 analyticsLogger:(id)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *priorQuery; // @synthesize priorQuery=_priorQuery;
@property(readonly, nonatomic) NSString *priorSerpSessionId; // @synthesize priorSerpSessionId=_priorSerpSessionId;
@property(readonly, nonatomic) IGSessionTracker *serpSessionTracker; // @synthesize serpSessionTracker=_serpSessionTracker;
@property(readonly, nonatomic) IGSessionTracker *shoppingSearchSessionTracker; // @synthesize shoppingSearchSessionTracker=_shoppingSearchSessionTracker;
@property(readonly, nonatomic) IGSearchSession *searchSession; // @synthesize searchSession=_searchSession;
- (void)logSearchHCMAudioTapWithAudioAsset:(id)arg1 tapToken:(id)arg2 module:(id)arg3;
- (void)logSearchGlyphsShownWithRankToken:(id)arg1 module:(id)arg2 priorModule:(id)arg3;
- (void)logSerpMediaDisplayedWithSearchQuery:(id)arg1 rankToken:(id)arg2 analyricsModule:(id)arg3 priorModule:(id)arg4;
- (void)logSeeMoreClickWithQuery:(id)arg1 rankToken:(id)arg2 module:(id)arg3;
- (void)logSerpSessionInitiatedWithSearchQuery:(id)arg1 analyticsModule:(id)arg2 priorModule:(id)arg3;
- (void)logSearchTypeaheadSessionInitiatedWithAnalyticsModule:(id)arg1 priorModule:(id)arg2;
- (void)logSearchSessionInitiatedWithAnalyticModule:(id)arg1 priorModule:(id)arg2;
- (void)logKeywordRecommendationItem:(id)arg1;
- (void)logSerpClickWithSearchQuery:(id)arg1 rankToken:(id)arg2 searchType:(id)arg3 selectedID:(id)arg4 selectPosition:(long long)arg5 selectedSourceType:(unsigned long long)arg6 selectedType:(id)arg7 selectedFollowStatus:(long long)arg8 clickType:(id)arg9 analyticsModule:(id)arg10 priorModule:(id)arg11 selectedSubType:(id)arg12 shoppingSessionId:(id)arg13;
- (void)logEchoClickWithSearchQuery:(id)arg1 rankToken:(id)arg2 searchType:(id)arg3 clickType:(id)arg4 analyticsModule:(id)arg5 priorModule:(id)arg6;
- (void)logSearchClickWithSearchQuery:(id)arg1 rankToken:(id)arg2 searchType:(id)arg3 selectedID:(id)arg4 selectPosition:(long long)arg5 selectedSourceType:(unsigned long long)arg6 selectedType:(id)arg7 selectedFollowStatus:(long long)arg8 clickType:(id)arg9 analyticsModule:(id)arg10 priorModule:(id)arg11 location_DANGEROUS:(id)arg12;
- (void)logSearchResultsWithQueryText:(id)arg1 resultIDs:(id)arg2 resultTypes:(id)arg3 resultSourceTypes:(id)arg4 rankToken:(id)arg5 analyticsModule:(id)arg6;
- (id)initWithSearchSession:(id)arg1 shoppingSearchSessionTracker:(id)arg2 serpSessionTracker:(id)arg3 userSession:(id)arg4 priorSerpSessionId:(id)arg5 priorQuery:(id)arg6;
- (id)initWithSearchSession:(id)arg1 shoppingSearchSessionTracker:(id)arg2 serpSessionTracker:(id)arg3 userSession:(id)arg4;

@end

