//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface IGFeedPlaybackPrefetchManager : NSObject
{
    MISSING_TYPE *videoLoader;
    MISSING_TYPE *analyticsModule;
    MISSING_TYPE *enableModernPrefetching;
    MISSING_TYPE *enableModernCancellation;
}

- (void).cxx_destruct;
- (id)init;
- (void)coordinatePrefetchingFor:(id)arg1 displayedBy:(id)arg2 isIGTV:(_Bool)arg3;
- (id)initWithVideoLoader:(id)arg1 launcherSet:(id)arg2 analyticsModule:(id)arg3;

@end

