//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGModernFeedVideoCellListener-Protocol.h"

@class MISSING_TYPE;

@interface IGFeedPlaybackEventController : NSObject <IGModernFeedVideoCellListener>
{
    MISSING_TYPE *media;
    MISSING_TYPE *sundialPrefetchProvider;
    MISSING_TYPE *launcherSet;
    MISSING_TYPE *seenStateStore;
    MISSING_TYPE *sponsoredInfoProvider;
    MISSING_TYPE *analyticsLogger;
    MISSING_TYPE *enableSeenState;
    MISSING_TYPE *applyCoverPhotoLoadStates;
    MISSING_TYPE *useFixedMediaLoadingProgress;
}

- (void).cxx_destruct;
- (id)init;
- (void)feedVideoCell:(id)arg1 didFailPlayingVideo:(id)arg2 withError:(id)arg3;
- (void)feedVideoCellDidPause:(id)arg1;
- (void)feedVideoCellDidStop:(id)arg1;
- (void)feedVideoCell:(id)arg1 didUpdateCoverImageLoadStatus:(long long)arg2;
- (void)feedVideoCell:(id)arg1 didBeginPlayingVideo:(id)arg2;
- (void)feedVideoCell:(id)arg1 didUpdatePlaybackStatus:(id)arg2;
- (void)feedVideoCell:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)manageEventsFor:(id)arg1;
- (id)initWithMedia:(id)arg1 sundialPrefetchProvider:(id)arg2 launcherSet:(id)arg3 seenStateStore:(id)arg4 sponsoredInfoProvider:(id)arg5 analyticsLogger:(id)arg6 enableSeenState:(_Bool)arg7;

@end

