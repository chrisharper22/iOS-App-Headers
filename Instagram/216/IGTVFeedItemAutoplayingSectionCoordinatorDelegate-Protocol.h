//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMedia, IGTVFeedItemAutoplayingSectionCoordinator, IGVideoPlaybackLoggingRequiredExtras, NSDictionary, UIView;

@protocol IGTVFeedItemAutoplayingSectionCoordinatorDelegate <NSObject>
- (void)autoplayingSectionCoordinator:(IGTVFeedItemAutoplayingSectionCoordinator *)arg1 didPlayMediaToEnd:(IGMedia *)arg2;
- (void)autoplayingSectionCoordinator:(IGTVFeedItemAutoplayingSectionCoordinator *)arg1 didUpdateFeedItem:(IGMedia *)arg2 forReason:(long long)arg3;
- (_Bool)shouldUpdateSeenStateForAutoplayingSectionCoordinator:(IGTVFeedItemAutoplayingSectionCoordinator *)arg1;
- (UIView *)playbackViewForAutoplayingSectionCoordinator:(IGTVFeedItemAutoplayingSectionCoordinator *)arg1;
- (struct CGSize)viewSizeForAutoplayingSectionCoordinator:(IGTVFeedItemAutoplayingSectionCoordinator *)arg1;
- (double)imageWidthForAutoplayingSectionCoordinator:(IGTVFeedItemAutoplayingSectionCoordinator *)arg1;
- (IGVideoPlaybackLoggingRequiredExtras *)requiredLoggingExtrasForAutoplayingSectionCoordinator:(IGTVFeedItemAutoplayingSectionCoordinator *)arg1;
- (NSDictionary *)loggingExtrasForAutoplayingSectionCoordinator:(IGTVFeedItemAutoplayingSectionCoordinator *)arg1;
@end

