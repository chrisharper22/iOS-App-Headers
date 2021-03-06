//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol IGDirectAudioPlayingDelegate <NSObject>
- (void)audioPlaybackDidPlayToEnd;
- (void)audioPlaybackDidResumeWithDuration:(double)arg1 progress:(double)arg2;
- (void)audioPlaybackDidPause;
- (void)audioPlaybackDidStartWithDuration:(double)arg1;
- (void)audioPlaybackDidProgress:(double)arg1;
- (void)audioPlaybackDidFailWithError:(NSError *)arg1;
@end

