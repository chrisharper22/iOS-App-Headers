//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, NSDate;

@interface IGPresencePeriodicScheduler : NSObject
{
    unsigned long long _interval;
    CDUnknownBlockType _block;
    FBTimer *_timer;
    NSDate *_lastFetchDate;
}

- (void).cxx_destruct;
- (void)_startFetchingSuggestionsRepeatedly;
- (void)start;
- (void)stop;
- (void)markExecuteTime;
- (id)initWithIntervalInSeconds:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

@end

