//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBCCPlaybackPixelBufferProviding-Protocol.h>

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, FBCCVideoPlaybackConfiguration, NSString;
@protocol FBCCPlaybackControllerDelegate;

@interface FBCCVideoPlaybackPixelBufferProvider : NSObject <FBCCPlaybackPixelBufferProviding>
{
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerItemVideoOutput *_videoOutput;
    id _timeObserver;
    _Bool _seeking;
    CDStruct_1b6d18a9 _lastSeekTime;
    double _lastObservedEffectivePlaybackRate;
    _Bool _repeats;
    _Bool _playing;
    _Bool _isReadyToPlay;
    _Bool _shouldConstrainPlayerTimesToPlayableRange;
    id <FBCCPlaybackControllerDelegate> _delegate;
    AVAsset *_asset;
    FBCCVideoPlaybackConfiguration *_configuration;
    CDStruct_e83c9415 _playableRange;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldConstrainPlayerTimesToPlayableRange; // @synthesize shouldConstrainPlayerTimesToPlayableRange=_shouldConstrainPlayerTimesToPlayableRange;
@property(readonly, nonatomic) FBCCVideoPlaybackConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) _Bool isReadyToPlay; // @synthesize isReadyToPlay=_isReadyToPlay;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(nonatomic) CDStruct_e83c9415 playableRange; // @synthesize playableRange=_playableRange;
@property(nonatomic) __weak id <FBCCPlaybackControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_audioSessionRouteChange:(id)arg1;
- (_Bool)_isReversed;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_didPlayToEnd:(id)arg1;
- (void)_effectivePlaybackRateDidChange:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (CDStruct_1b6d18a9)transformTimeUsingPlayableRange:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
@property(readonly, nonatomic) double progress;
- (void)seekToPosition:(double)arg1;
- (void)_seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)pause;
- (void)playInReverse;
- (void)playFromTime:(CDStruct_1b6d18a9)arg1;
- (void)playFromStart;
- (void)play;
@property(nonatomic) float volume;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) double playbackRate;
@property(readonly, nonatomic) double effectivePlaybackRate;
- (struct __CVBuffer *)copyPixelBufferForTime:(CDStruct_1b6d18a9)arg1 timeForDisplay:(CDStruct_183601bc *)arg2;
- (_Bool)hasNewPixelBufferForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)providerTimeForHostTime:(double)arg1;
@property(readonly, nonatomic) _Bool isStatic;
@property(readonly, nonatomic) struct OpaqueCMTimebase *timebase;
- (void)dealloc;
- (id)initWithAVAsset:(id)arg1 supportHDR:(_Bool)arg2 customAudioMix:(id)arg3 configuration:(id)arg4 videoComposition:(id)arg5;
- (id)initWithAVAsset:(id)arg1 customAudioMix:(id)arg2 configuration:(id)arg3 videoComposition:(id)arg4;
- (id)initWithAVAsset:(id)arg1 customAudioMix:(id)arg2 configuration:(id)arg3;
- (id)initWithAVAsset:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

