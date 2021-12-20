//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, NSDate;
@protocol IGLiveShoppingIncentiveTimerDelegate;

@interface IGLiveShoppingIncentiveTimer : NSObject
{
    NSDate *_expirationDate;
    NSDate *_gracePeriodExpirationDate;
    FBTimer *_timer;
    id <IGLiveShoppingIncentiveTimerDelegate> _delegate;
    long long _state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <IGLiveShoppingIncentiveTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_tick;
- (id)initWithExpirationDate:(id)arg1 gracePeriod:(double)arg2;

@end
