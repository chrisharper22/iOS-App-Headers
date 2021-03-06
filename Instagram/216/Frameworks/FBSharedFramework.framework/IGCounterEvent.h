//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol IGAnalyticsLoggerBatched;

@interface IGCounterEvent : NSObject
{
    NSMutableDictionary *_pendingCounters;
    id <IGAnalyticsLoggerBatched> _logger;
}

- (void).cxx_destruct;
- (void)save;
- (void)reset;
- (void)incrementCounter:(id)arg1 byAmount:(long long)arg2;
- (id)initWithLogger:(id)arg1;

@end

