//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGSundialAudioPageMetadataPlaybackTimes : NSObject
{
    double _audioStartTime;
    double _playableAudioDuration;
    double _totalAudioDuration;
}

+ (id)playbackTimesForAudioAsset:(id)arg1 customAudioStartTime:(double)arg2;
+ (id)playbackTimesForAudioAsset:(id)arg1;
@property(readonly, nonatomic) double totalAudioDuration; // @synthesize totalAudioDuration=_totalAudioDuration;
@property(readonly, nonatomic) double playableAudioDuration; // @synthesize playableAudioDuration=_playableAudioDuration;
@property(readonly, nonatomic) double audioStartTime; // @synthesize audioStartTime=_audioStartTime;
- (id)initWithAudioStartTime:(double)arg1 playableAudioDuration:(double)arg2 totalAudioDuration:(double)arg3;

@end

