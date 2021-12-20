//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, IGStoryTPMAAudioPlayerPreloadPool, IGUserSession;

@interface IGStoryTPMAAudioPlayerController : NSObject
{
    IGUserSession *_userSession;
    IGStoryTPMAAudioPlayerPreloadPool *_audioPlayerPreloadPool;
    _Bool _audioEnabled;
    AVPlayer *_audioPlayer;
}

- (void).cxx_destruct;
- (void)_setupAudioPlayerWithItem:(id)arg1;
- (void)reset;
- (void)stopWithReason:(long long)arg1;
- (void)pauseWithReason:(long long)arg1;
- (void)play;
- (void)seekToBeginningAndPause;
- (void)seekToBeginning;
- (void)setupPlayerWithStoryItem:(id)arg1;
- (void)setAudioEnabled:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 audioPlayerPreloadPool:(id)arg2;

@end

