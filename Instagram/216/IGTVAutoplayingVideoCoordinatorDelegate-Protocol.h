//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGTVAutoplayingVideoCoordinator, IGTVAutoplayingVideoCoordinatorState, IGVideoPlaybackLoggingRequiredExtras, NSDictionary;

@protocol IGTVAutoplayingVideoCoordinatorDelegate <NSObject>
- (void)autoplayingVideoCoordinatorDidPlayVideoToEnd:(IGTVAutoplayingVideoCoordinator *)arg1;
- (void)autoplayingVideoCoordinator:(IGTVAutoplayingVideoCoordinator *)arg1 didUpdateShowCaptionsView:(_Bool)arg2;
- (void)autoplayingVideoCoordinator:(IGTVAutoplayingVideoCoordinator *)arg1 didUpdateVideoBuffering:(_Bool)arg2;
- (void)autoplayingVideoCoordinator:(IGTVAutoplayingVideoCoordinator *)arg1 videoPlayerDidUpdateCurrentTime:(double)arg2 shouldFlushSeenStateImmediately:(_Bool)arg3;
- (void)autoplayingVideoCoordinator:(IGTVAutoplayingVideoCoordinator *)arg1 didUpdateAudioEnabled:(_Bool)arg2;
- (void)autoplayingVideoCoordinator:(IGTVAutoplayingVideoCoordinator *)arg1 didUpdateState:(IGTVAutoplayingVideoCoordinatorState *)arg2;
- (struct CGSize)viewSizeForAutoplayingVideoCoordinator:(IGTVAutoplayingVideoCoordinator *)arg1;
- (IGVideoPlaybackLoggingRequiredExtras *)loggingRequiredExtrasForAutoplayingVideoCoordinator:(IGTVAutoplayingVideoCoordinator *)arg1;
- (NSDictionary *)loggingExtrasForAutoplayingVideoCoordinator:(IGTVAutoplayingVideoCoordinator *)arg1;
@end
