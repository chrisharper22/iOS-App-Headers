//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMainFeedReloadSurfacePrefetchConfig, UIApplication;

@protocol IGSurfacePrefetchListener <NSObject>
- (void)shouldPrefetchSurfaceOnDidEnterBackground:(UIApplication *)arg1;
- (void)shouldPrefetchSurfaceOnWarmStart;
- (void)shouldPrefetchSurfaceOnAppStartup;
- (void)shouldPrefetchSurfaceAfterFeedReload:(IGMainFeedReloadSurfacePrefetchConfig *)arg1;
@end

