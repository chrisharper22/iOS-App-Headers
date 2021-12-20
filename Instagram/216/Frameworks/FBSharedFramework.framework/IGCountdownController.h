//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer;
@protocol IGCountdownControllerDelegate;

@interface IGCountdownController : NSObject
{
    id <IGCountdownControllerDelegate> _delegate;
    FBTimer *_countdownTimer;
    long long _counter;
}

- (void).cxx_destruct;
@property(nonatomic) long long counter; // @synthesize counter=_counter;
@property(retain, nonatomic) FBTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(nonatomic) __weak id <IGCountdownControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopCountdownIfNeeded;
- (void)_invalidateTimer;
- (void)startCountdownFrom:(long long)arg1 countdownInterval:(double)arg2;
- (void)dealloc;

@end
