//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber;

@interface IGUsageInsightsDayChartDataPoint : NSObject
{
    NSDate *_date;
    NSNumber *_timeSpent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *timeSpent; // @synthesize timeSpent=_timeSpent;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)dayString;
- (id)initWithDate:(id)arg1 timeSpent:(id)arg2;

@end

