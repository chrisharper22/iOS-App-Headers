//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFPlayerControlling-Protocol.h>

@class AVPlayer, AVPlayerItem, NSString;
@protocol FNFAsset, FNFInternalPlayerDelegate;

@interface FNFAVAudioPlayer : NSObject <FNFPlayerControlling>
{
    id <FNFInternalPlayerDelegate> _delegate;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    id <FNFAsset> _playerAsset;
    id _didStartBoundaryTimeObserver;
    struct FNFPlayerInternalState _internalPlayerState;
    double _preferredForwardBufferDuration;
    _Bool _useTimeDomainPitchAlgorithm;
    _Bool _didStartPlayingAccuracyFix;
    _Bool _disablePreloadingPlayerItem;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool disablePreloadingPlayerItem; // @synthesize disablePreloadingPlayerItem=_disablePreloadingPlayerItem;
@property(nonatomic) _Bool didStartPlayingAccuracyFix; // @synthesize didStartPlayingAccuracyFix=_didStartPlayingAccuracyFix;
- (void)_handleAVPlayerError:(id)arg1;
- (void)playerItemDidFail:(id)arg1;
- (void)playerItemDidPlayToEnd:(id)arg1;
- (void)playerItemDidStall:(id)arg1;
- (void)_playerItemDurationChanged;
- (void)_handleLoadedTimeRanges:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeObserverForPlayerItem:(id)arg1;
- (void)_registerObserverForPlayerItem:(id)arg1;
- (void)_teardownDidStartTimeObserver;
- (void)_setupDidStartTimeObserverFrom:(CDStruct_1b6d18a9)arg1;
- (void)_periodicTimeObserverCallback:(CDStruct_1b6d18a9)arg1;
- (void)_teardownPeriodicTimeObserver;
- (void)_setupPeriodicTimeObserver;
- (float)volume;
- (long long)status;
- (_Bool)showCaptions;
- (void)setVolume:(float)arg1 rampTime:(float)arg2;
- (void)setUserSelectedQuality:(id)arg1;
- (void)setShowCaptions:(_Bool)arg1;
- (void)setRate:(float)arg1 context:(id)arg2;
- (void)setRate:(float)arg1;
- (void)setMuted:(_Bool)arg1 isUserInitiated:(_Bool)arg2 context:(id)arg3;
- (void)setLogger:(id)arg1;
- (void)setLoggingContext:(id)arg1;
- (void)setLiveTraceManager:(id)arg1;
- (void)setEnableClientBackgroundPlayback:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setCaptionParser:(id)arg1;
- (void)setAudioTimeDomainPitchAlgorithmEnabled:(_Bool)arg1;
- (void)setAudioEngine:(id)arg1;
- (void)setAudioDecoder:(id)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 seekReason:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 seekReason:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1 loggingContext:(id)arg2;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (void)removeLevelMeterCallback;
- (float)rate;
- (id)playerLayer;
- (void)_didStartPlaying;
- (void)_playWithPlayReason:(int)arg1 context:(id)arg2;
- (void)playWithContext:(id)arg1;
- (void)play;
- (void)pauseWithPauseReason:(int)arg1 context:(id)arg2;
- (void)pauseWithContext:(id)arg1;
- (void)pause;
- (CDStruct_1b6d18a9)lastStartingTime;
- (CDStruct_1b6d18a9)lastRequestedStartTime;
- (CDStruct_1b6d18a9)lastFrameRenderedPts;
- (_Bool)isMuted;
- (void)invalidate;
- (void)flushTimeObserver:(id)arg1;
- (id)error;
- (void)didDisconnectWithExternalScreen;
- (void)didConnectWithExternalScreen;
- (void)didChangeScreenCaptured;
- (void)debug_simulatePlaybackInteruptionWithError:(id)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (id)currentItem;
- (id)createPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 followMasterClock:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)addTimeObserver:(id)arg1;
- (void)addRepresentationChangedCallback:(CDUnknownBlockType)arg1;
- (void)addLevelMeterCallback:(CDUnknownBlockType)arg1 timeInterval:(CDStruct_1b6d18a9)arg2;
- (void)dealloc;
- (id)initWithPlayerConfig:(CDStruct_b8b5dd59)arg1 automaticallyWaitsToMinimizeStalling:(_Bool)arg2 preferredForwardBufferDuration:(double)arg3;
- (id)initWithPlayerConfig:(CDStruct_b8b5dd59)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

