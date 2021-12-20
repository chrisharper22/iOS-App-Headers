//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, NSArray, NSMutableArray;
@protocol IGLiveInteractivityEvent, IGLiveInteractivityHelperDelegate;

@interface IGLiveInteractivityTimestampHelper : NSObject
{
    id <IGLiveInteractivityHelperDelegate> _delegate;
    double _latestTimestamp;
    NSMutableArray *_events;
    FBTimer *_historicalEventsFireTimer;
    double _timerInterval;
    unsigned long long _nextEventIndex;
    _Bool _supportsRewind;
    _Bool _automaticallyForwardTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool automaticallyForwardTimestamp; // @synthesize automaticallyForwardTimestamp=_automaticallyForwardTimestamp;
- (void)_rewindToPreviousTimestamp:(double)arg1;
- (void)_notifyHistoricalEventReceived:(id)arg1;
- (void)_notifyEventReceived:(id)arg1;
@property(readonly, nonatomic) unsigned long long eventCount;
@property(readonly, nonatomic) double latestTimestamp;
@property(readonly, nonatomic) id <IGLiveInteractivityEvent> latestEvent;
@property(readonly, nonatomic) unsigned long long latestEventIndex;
- (void)seekToTimestamp:(double)arg1;
- (void)addEvent:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allEvents;
- (id)fetchEventsBetweenStart:(double)arg1 end:(double)arg2;
- (void)updateTimestamp:(double)arg1;
- (id)initWithTimerInterval:(double)arg1 supportsRewind:(_Bool)arg2 delegate:(id)arg3;

@end

