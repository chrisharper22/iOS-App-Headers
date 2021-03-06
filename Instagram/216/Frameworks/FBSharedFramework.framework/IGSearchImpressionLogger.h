//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGSearchImpressionLogger : NSObject <IGUserSessionEndingObject>
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    NSMutableDictionary *_impressions;
    NSMutableArray *_recommendationIds;
    NSMutableArray *_recommendationNames;
    NSMutableArray *_recommendationTypes;
    NSMutableSet *_serpRowImpressionIds;
}

- (void).cxx_destruct;
- (void)_logSerpResultsImpressionEvent:(id)arg1;
- (void)logImpressionForHCMWithQueryText:(id)arg1 rankToken:(id)arg2 searchSessionId:(id)arg3 selectedType:(id)arg4 selectedId:(id)arg5 serpSessionId:(id)arg6 analyticsModule:(id)arg7 priorModule:(id)arg8 priorQuery:(id)arg9 priorSerpSessionId:(id)arg10 shoppingSessionId:(id)arg11;
- (void)_logViewportViewEventWithQueryText:(id)arg1 idList:(id)arg2 positionList:(id)arg3 sectionList:(id)arg4 sourceList:(id)arg5 typeList:(id)arg6 searchSessionId:(id)arg7 shoppingSessionId:(id)arg8 rankToken:(id)arg9 analyticsModule:(id)arg10 priorModule:(id)arg11 priorSerpSessionId:(id)arg12 priorQuery:(id)arg13;
- (void)_sendImpressionsLogging;
- (void)_clearSerpImpressionsCache;
- (void)userSessionWillEnd;
- (void)searchDidChangeTab;
- (void)searchDidChangeText;
- (void)searchDidExitScreen;
- (void)logKeywordRecommendationItem:(id)arg1;
- (void)logImpressionForSearchItem:(id)arg1;
- (id)initWithAnalyticsLogger:(id)arg1;

@end

