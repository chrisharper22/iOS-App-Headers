//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCheckpointCoordinator, NSString;

@protocol IGCheckpointCoordinatorDelegate <NSObject>
- (void)checkpointCoordinator:(IGCheckpointCoordinator *)arg1 didTerminateWithChallengeType:(NSString *)arg2 isCleared:(_Bool)arg3;
- (void)checkpointCoordinator:(IGCheckpointCoordinator *)arg1 didSucceedWithType:(unsigned long long)arg2;
- (void)checkpointCoordinatorDidBackToLogin:(IGCheckpointCoordinator *)arg1;
@end

