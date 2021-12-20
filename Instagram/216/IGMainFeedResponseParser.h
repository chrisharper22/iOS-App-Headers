//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMainFeedNetworkSourceSessionDeps, NSString;

@interface IGMainFeedResponseParser : NSObject
{
    NSString *_analyticsModule;
    IGMainFeedNetworkSourceSessionDeps *_mainFeedNetworkSourceSessionDeps;
}

- (void).cxx_destruct;
- (id)injectedCompleteFeedResponse:(id)arg1;
- (id)_loadEmptyFeedSuggestedUsersFromResponse:(id)arg1;
- (id)_logDeliveryEventAndInvalidateParsedPosts:(id)arg1 mainFeedNetworkSource:(id)arg2 requestConfig:(id)arg3 response:(id)arg4 clearOut:(_Bool)arg5 deliveryContext:(unsigned long long)arg6;
- (id)_prependNewPosts:(id)arg1 toQuickCachePost:(id)arg2;
- (id)_updateResultForResponse:(id)arg1 config:(id)arg2 newObjects:(id)arg3 mainFeedNetworkSource:(id)arg4;
- (id)parseResponse:(id)arg1 responseMetadata:(id)arg2 config:(id)arg3 clearOut:(_Bool)arg4 allowDeferment:(_Bool)arg5 mainFeedNetworkSource:(id)arg6 defermentDelegate:(id)arg7;
- (id)initWithMainFeedNetworkSourceSessionDeps:(id)arg1 analyticsModule:(id)arg2;

@end

