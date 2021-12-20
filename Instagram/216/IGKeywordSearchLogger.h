//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGKeywordSearchModel, NSMutableOrderedSet, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGKeywordSearchLogger : NSObject
{
    IGKeywordSearchModel *_keywordSearchModel;
    NSString *_query;
    NSString *_searchSessionID;
    NSString *_module;
    NSMutableOrderedSet *_seenItemModels;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
}

- (void).cxx_destruct;
- (id)_keywordSearchEventWithEventName:(id)arg1;
- (void)logReportSearchResultsWithReason:(long long)arg1 response:(id)arg2;
- (void)logViewportImpressionsAndClearCache;
- (void)addSeenKeywordSearchResultItemModel:(id)arg1;
- (void)logBackPressedWithRankToken:(id)arg1;
- (void)logSearchResultClickWithResponse:(id)arg1 selectionExtras:(id)arg2;
- (void)logSearchResultsWithResponse:(id)arg1 searchTime:(double)arg2;
- (id)initWithKeywordSearchModel:(id)arg1 searchSessionID:(id)arg2 query:(id)arg3 module:(id)arg4 analyticsLogger:(id)arg5;

@end

