//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@protocol FNFDashStallManaging <NSObject>
- (void)playerCheckForStallCallback;
- (double)unstallThresholdInSeconds;
- (double)stallThresholdInSeconds;
- (_Bool)stallingForTrack:(long long)arg1;
- (struct FNFStallResult)shouldStallWithPlaybackTime:(CDStruct_1b6d18a9)arg1 stallThresholdInSeconds:(double)arg2 checkUnstall:(_Bool)arg3;
- (_Bool)shouldStallWithPlaybackTime:(CDStruct_1b6d18a9)arg1 stallThresholdInSeconds:(double)arg2 track:(long long)arg3 checkEnoughTime:(_Bool)arg4 checkUnstall:(_Bool)arg5;
- (double)timeUntilStallForTrack:(long long)arg1 playbackTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)shouldRestartAfterStallingWithPlaybackTime:(CDStruct_1b6d18a9)arg1;
- (struct FNFStallDecision)shouldPauseForStallingWithStallReason:(int)arg1 playbackTime:(CDStruct_1b6d18a9)arg2 nextCheckCallback:(void (^)(void))arg3;
@end
