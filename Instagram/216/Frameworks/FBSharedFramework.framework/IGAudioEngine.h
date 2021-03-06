//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioEngine, AVAudioMixerNode, IGPlaybackTimeline, NSMutableDictionary;

@interface IGAudioEngine : NSObject
{
    IGPlaybackTimeline *_playbackTimeline;
    NSMutableDictionary *_audioDict;
    AVAudioEngine *_audioEngine;
    AVAudioMixerNode *_mainMixer;
}

- (void).cxx_destruct;
- (void)reloadFromDict:(id)arg1;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)play;
- (void)pause;
- (id)saveWithDuration:(double)arg1;
@property(nonatomic) double volume;
- (void)reset;
- (void)unmuteAudioWithUUID:(id)arg1;
- (void)muteAudioWithUUID:(id)arg1;
- (void)reschedulePlaybackWithPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
- (void)deleteAudioWithUUID:(id)arg1;
- (void)playAudioFileWithUUID:(id)arg1;
- (id)scheduleFile:(id)arg1 atTime:(double)arg2 engineUUID:(id)arg3 volume:(float)arg4;
- (id)scheduleFile:(id)arg1 atTime:(double)arg2 engineUUID:(id)arg3;
- (id)scheduleFile:(id)arg1 atTime:(double)arg2;
- (id)init;

@end

