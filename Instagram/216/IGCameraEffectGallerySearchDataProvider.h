//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGCameraEffectFeedNetworkDataProvider.h"

@class IGCameraEffectFeedLoggingContext, IGUserSession, NSString;
@protocol IGCameraEffectFeedDataSourceAnnouncer, IGSearchThrottlingType;

@interface IGCameraEffectGallerySearchDataProvider : IGCameraEffectFeedNetworkDataProvider
{
    IGUserSession *_userSession;
    IGCameraEffectFeedLoggingContext *_loggingContext;
    id <IGCameraEffectFeedDataSourceAnnouncer> _announcer;
    id <IGSearchThrottlingType> _throttler;
    _Bool _isDelaying;
    _Bool _isFirstPage;
    _Bool _isShimmeringEnabled;
    NSString *_query;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (_Bool)isShimmeringEnabled;
- (id)paramsForPageCursor:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)fetchWithDelay;
- (void)fetchMore;
- (void)fetch;
- (void)prefetch;
- (_Bool)isLoading;
- (id)noResultsTitle;
- (_Bool)hidesResultsWhileLoading;
- (id)loadingTitle;
- (id)initWithUserSession:(id)arg1 loggingProductSurface:(long long)arg2 loggingContext:(id)arg3;

@end
