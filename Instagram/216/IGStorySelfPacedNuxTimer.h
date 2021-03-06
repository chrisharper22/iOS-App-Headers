//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, NSDate;
@protocol IGStorySelfPacedNuxTimerDelegate;

@interface IGStorySelfPacedNuxTimer : NSObject
{
    double _delay;
    FBTimer *_timer;
    NSDate *_startTime;
    NSDate *_lastPausedTime;
    double _totalPausedDuration;
    id <IGStorySelfPacedNuxTimerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStorySelfPacedNuxTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_invokeDelegateCallbackIfNeeded;
- (void)resume;
- (void)pause;
- (void)start;
- (id)initWithDelay:(double)arg1;

@end

