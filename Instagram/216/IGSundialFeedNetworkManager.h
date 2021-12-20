//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSurfacePrefetchListener-Protocol.h"

@class NSString;
@protocol IGSundialFeedSource;

@interface IGSundialFeedNetworkManager : NSObject <IGSurfacePrefetchListener>
{
    id <IGSundialFeedSource> _sundialHomeFeedNetworkSource;
    _Bool _prefetchEnabled;
    _Bool _enableEarlyPrefetch;
}

+ (id)sundialFeedNetworkManagerWithFeedNetworkSource:(id)arg1;
+ (id)sundialFeedNetworkManagerSessionScoped:(id)arg1;
- (void).cxx_destruct;
- (void)shouldPrefetchSurfaceOnDidEnterBackground:(id)arg1;
- (void)shouldPrefetchSurfaceOnWarmStart;
- (void)shouldPrefetchSurfaceOnAppStartup;
- (void)shouldPrefetchSurfaceAfterFeedReload:(id)arg1;
- (void)_prefetchOnceIfEnabled;
- (void)prepareForSundialPrefetch:(id)arg1;
- (id)sundialHomeFeedNetworkSource;
- (void)_setPrefetchEnabled:(_Bool)arg1;
- (id)_initWithSundialFeedNetworkSource:(id)arg1 enableEarlyPrefetch:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
