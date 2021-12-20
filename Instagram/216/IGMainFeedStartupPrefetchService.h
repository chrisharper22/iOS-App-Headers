//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMainFeedNetworkSourceController;

@interface IGMainFeedStartupPrefetchService : NSObject
{
    IGMainFeedNetworkSourceController *_mainFeedSourceController;
    _Bool _shouldPrefetchOnStartup;
    _Bool _shouldPrefetchOnForegroundStartup;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldPrefetchOnForegroundStartup; // @synthesize shouldPrefetchOnForegroundStartup=_shouldPrefetchOnForegroundStartup;
@property(readonly, nonatomic) _Bool shouldPrefetchOnStartup; // @synthesize shouldPrefetchOnStartup=_shouldPrefetchOnStartup;
- (void)_prefetchOnForegroundStartupIfNeeded;
- (void)_prefetchOnStartupIfNeeded;
- (void)_cleanupMainFeedNetworkSource;
- (id)mainFeedSourceController;
- (id)initWithApplication:(id)arg1 launchOptions:(id)arg2 mainFeedSourceController:(id)arg3 gCPUController:(id)arg4 featureSetProvider:(id)arg5;

@end
