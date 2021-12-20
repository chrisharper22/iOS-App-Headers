//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, NSDate;
@protocol IGStoryAdEndSceneVideoManagerDelegate;

@interface IGStoryAdEndSceneVideoManager : NSObject
{
    FBTimer *_endSceneVideoTimer;
    double _endSceneTimerPauseDuration;
    NSDate *_endSceneVideoTimerPauseTime;
    id <IGStoryAdEndSceneVideoManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryAdEndSceneVideoManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_endSceneVideoTimerFiredWithStartTime:(id)arg1 videoDuration:(double)arg2 endSceneLength:(double)arg3;
- (void)resumeTimerIfSuspended;
- (void)pauseTimer;
- (void)stopTimer;
- (void)startTimerForVideoDuration:(double)arg1 endSceneLength:(double)arg2;

@end
