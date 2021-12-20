//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IGLiveBroadcastAvailabilityHelper : NSObject
{
    long long _retryCount;
    double _retryPeriod;
    FBTimer *_retryTimer;
    NSMutableDictionary *_pendingBroadcasts;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

- (void).cxx_destruct;
- (void)_timerFired;
- (void)_removeInfoWithKey:(id)arg1;
- (void)_startRetryTimerIfNecessary;
- (void)checkAvailabilityOfLiveBroadcast:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRetryMaxCount:(long long)arg1 retryPeriod:(double)arg2;

@end

