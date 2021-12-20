//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGDirectVisualMessagePlayerLoggingInfo : NSObject
{
    _Bool _audioDetected;
    _Bool _isPlayingAudio;
    double _mediaCurrentTime;
    double _duration;
}

@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double mediaCurrentTime; // @synthesize mediaCurrentTime=_mediaCurrentTime;
@property(readonly, nonatomic) _Bool isPlayingAudio; // @synthesize isPlayingAudio=_isPlayingAudio;
@property(readonly, nonatomic) _Bool audioDetected; // @synthesize audioDetected=_audioDetected;
- (id)initWithAudioDetected:(_Bool)arg1 isPlayingAudio:(_Bool)arg2 mediaCurrentTime:(double)arg3 duration:(double)arg4;

@end
