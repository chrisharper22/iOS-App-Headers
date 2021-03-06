//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGVideoPlaybackLoggingConfig;
@protocol IGAnalyticsEventLoggingProtocol, IGWatchTimeDebugAnnouncer;

@interface IGVideoPlaybackLogger : NSObject
{
    IGVideoPlaybackLoggingConfig *_config;
    long long _sequenceNumber;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    _Bool _inferChannelPriority;
    id <IGWatchTimeDebugAnnouncer> _watchTimeDebugAnnouncer;
}

- (void).cxx_destruct;
- (void)_debugWatchTimeInfoLoggedWithMediaPk:(id)arg1 lsp:(double)arg2 time:(double)arg3 duration:(double)arg4 loopCount:(long long)arg5;
- (_Bool)_logImmediately:(id)arg1;
- (void)_logEvent:(id)arg1;
- (long long)_nextSequenceNumber;
- (id)_eventWithName:(id)arg1 representationId:(id)arg2;
- (id)_eventWithName:(id)arg1 module:(id)arg2;
- (void)logVideoPlayerWarning:(id)arg1 representationId:(id)arg2 extras:(id)arg3;
- (void)logVideoSizeChanged:(struct CGSize)arg1 representationId:(id)arg2 lastStartingPosition:(double)arg3 currentPosition:(double)arg4 loopCount:(double)arg5 pip:(_Bool)arg6 extras:(id)arg7;
- (void)logVideoRepresentationChangedFromId:(id)arg1 toId:(id)arg2 lastStartingPosition:(double)arg3 extras:(id)arg4;
- (void)logVideoExitedWithRepresentationId:(id)arg1 extras:(id)arg2;
- (id)_videoStopExtrasDictionaryWithReason:(long long)arg1 lastStartingPosition:(double)arg2 originalPlaybackReason:(long long)arg3 isPIP:(_Bool)arg4 viewSize:(struct CGSize)arg5;
- (void)logVideoPausedWithReason:(long long)arg1 representationId:(id)arg2 lastStartingPosition:(double)arg3 originalPlaybackReason:(long long)arg4 loopCount:(double)arg5 isPIP:(_Bool)arg6 viewSize:(struct CGSize)arg7 extras:(id)arg8;
- (void)logVideoFailedPlayingWithRepresentationId:(id)arg1 lastStartingPosition:(double)arg2 originalPlaybackReason:(long long)arg3 isPIP:(_Bool)arg4 viewSize:(struct CGSize)arg5 extras:(id)arg6;
- (void)logVideoSeekRequestFromTime:(double)arg1 toTime:(double)arg2 representationId:(id)arg3 extras:(id)arg4;
- (void)logAudioStateChanged:(_Bool)arg1 representationId:(id)arg2 reason:(long long)arg3 extras:(id)arg4;
- (void)logVideoUnpausedWithReason:(long long)arg1 representationId:(id)arg2 extras:(id)arg3;
- (void)logVideoStartedPlayingWithReason:(long long)arg1 representationId:(id)arg2 startDelay:(double)arg3 isPIP:(_Bool)arg4 viewSize:(struct CGSize)arg5 extras:(id)arg6;
- (void)logVideoShouldStartWithRepresentationId:(id)arg1 extras:(id)arg2;
- (id)initWithConfig:(id)arg1 analyticsLogger:(id)arg2 inferChannelPriority:(_Bool)arg3 watchTimeDebugAnnouncer:(id)arg4 featureSets:(id)arg5;

@end

