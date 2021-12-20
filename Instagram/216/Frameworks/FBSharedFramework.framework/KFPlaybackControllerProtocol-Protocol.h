//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class KFLayerPlaybackListenerAnnouncer;

@protocol KFPlaybackControllerProtocol <NSObject>
@property(nonatomic) _Bool allowQueuedCommands;
@property(copy, nonatomic) CDUnknownBlockType onReadyForPlayback;
@property(copy, nonatomic) CDUnknownBlockType onPlayEnd;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) long long playCountRemaining;
@property(readonly, nonatomic) _Bool isFinished;
@property(readonly, nonatomic) _Bool isCurrentlyPlaying;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)seekToProgressInNextRunLoopOnMainQueue:(double)arg1;
- (KFLayerPlaybackListenerAnnouncer *)playbackAnnouncer;
- (void)playForever;
- (void)playCount:(long long)arg1;
- (void)seekToProgress:(double)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)updateWithTimeDelta:(double)arg1;
@end
