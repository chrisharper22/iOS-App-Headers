//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGContextualAdPivotViewModel, IGFeedItemChain, IGSessionTracker, IGUserSession, NSString;

@interface IGContextualAdPivotLoggingProvider : NSObject
{
    IGFeedItemChain *_feedItemChain;
    IGSessionTracker *_sessionTracker;
    IGUserSession *_userSession;
    NSString *_chainingSessionID;
    IGContextualAdPivotViewModel *_viewModel;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (void)_sendDismissPivotEvent;
- (void)logDismissPivot;
- (void)logCardImpressionWithCarouselIndex:(long long)arg1;
- (void)logCardTapWithCarouselIndex:(long long)arg1;
- (void)logCarouselImpression;
- (id)initWithUserSession:(id)arg1 feedItemChain:(id)arg2 sessionTracker:(id)arg3 chainingSessionID:(id)arg4 viewModel:(id)arg5 analyticsModule:(id)arg6;

@end

