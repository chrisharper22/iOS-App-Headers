//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGHScrollAdsAdPlatformSponsoredItemWrapper, IGIntentAwareAdsPivotLoggingProviderExtras, IGSessionTracker, IGSponsoredSupportConfiguration, IGUserSession, NSString;

@interface IGIntentAwareAdsPivotLoggingProvider : NSObject
{
    NSString *_sessionID;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGIntentAwareAdsPivotLoggingProviderExtras *_loggingExtras;
    IGHScrollAdsAdPlatformSponsoredItemWrapper *_viewModel;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfig;
    IGSessionTracker *_sessionTracker;
}

+ (void)logFetchSkipEventWithExtras:(id)arg1 userSession:(id)arg2;
+ (void)logFetchStartEventWithExtras:(id)arg1 userSession:(id)arg2;
- (void).cxx_destruct;
- (void)logSeeAllEvent;
- (void)_logTapEventWithCarouselIndex:(long long)arg1 clickType:(id)arg2;
- (void)logCTATapWithCarouselIndex:(long long)arg1;
- (void)logCardTapWithCarouselIndex:(long long)arg1;
- (void)logCardImpressionWithCarouselIndex:(long long)arg1;
- (id)buildExtraDictionaryCommonInMultiAdsUnit;
- (void)logCarouselImpression;
@property(readonly, nonatomic) unsigned long long itemPositionInFeed;
@property(readonly, nonatomic) NSString *seedAdTrackingToken;
@property(readonly, nonatomic) NSString *sessionID;
@property(readonly, nonatomic) IGSessionTracker *sessionTracker;
@property(readonly, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration;
- (id)initWithUserSession:(id)arg1 sessionTracker:(id)arg2 viewModel:(id)arg3 loggingExtras:(id)arg4;

@end

