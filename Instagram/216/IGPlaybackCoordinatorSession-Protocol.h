//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGPlaybackCoordinator, IGPlaybackCoordinatorEventContext, IGPlaybackCoordinatorSessionPlaybackEligibility;

@protocol IGPlaybackCoordinatorSession <NSObject>
- (void)applyCoordinatedEvent:(long long)arg1 withContext:(IGPlaybackCoordinatorEventContext *)arg2;
- (IGPlaybackCoordinatorSessionPlaybackEligibility *)playbackEligibility;
- (void)willAttachToCoordinator:(IGPlaybackCoordinator *)arg1;
@end
