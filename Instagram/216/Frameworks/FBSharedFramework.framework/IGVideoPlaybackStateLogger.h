//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGVideoPlaybackLogger, IGVideoPlaybackWatchTimeCollector;
@protocol IGVideoPlaybackDataProvider, IGVideoPlaybackStateProvider;

@interface IGVideoPlaybackStateLogger : NSObject
{
    IGVideoPlaybackLogger *_logger;
    IGVideoPlaybackWatchTimeCollector *_watchTimeCollector;
    id <IGVideoPlaybackStateProvider> _stateProvider;
    id <IGVideoPlaybackDataProvider> _playbackDataProvider;
}

- (void).cxx_destruct;
- (void)_handleVideoPausedWithReason:(long long)arg1 representationId:(id)arg2 extras:(id)arg3;
- (void)logVideoPlayerWarning:(id)arg1 representationId:(id)arg2 loggingParams:(id)arg3;
- (void)logVideoSizeChanged:(struct CGSize)arg1 representationId:(id)arg2 lastStartingPosition:(double)arg3 currentPosition:(double)arg4 loopCount:(double)arg5 pip:(_Bool)arg6 extras:(id)arg7;
- (void)logVideoRepresentationChangedFromId:(id)arg1 toId:(id)arg2 lastStartingPosition:(double)arg3 extras:(id)arg4;
- (void)logAudioStateChanged:(_Bool)arg1 representationId:(id)arg2 reason:(long long)arg3 extras:(id)arg4;
- (void)logEventFromState:(long long)arg1 toState:(long long)arg2 loggingParams:(id)arg3;
- (id)initWithConfig:(id)arg1 stateProvider:(id)arg2 playbackDataProvider:(id)arg3 analyticsLogger:(id)arg4 inferChannelPriority:(_Bool)arg5 featureSets:(id)arg6 watchTimeDebugAnnouncer:(id)arg7;

@end
