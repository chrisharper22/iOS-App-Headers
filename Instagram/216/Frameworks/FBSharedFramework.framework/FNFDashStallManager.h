//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFDashStallManaging-Protocol.h>

@class FNFDashUnstallThresholder, NSString;
@protocol FNFAssetLogging, FNFBandwidthProvider, FNFDashStallManagingDelegate;

@interface FNFDashStallManager : NSObject <FNFDashStallManaging>
{
    struct FNFDashConfig _config;
    CDUnknownBlockType _playerCheckForStallCallback;
    _Bool _stallingTracks[3];
    int _unstallCount;
    FNFDashUnstallThresholder *_unstallThresholder;
    id <FNFBandwidthProvider> _bandwidthProvider;
    id <FNFAssetLogging> _loggingContext;
    id <FNFDashStallManagingDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FNFDashStallManagingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (double)unstallThresholdInSeconds;
- (double)stallThresholdInSeconds;
- (_Bool)stallingForTrack:(long long)arg1;
- (_Bool)shouldStallWithPlaybackTime:(CDStruct_1b6d18a9)arg1 stallThresholdInSeconds:(double)arg2 track:(long long)arg3 checkEnoughTime:(_Bool)arg4 checkUnstall:(_Bool)arg5;
- (struct FNFStallResult)shouldStallWithPlaybackTime:(CDStruct_1b6d18a9)arg1 stallThresholdInSeconds:(double)arg2 checkUnstall:(_Bool)arg3;
- (double)timeUntilStallForTrack:(long long)arg1 playbackTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)shouldRestartAfterStallingWithPlaybackTime:(CDStruct_1b6d18a9)arg1;
- (struct FNFStallDecision)shouldPauseForStallingWithStallReason:(int)arg1 playbackTime:(CDStruct_1b6d18a9)arg2 nextCheckCallback:(CDUnknownBlockType)arg3;
- (void)playerCheckForStallCallback;
- (id)initWithDashConfig:(struct FNFDashConfig)arg1 bandwidthProvider:(id)arg2 unstallThresholder:(id)arg3 loggingContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
