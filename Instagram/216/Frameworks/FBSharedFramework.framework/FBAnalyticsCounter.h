//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBAnalyticsCounter : NSObject
{
    unsigned long long _count;
    NSString *_eventName;
    double _sum;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)jsonObject;
- (void)addValue:(double)arg1;
- (id)initWithValue:(double)arg1 eventName:(id)arg2;

@end

